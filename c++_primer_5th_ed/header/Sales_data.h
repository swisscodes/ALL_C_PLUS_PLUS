#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

Sales_data accum, trans, *salesptr;

int main()
{
    return 0;
}