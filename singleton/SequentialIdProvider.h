//
// Created by William Crupi on 11/16/25.
//

#ifndef SINGLETON_SEQUENTIALIDPROVIDER_H
#define SINGLETON_SEQUENTIALIDPROVIDER_H
#include <atomic>
class SequentialIdProvider {
    // declaration (private)
    static SequentialIdProvider singleton;
    std::atomic<long long> cur; // state (synchronized)
    // default constructor (private)
    SequentialIdProvider() : cur{ 0LL } {
    }
public:
    // static member function providing access to the object
    static auto & get() { return singleton; }
    // service offered by the singleton (synchronized)
    auto next() { return cur++; }
    // deleted copy operations
    SequentialIdProvider(const SequentialIdProvider&)
       = delete;
    SequentialIdProvider&
       operator=(const SequentialIdProvider&) = delete;
    // ...
};

#endif //SINGLETON_SEQUENTIALIDPROVIDER_H