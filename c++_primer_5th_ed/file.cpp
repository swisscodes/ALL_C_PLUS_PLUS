#include <iostream>
#include <fstream>
#include <string>
#include <vector>



int main()
{
    std::vector<std::string> str;
    std::string s;
    std::string d;

    std::ofstream out("test.txt", std::ios_base::app);

    std::getline(std::cin, s);

    out << " " + s;
    out.close();

    do {
        std::cout << "enter anything: ";
        std::cin >> d;
        str.push_back(d);
        

    } while(d != "q");

    
    for (auto word : str)
    {
        std::cout << word << std::endl;
    }
    
}