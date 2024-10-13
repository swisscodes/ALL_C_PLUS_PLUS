#include <iostream>

inline int my_inline(int a, int b)
{
    #ifndef NDEBUG
        // _ _func_ _ is a local static defined by the compiler that holds the function's name
        std::cerr << __func__ << ": array size is " << std::endl;
    #endif
    return (a >= b ? a : b) ;
}

int main()
{
    std::cout << my_inline(5, 6) << std::endl;
}

/*
There's a story there. You may well already know, but just in case you don't, 
function inlining refers to a compiler optimization where when a function is called, 
instead of stopping and jumping to the function, the compiler effectively copy-pastes the entire 
function code in place at the call site. No jump can in some very specific circumstances mean faster code. 
But it does come with a downside, more code = bigger program. 
There's a lot to it but this is not what your quesiton is about.

The inline keyword was originally intended to be a non-binding suggestion to the compiler that it inline 
the function attached. In some compilers it still is. However, 
in the past 20 years compilers have gotten very good at detecting when the best cases for 
inlining are on their own and are now generally better than humans at it, so using inline for that purpose 
is generally not something you should be doing. However, there is a side effect of inline 
which you can use it for - a function marked inline is allowed to possess multiple definitions 
within the program without it being an ODR violation. Your program is IFNDR (which is to say, invalid)
 if all the definitions are not identical, but it's an ODR wildcard which can help you out in some situations.

e.g. functions defined in headers can* lead to ODR violations as if that header is included multiple times, 
then the defintion of that function exists in multiple TUs so you have a program with multiple definitions in your program, 
which breaks the One Definition Rule. However, if that function were marked inline 
then the compiler would ignore the violation and continue
* in many (but not all) situations, things defined in headers are implicitly inline anyway
Also note that you should not take that explanation as advice that you can write a whole bunch of header-only 
code without needing to worry about ODR because inline will make it magically go away. There are still a lot 
of problems with going fully header-only and the quality of the code it produces, 
and just shutting the compiler up doesn't solve them.
*/