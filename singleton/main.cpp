#include <iostream>
#include <atomic>
#include "SequentialIdProvider.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    auto& provider = SequentialIdProvider::get();
    for (int i = 0; i != 5; ++i) {
        std::cout << provider.next() << std::endl;
    }

    return 0;
}
