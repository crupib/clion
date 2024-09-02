#include <iostream>
#include <chrono>

int main() {
    long long count = 0;
    auto start = std::chrono::high_resolution_clock::now(); // Start the timer

    while (count < 1000000000) {
        count++;
    }

    auto end = std::chrono::high_resolution_clock::now(); // End the timer
    std::chrono::duration<double> duration = end - start; // Calculate the elapsed time

    std::cout << "Done" << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
