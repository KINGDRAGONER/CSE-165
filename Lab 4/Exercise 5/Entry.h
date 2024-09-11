#pragma once

#include <iostream>
#include <string>
struct Entry {
    std::string firstname;
    std::string lastname;
    std::string email;

    Entry()
    {

    }// default constructor
    //setters
    void setName(const std::string& name){
        firstname = name;
    }
    void setLastname(const std::string& lastname){
        this->lastname = lastname;
    }
    void setEmail(const std::string& email){
        this->email = email;
    }
    //getters
    const std::string& getName() const {
        return firstname;
    }

    const std::string& getLastname() const {
        return lastname;
    }

    const std::string& getEmail() const {
        return email;
    }

//printing
void print(){
    std::cout << "\nFirst Name: " << firstname <<"\nlastname: " << lastname<< "\nemail: " << email;
}

};
