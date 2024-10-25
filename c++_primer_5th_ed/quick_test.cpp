#include <iostream>
#include <vector>

int main()
{
    // int cnt = 0;
    // int r = 5;
    // const int sz = cnt;
    // ++cnt; ++cnt;

    // std::cout << "\u0F4F " << cnt << std::endl;

    struct {
        char a;
        int b:5,
        c:11, :0,
        d:8;
        struct {int ee:8;} e;
    } ok;

    std::vector<int> my {1,2,3,4,5};
    auto it = my.begin();
    my.insert(my.end(), 6);
    std::cout << my[0] << std::endl;
}