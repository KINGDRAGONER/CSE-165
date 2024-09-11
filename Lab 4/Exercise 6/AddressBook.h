#pragma once

#include <iostream>
#include <string>
#include <vector>

struct Entry //copy paste old code to reuse
{
    std::string firstname;
    std::string lastname;
    std::string email;

    Entry() {}

    void setName(const std::string &name)
    {
        firstname = name;
    }
    void setLastname(const std::string &lastname)
    {
        this->lastname = lastname;
    }
    void setEmail(const std::string &email)
    {
        this->email = email;
    }

    const std::string &getName() const
    {
        return firstname;
    }

    const std::string &getLastname() const
    {
        return lastname;
    }

    const std::string &getEmail() const
    {
        return email;
    }

    void printEntry()
    {
        std::cout << "\nFirst Name: " << firstname << "\nLast Name: " << lastname << "\nEmail: " << email;
    }
};

struct AddressBook
{
    std::vector<Entry *> entries;

    // add an entry
    void add(Entry *entry)
    {
        entries.push_back(entry);
    }

    // Print all entries
    void print()
    {
        for (int i = 0; i < entries.size(); ++i)
        {
            entries[i]->printEntry();
        }
    }

    // Clear
    void clear()
    {
        for (int i = 0; i < entries.size(); ++i)
        {
            delete entries[i];
        }
        entries.clear();
    }

    // Destructor
    ~AddressBook()
    {
        clear();
    }
};
