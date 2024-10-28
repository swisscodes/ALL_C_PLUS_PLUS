#include <iostream>
#include <vector>

int main()
{
    // int cnt = 0;
    // int r = 5;
    // const int sz = cnt;
    // ++cnt; ++cnt;

    // std::cout << "\u0F4F " << cnt << std::endl;

    int a1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int yy = 9;
    int arr[yy];
    int a2[sizeof(a1) / sizeof(*a1)]; // size
    std::cout << sizeof(a1) << " " << sizeof(*a1) << std::endl;

    class YZ
    {
        int gg = 8;
        int arr1[8];
        int arr2[sizeof(arr1) / sizeof(*arr1)];
    };

    // std::vector<int> my {1,2,3,4,5};
    // auto it = my.begin();
    // my.insert(my.end(), 6);
    // std::cout << my[0] << std::endl;
}