#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

struct Sales_data {
    // data members are unchanged from § 2.6.1 (p. 72)
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    // new members: operations on Sales_data objects
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const
    {
        if(units_sold) {
            return revenue/units_sold;
        }
        else {

            return 0;
        }
    }

    // nonmember Sales_data interface functions
    Sales_data add(const Sales_data&, const Sales_data&);
    std::ostream& print(std::ostream&, const Sales_data&);
    std::istream& read(std::istream&, Sales_data&);
 };

#endif