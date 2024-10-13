#include <iostream>

std::string::size_type sumLength(const std::string&, const std::string&);
std::string::size_type largerLength(const std::string&, const std::string&);

decltype(sumLength)* getFcn(const std::string& );

int main()
{
    auto aa = getFcn("swiss");
}