#include <iostream>

int main()
{
    int arr[]{1, 2, 3};
    int arr1[3]{1, 2, 3};
    int arr2[3] = {1, 2, 3};

    constexpr unsigned sz = 3;
    int ia1[sz] = {0, 1, 2};           // array of three ints with values 0, 1, 2
    int a2[] = {0, 1, 2};              // an array of dimension 3
    int a3[5] = {0, 1, 2};             // equivalent to a3[] = {0, 1, 2, 0, 0}
    std::string a4[3] = {"hi", "bye"}; // same as a4[] =  {"hi", "bye", ""}
                                       // int a5[2] = {0,1,2};    // error: too many initializers

    for (auto item : arr)
    {
        std::cout << item << " " << std::endl;
    }

    /*  Character Arrays Are Special
        Character arrays have an additional form of initialization: We can initialize such arrays
    */

    char a1[] = {'C', '+', '+'};        // list initialization, no null
    char a22[] = {'C', '+', '+', '\0'}; // list initialization, explicit null
    char a33[] = "C++";                 // null terminator added automatically
    // const char a4[6] = "Daniel";       // error: no space for the null!

    int(*Parray)[3] = &arr;

    int swiss[10];
    for (size_t i = 0; i < sizeof(swiss); i++)
    {
        swiss[i] = i;
    }

    for (auto item : swiss)
    {
        std::cout << item << " " << std::endl;
    }

    int jdhs[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int(&arrRef)[10] = jdhs;
}