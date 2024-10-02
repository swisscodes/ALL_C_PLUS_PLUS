#include <iostream>
#include <vector>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> int_vector(std::begin(arr), std::end(arr));

    std::cout << int_vector[3] << std::endl;

    int arr1[int_vector.size()];

    for(size_t i = 0; i < int_vector.size(); ++i)
	{
		arr1[i] = int_vector[i];
	}
    std::cout << arr1[3];

    return 0;
}