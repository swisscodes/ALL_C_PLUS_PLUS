#include <iostream>
#include <vector>
using std::vector;

void insertDoubleValue(vector<int>& iv, int some_val)
{
    auto iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    while (iter != mid) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            mid = ++iter + iv.size()/2;
        }
        ++iter;
    }
}

void print(const vector<int>& iv)
{
    for (auto i : iv) std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    vector<int> iv = {1, 2, 3, 1, 5, 7, 1, 9};
    insertDoubleValue(iv, 1);
    print(iv);
}