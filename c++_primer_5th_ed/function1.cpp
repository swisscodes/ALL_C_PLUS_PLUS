#include <iostream>


int larger(const int a, const int *ptr)// declaring a as const int makes us able to pass literal int
{
    const int res = (a > *ptr && a != *ptr) ? a : *ptr > a ?  *ptr : 0;
    return res;
}

int fact(int num)
{
    if(num > 1)
    {
        return fact(num-1) * num;
    }
    return num;
}

typedef int arrT[10];
using arrtT1 = int[10]; //equivalent to the one above

//using array as return type
 arrT* func_array(int i);

 int (*func_arr(int i))[10];//same without type declaration

 // returns a pointer to an array of five int elements
 int odd[] = {1,3,5,7,9};
 decltype(odd) *arrPtr(int i);

 /*To understand this declaration, it can be helpful to think about it as follows:
    • func(int) says that we can call func with an int argument.
    • (*func(int)) says we can dereference the result of that call.
    • (*func(int))[10] says that dereferencing the result of a call to func yields an array of size ten.
    • int (*func(int))[10] says the element type in that array is int.
*/

// a newer standard
// fcn takes an int argument and returns a pointer to an array of ten ints
 auto func_new(int i) -> int(*)[10];

 
int main()
{
    int bb = 8;
    const int *p = &bb;
    std::cout << larger(55, p) << std::endl;

    std::cout << fact(5) << std::endl;

}