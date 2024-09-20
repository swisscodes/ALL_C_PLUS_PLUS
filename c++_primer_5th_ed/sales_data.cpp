#include <iostream>
#include "header/Sales_data.h"

using std::cout; using std::cin; using std::endl; using std::cerr;

int main()
{
    Sales_data data1, data2;

    double price = 0;
    cin >> data1.bookNo >> data1.unitsSold >> price;
    data1.revenue = data1.unitsSold * price;

    cin >> data2.bookNo >> data2.unitsSold >> price;
    data2.revenue = data2.unitsSold * price;

    if (data1.bookNo == data2.bookNo)
    {
        unsigned total_cnt = data1.unitsSold + data2.unitsSold;
        double total_revenue = data1.revenue + data2.revenue;

        cout << data1.bookNo << " " << total_cnt
             << " " << total_revenue << " ";
        if (total_cnt != 0)
        {
            cout << total_revenue / total_cnt << endl;
        }
        else
        {
            cout << "(no sales)" << endl;
        }

        const int a = 5;

        constexpr int b = a;
    }
    else
    {
        cerr << "Data must refer to the same ISBN" << endl;

        return -1;
    }

    return 0;
}