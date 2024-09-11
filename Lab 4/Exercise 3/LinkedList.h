#pragma once
#include <iostream>
// there is no pop
struct LinkedList // has 1 member head pointing to first elemwnt
{
    struct Link //repersents single element with two members
    {
        int data;
        Link *next;

        Link(int value) : data(value), next(nullptr) {}
    } *head;

    LinkedList(int initialValue = 0)
    {
        head = new Link(initialValue);
    }

    void add(Link *list, int n)
    {
        for (int i = 0; i < n; ++i)
        {
            Link *newLink = new Link(i % 5); // cycling over using i%5
            newLink->next = list->next;
            list->next = newLink;
            list = newLink;
        }
    }

    void print()
    {
        Link *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void cleanup()
    {
        Link *current = head;
        while (current != nullptr)
        {
            Link *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }
};
