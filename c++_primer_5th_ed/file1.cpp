#include <iostream>
#include <fstream>
#include <string>
#include <vector>



int main()
{
    std::vector<std::string> str;
    std::string line;
    std::ofstream out("test2.txt");
    std::ifstream in("test2.txt");

    do {
        std::cout << "enter anything: ";
        std::getline(std::cin, line);
        if(line == "q" || line.empty()){
        }
        else out << line + "\n";
    } while(line != "q" || line.empty());
    out.close();

    while ( std::getline (in, line) )
    {
      
      str.push_back(line);
    }
    in.close();

    for(auto line : str)
    {
        std::cout << line << std::endl;
    }
}