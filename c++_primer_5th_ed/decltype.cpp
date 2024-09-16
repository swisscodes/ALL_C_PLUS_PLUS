#include <iostream>

int main()
{
   /*   decltype(f()) sum = x; // sum has whatever type f returns
        Here, the compiler does not call f, but it uses the type that such a call would return
        as the type for sum. That is, the compiler gives sum the same type as the type that
        would be returned if we were to call f.
        The way decltype handles top-level const and references differs subtly from the
        way auto does. When the expression to which we apply decltype is a variable,
        decltype returns the type of that variable, including top-level const and
        references:
    */

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    // decltype(cj) z; // error: z is a reference and must be initialized
    
    int li = 42, *p = &li, &r = li;

    int yy = 99;
    decltype(*p) c = li;
    decltype(*p) cd = yy;
    std::cout << c << std::endl;
    std::cout << cd << std::endl;



    /*  Another important difference between decltype and auto is that the deduction
        done by decltype depends on the form of its given expression . What can be
        confusing is that enclosing the name of a variable in parentheses affects the type
        returned by decltype. When we apply decltype to a variable without any
        parentheses, we get the type of that variable. If we wrap the variable’s name in one
        or more sets of parentheses, the compiler will evaluate the operand as an expression.
        A variable is an expression that can be the left-hand side of an assignment. As a
        result, decltype on such an expression yields a reference:
        Click here to view code image
        // decltype of a parenthesized variable is always a reference
        decltype((i)) d;    // error: d is int& and must be initialized
        decltype(i) e;      // ok: e is an (uninitialized) int
    */

    // decltype of a parenthesized variable is always a reference
    //decltype((li)) d; // error: d is int& and must be initialized
    decltype(li) e; // ok: e is an (uninitialized) int
}


