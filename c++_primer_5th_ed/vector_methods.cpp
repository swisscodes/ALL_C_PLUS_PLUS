#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vec {1,2,3,4,5};
    std::vector<int> my_vec1 {5,4,3,2,1};

    std::vector<int>::iterator ptr = my_vec.erase(my_vec.begin(), my_vec.end());
    /*here because we erased all and vector is empty then whats return is also equals to begin
    so begin == end is true. ptr is end and also its the begining iterator
    */

    std::cout << my_vec.size() << std::endl;

    my_vec.insert(ptr,my_vec1.begin(), my_vec1.end());
    std::cout << my_vec[4] << std::endl;
    std::cout << my_vec.size() << std::endl;

    //clear method to clear all
    /*
        slist.clear(); // delete all the elements within the container
        slist.erase(slist.begin(), slist.end()); // equivalent
    */

   std::string s;
   s.insert(s.size(), 5, 'a');
   /*
    assign
    append
    replace
   */
  
}