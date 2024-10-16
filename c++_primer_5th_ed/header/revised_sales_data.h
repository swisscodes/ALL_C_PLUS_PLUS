#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

class RSales_data
{
    
    // data members are unchanged from § 2.6.1 (p. 72)
    private :
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;

    // constructors added
    public:
        RSales_data() = default;
        RSales_data(const std::string s = ""): bookNo(s) { }
        RSales_data(const std::string s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) { }
        RSales_data(std::istream &);
        // new members: operations on Sales_data objects
        std::string isbn() const { return bookNo; }
        RSales_data &combine(const RSales_data &);

    private:
        double avg_price() const { return units_sold? revenue / units_sold : 0;}

    // nonmember Sales_data friend functions
    friend RSales_data add(const RSales_data &, const RSales_data &);
    friend std::ostream &print(std::ostream &, const RSales_data &);
    friend std::istream &read(std::istream &, RSales_data &);
    
};

// nonmember Sales_data interface functions
RSales_data add(const RSales_data &, const RSales_data &);
std::ostream &print(std::ostream &, const RSales_data &);
std::istream &read(std::istream &, RSales_data &);

class abc
{
    int a;
    abc(int in) : a{in} {}

};

#endif