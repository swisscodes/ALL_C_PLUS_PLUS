#include <iostream>

bool lengthCompare(std::string&, std::string&){
   return true;
}

typedef bool Func(const std::string&, const std::string&);
typedef decltype(lengthCompare) Func2; // equivalent type

// Func and Func2 have function type
    
 // FuncP and FuncP2 have pointer to function type
 typedef bool(*FuncP)(const std::string&, const std::string&);
 typedef decltype(lengthCompare) *FuncP2;  // equivalent type


 auto f1(int) -> int (*)(int*, int);

int main()
{
    
}