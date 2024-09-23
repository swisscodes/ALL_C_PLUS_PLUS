#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> score_holder(11, 0);
    std::cout << "Enter 10 numbers" << std::endl;
    unsigned grade;

    while (std::cin >> grade)
    {
        if (grade <= 100)
        {
            ++score_holder[grade / 10]; // increase whats inside that index
            /*
                increment the counter for the current cluster is equivalent to
                score_handler[ind] = scores[ind] + 1; // increment the count
            */
        }
    }

    for (size_t i : score_holder)
    {
        std::cout << i << std::endl;
    }

    std::cout << score_holder.size();
}