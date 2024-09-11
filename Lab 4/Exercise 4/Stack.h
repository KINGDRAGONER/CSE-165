#include <iostream>
struct Stack
{
    struct Link
    {
        void *data;
        Link *next;

        void initialize(void *dat, Link *nxt)
        {
            data = dat;
            next = nxt;
        }
    } *head;

    void (*deletecb)(void *);

    void initialize()
    {
        head = 0;
        deletecb = 0;
    }

    void push(void *dat)
    {
        Link *newLink = new Link;
        newLink->initialize(dat, head);
        head = newLink;
    }

    void *peek()
    {
        if (head == 0)
        {
            std::cout << "Stack is empty";
            return nullptr;
        }
        return head->data;
    }

    void *pop()
    {
        if (head == 0)
            return nullptr;

        void *result = head->data;
        Link *oldHead = head;
        head = head->next;
        delete oldHead;
        return result;
    }

    void setDeleteCallback(void (*delcb)(void *pt))
    {
        deletecb = delcb;
    }

    void cleanup()
    {
        while (head != nullptr)
        {
            Link *oldHead = head;
            head = head->next;
            if (deletecb != nullptr)
            { // call delete if set
                deletecb(oldHead->data);
            }

            delete oldHead;
        }

        if (head == nullptr)
        {
            std::cout << "Stack is empty";
        }
        else
        {
            std::cout << "Stack is not empty";
        }
    }
};
