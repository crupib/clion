#include <iostream>
#include <functional>

int main() {
    // plus<int> with explicit cast from double -> int, then endl
    std::cout
        .operator<<( std::plus<int>{}(1, static_cast<int>(1.23)) )
        .operator<<( std::endl );

    // transparent plus<> (heterogeneous), then '\n'
    std::cout
        .operator<<( std::plus<>{}(1, 1.23) )
        .operator<<( '\n' );

    return 0;
}
