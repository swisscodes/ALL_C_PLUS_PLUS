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
        static inline int aa = 0;  // or you an choose to define it in .cpp file our outside the class as int Rsales_data::aa = 9; without the inline
        static int ab;  // or you an choose to define it in .cpp file our outside the class as int Rsales_data::ab = 9;
        //method is also private
        double avg_price() const { return units_sold? revenue / units_sold : 0;}

    // constructors added
    public:
        // nondelegating constructor initializes members from corresponding arguments
        RSales_data(const std::string s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) { }

        // remaining constructors all delegate to another constructor
        RSales_data(): RSales_data("", 0, 0) {}
        explicit RSales_data(std::string s): RSales_data(s, 0,0) {}
        explicit RSales_data(std::istream &is): RSales_data() { read(is, *this); }
        // new members: operations on Sales_data objects
        std::string isbn() const { return bookNo; }
        RSales_data &combine(const RSales_data &);

    // nonmember Sales_data friend functions
    friend RSales_data add(const RSales_data &, const RSales_data &);
    friend std::ostream &print(std::ostream &, const RSales_data &);
    friend std::istream &read(std::istream &, RSales_data &);
    
};

int RSales_data::ab = 9;

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