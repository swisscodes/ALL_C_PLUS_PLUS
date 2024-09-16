# c++

we cant reference what doesnt have address, e.g literals that doesnt have address like
int &abc = 43;  wont work except if its a const
const int abc = 43 will work
const auto &j = 42 will also work
