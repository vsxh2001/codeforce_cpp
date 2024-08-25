#include <iostream>

int main()
{
    int test_cases, result;
    std::cin >> test_cases;
    while (test_cases--)
    {
        int l, r, L, R;
        std::cin >> l >> r >> L >> R;
        int r_min = std::min(r, R);
        int l_max = std::max(l, L);
        if (l_max > r_min)
        {
            std::cout << 1 << std::endl;
            continue;
        }
        int result = r_min - l_max + 2;
        result -= int(r == R) + int(l == L);
        std::cout << result << std::endl;
    }
}