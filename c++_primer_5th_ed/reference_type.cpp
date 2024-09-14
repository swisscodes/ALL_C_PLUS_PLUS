#include <iostream>

int main()
{
    int ival = 1024;
    int &refIval = ival;
    int value_of_ref = refIval;

    std::cout << ival << " " << refIval << std::endl;

    // when we change a reference value we are actually changing the object value it refered to.
    refIval = 9;
    std::cout << ival << " " << ival << std::endl; // here ival change because the reference was to the memory address of ival

    std::cout << ival << " " << value_of_ref << std::endl; // value_of_ref wont change because its a new variable storing the value at the address of reference
    return 0;

    /* After a reference has been defined, all operations on that reference are actually
       operations on the object to which the reference is bound:


       When we assign to a reference, we are assigning to the object to which the reference
       is bound. When we fetch the value of a reference, we are really fetching the value of
       the object to which the reference is bound. Similarly, when we use a reference as an
       initializer, we are really using the object to which the reference is bound:
    */
}