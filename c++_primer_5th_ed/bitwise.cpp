#include <iostream>

int main()
{
    int a = 7;
    int b = 6;

    int d = 1 & 7; // 00000001 00000111 = 001 // for each column match returns 1 if not returns 0   //and operator

    int cc = 6 | 7; // 00000110 00000111 = 111  // as long as there is 1 in each column 1 is returned otherwise returns zero only when both side is 0 //or operator

    int cd = 6 ^ 7; // 00000110 00000111 = 001  // both of the bits must be opposite of each other to return 1 and 0 otherwise e.g 1 0 //xor operator

    int cf = ~7; // 00000111 = 000  // takes the number and turn it to its opposite //not operator

    // sift actually means cutout to the left/right and add to the amount you cutout to what ever you cut out.

    int cg = 7 >> 2; // 00000111 =   // 00000001 shift the number to right by amount we specify //right shift operator
    int ch = 6 << 2; // 00000110 = 00011000  /shift the number to right by amount we specify //right shift operator //left shift operator

    std::cout << cg << std::endl;
}