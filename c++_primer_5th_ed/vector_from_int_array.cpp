#include <iostream>
#include <vector>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> int_vector(std::begin(arr), std::end(arr));

    std::cout << int_vector[3] << std::endl;

    int arr1[int_vector.size()]; // it will compile but dont do it its an optional vla variable-length-arrays


    for(size_t i = 0; i < int_vector.size(); ++i)
	{
		arr1[i] = int_vector[i];
	}
    std::cout << arr1[3];

    return 0;
}

/* In the C language, there's an (optional) language feature called variable-length-arrays (or VLAs).
 These allow you to construct a C-array with a non-constant-expression size. 
 They were very very controversial in C to the point that the C standard walked back support for them 
 to being an optional feature. This feature never made it to C++. However, many compilers 
 for C++ will enable the feature as an optional extra. IIRC MSVC does it by default until you opt out. 
 This is probably why your code is ocmpiling (using a VLA) but since what you're doing is not part of standard C++, 
 there's no guarantee any other compiler will take it and your setup is right to warn you about it
 */