#include <iostream>

/*
A pointer is a compound type that “points to” another type. Like references, pointers
are used for indirect access to other objects. Unlike a reference, a pointer is an object
in its own right. Pointers can be assigned and copied; a single pointer can point to
several different objects over its lifetime. Unlike a reference, a pointer need not be
initialized at the time it is defined. Like other built-in types, pointers defined at block
scope have undefined value if they are not initialized.

*/

int main()
{
    int a_value = 23;
    int *pt = &a_value;

    std::cout << pt << std::endl;
    /*
    this print the address so we can pass address this way to another address holder type of same type
    e,g int for int string for string double for double like reference
    e,g int &reftype = *pt;
    */

    int any = 7 + *pt; // to get the value in the address and perfome operation
    int yyy = *pt;     // to get the value in the address
    std::cout << any << " " << yyy << std::endl;

    // we can also assign a value direclty
    *pt = 8;
    std::cout << a_value << std::endl; // a value is now 8

    int &rr = *pt;
    std::cout << rr << std::endl;

    /*
    The type void* is a special pointer type that can hold the address of any object. Like
    any other pointer, a void* pointer holds an address, but the type of the object at
    that address is unknown:
    */
    double obj = 3.14, *pd = &obj;
    void *pv = &obj; // obj can be an object of any type
    pv = pd;         // pv can hold a pointer to any type

    /*
    There are only a limited number of things we can do with a void* pointer: We can
    compare it to another pointer, we can pass it to or return it from a function, and we
    can assign it to another void* pointer. We cannot use a void* to operate on the
    object it addresses—we don’t know that object’s type, and the type determines what
    operations we can perform on the object.
    */

    /* A reference is not an object. Hence, we may not have a pointer to a reference.
        However, because a pointer is an object, we can define a reference to a pointer:
    */
    int i = 42;
    int *p;      // p is a pointer to int
    int *&r = p; // r is a reference to the pointer p
    r = &i;      //   r refers to a pointer; assigning &i to r makes p point to i
    *r = 0;      //   dereferencing r yields i, the object to which p points; changes i to 0


    //poniter that point to another pointer
    int ival = 1024;
    int *pi = &ival; // pi points to an int
    int **ppi = &pi; // ppi points to a pointer to an int...... we can say nested pointer
    
    return 0;
}
