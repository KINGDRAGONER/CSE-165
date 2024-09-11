#include <iostream>
#include "Stack.h" // Include your Stack header file

int main() {
    Stack stack;
    stack.initialize(); // Initialize the stack

    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        double value;
        std::cin >> value;

        double* valuePtr = new double(value); // Dynamically allocate and initialize a double value
        stack.push(valuePtr); // Push the address of the allocated memory onto the stack
    }

    std::cout << "Values in reverse order (from the stack):" << std::endl;
    
    while (stack.peek() != nullptr) {
        double* valuePtr = static_cast<double*>(stack.pop());
        if (valuePtr) {
            std::cout << *valuePtr << std::endl;
            delete valuePtr; // Free the dynamically allocated memory
        }
    }

    stack.cleanup(); // Cleanup the stack

    return 0;
}
