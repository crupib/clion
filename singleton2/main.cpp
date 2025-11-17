#include <atomic>
#include <iostream>
#include <ostream>

class SequentialIdProvider {
    std::atomic<long long> cur; // state (synchronized)
    // default constructor (private)
    SequentialIdProvider() : cur{ 0LL } {
    }
public:
    // static member function providing access to the object
    static auto & get() {
        static SequentialIdProvider singleton; // definition
        return singleton;
    }
    // service offered by the singleton (synchronized)
    auto next() { return cur++; }
    SequentialIdProvider(const SequentialIdProvider&)
       = delete;
    SequentialIdProvider&
       operator=(const SequentialIdProvider&) = delete;
};

int main() {
    auto & provider = SequentialIdProvider::get();
    for (int i = 0; i != 5; ++i) {
        std::cout << provider.next() << std::endl;
    }
}

