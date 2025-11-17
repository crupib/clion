#include <iostream>

template <class T>
  T& pass_thru(T &arg) {
    return arg;
}

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    int n = 3;
    auto m = pass_thru(n);
    ++m;
    std::cout << n << ' ' << m << std::endl;
    //decltype(pass_thru(n)) r = pass_thru(n);
    decltype(auto) r = pass_thru(n);
    ++r;
    std::cout << n << ' ' << r << std::endl;
    std::clog << "creating a X object" << std::endl;
    return 0;
}