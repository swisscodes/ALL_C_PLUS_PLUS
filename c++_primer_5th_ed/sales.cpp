#include <iostream>
#include "Sales_item.h"
int main()
{
    // read ISBN, number of copies sold, and sales price
    Sales_item book, book2;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cin >> book >> book2;
    if(book.isbn() == book2.isbn()) {
        std::cout << book + book2 << std::endl;
        return 0;
        
    }
    else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
    }

    return 0;
}