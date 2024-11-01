#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int num = 5;
    std::vector<int> my = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto it = std::find_if(my.begin(), my.end(), [](const int& num) {return num == 2;});


    std::cout << std::distance(it, my.end()-1) << std::endl;

    auto count = std::count_if(my.begin(), my.end(), [](const int& num) {return num == 2;});
    
    std::cout << count << std::endl;

    // auto my_lambda = [&num] () {
    //     std::cout << num <<std::endl; 
    //     --num;
    //     if(num>=1) {
    //         return false;
    //     }
    //     return true;
    // };
    // std::string ok;
    // while(num) {
    //     auto answer = my_lambda();
    //     ok =(answer ? "true" : "false");
    //     std::cout << ok << std::endl;
    // }

}