#include "fluid.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace fluid::args;
using namespace fluid::alpha_args;

int main() {
    std::cout << ($0 + $1 == $2)(1,10,11) << "\n";
    std::cout << ($0 + $1 + $2)(1,10,11) << "\n";
    std::cout << ($0 + 7)(1,10,11) << "\n";
    std::cout << (($0 + $1)/2) (1, 3) << "\n";
    std::vector<int> v = {9,6,2,8,3,1,4,5,7};
    std::sort(v.begin(), v.end(), $a < $b);
    for (auto const& elem : v) {
        std::cout << elem << ", ";
    }
    std::cout << "\n";

    auto f_sum2 = $a + $b;
    auto f_avg2 = ($a + $b)/2;

    std::cout << f_avg2(2,6) << "\n";
}

