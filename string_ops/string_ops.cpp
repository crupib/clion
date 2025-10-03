#include <string>
#include <iostream>
#include <functional> // for std::plus / std::minus

// C++11+ (works in C++14/17/20 too)
template <typename T, typename U>
constexpr auto simple_plus(T lhs, U rhs) -> decltype(lhs + rhs) {
    return lhs + rhs;
}

int main() {
    std::string myString;
    std::cout << "Please input something and press Enter key.\n";
    std::getline(std::cin, myString);
    std::cout << "You have inputted: " << myString << '\n';

    // Use transparent operators (C++14+) so heterogeneous args are OK
    std::cout << std::plus<>{}(1, 1.23)  << '\n'; // 2.23
    std::cout << std::minus<>{}(1, 1.23) << '\n'; // -0.23

    int lhs = 10;
    int rhs = 20;

    auto sum = simple_plus(lhs, rhs);  // call the template
    std::cout << "sum: " << sum << '\n';

    // Cross-type call to show template deduction works
    std::cout << "10 + 2.5 = " << simple_plus(10, 2.5) << '\n';

    return 0;
}
