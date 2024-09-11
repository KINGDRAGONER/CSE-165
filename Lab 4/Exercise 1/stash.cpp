#include <iostream>
#include "Stash.h" // Include your Stash header file

int main() {
    Stash stash;
    stash.initialize(sizeof(double)); // Initialize Stash with the size of double

    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        double value;
        std::cin >> value;
        stash.add(&value);
    }

    for (int i = 0; i < N; ++i) {
        double* valuePtr = static_cast<double*>(stash.fetch(i));
        if (valuePtr) {
            std::cout << *valuePtr << std::endl;
        }
    }

    stash.cleanup(); // Free up memory

    return 0;
}
