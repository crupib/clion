#include <iostream>
#include <type_traits>
#include <cassert>

int main() {
    std::cout << "Hello, World!" << std::endl;
    static_assert(std::is_object_v<int>);
    static_assert(!std::is_object_v<decltype(main)>);
    int n = 3;
    char c;
    int *p = &n;
    std::cout << *p << std::endl;
    int m = 4;
    p = 0;
    p = nullptr;
    p = &m;
    assert(*p == 4);
    p = &n;
    int *q = &n;
    assert(*q == 3);
    assert(*p == 3);
    assert(p == q);
    *q = 4;
    assert(n == 4);
    auto qq = &q;
    int &r = n;
    return 0;
}