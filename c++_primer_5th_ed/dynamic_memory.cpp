#include <iostream>
#include <memory>


//shared_ptr class automatically frees dynamic objects when they are no longer needed

std::shared_ptr<int> factory(int arg) {
        //process arg as appropriate
        return std::make_shared<int>(arg);
}

void use_factory(int arg)
 {
    std::shared_ptr<int> p = factory(arg);
    std::cout << *p << std::endl; // use p
 } 
 //p goes out of scope; the memory to which p points is automatically freed 

int main()
{
    auto p = std::make_shared<int>(42);
    auto q(p);
    int yy=9;
    auto gg(yy);

     auto r = std::make_shared<int>(42);

     std::cout << *r << std::endl;

     use_factory(5);

}