#pragma once

#include <iostream>
#include <string>
#include "Animal.h"

class Dog: public Animal{
    public:
    Dog(std::string name, int age){
       std::cout << "Creating Dog" <<std::endl;
       setName(name);
       setAge(age);
    }
    ~Dog(){
        std::cout << "Delete dog" << std::endl;
    }

    void feed(){
        std::cout << "Dog food, please!" << std::endl;
    }

};