#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    static int count;  // Static variable to keep track of the number of instances

    Animal() {
        cout << "Creating Generic Animal" << endl;
        name = "Generic Animal";
        age = 0;
        count++;  // increase count by 1
    }

    ~Animal() {
        cout << "Deleting Generic Animal" << endl;
        count--;  // derease  count by 1
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    void feed() {
        cout << "Some food, please!" << endl;
    }
};
