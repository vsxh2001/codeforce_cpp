#include <iostream>
#include <vector>
#include <cmath> // Include cmath for the abs() function

int main()
{
    int test_cases;
    std::cin >> test_cases;
    while (test_cases--)
    {
        int vector_size;
        std::cin >> vector_size;

        // Create a vector of the specified size
        std::vector<int> values(vector_size);

        // Read values into the vector
        for (int i = 0; i < vector_size; ++i)
        {
            std::cin >> values[i];
        }

        // Check the conditions and print the appropriate result
        if (vector_size != 2)
        {
            std::cout << "NO" << std::endl;
        }
        else if (std::abs(values[0] - values[1]) == 1)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }

    return 0;
}