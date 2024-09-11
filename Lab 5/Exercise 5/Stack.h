#pragma once

#include <iostream>

struct Stack
{
	struct Link
	{
		double data; // Change void* --> doubles
		Link *next;

		void initialize(double dat, Link *nxt)
		{
			data = dat;
			next = nxt;
		}
	} *head;
	// void initialize() {
	// 	head = 0;
	// }
	void initialize()
	{
		head = nullptr;
	}
	// default constructor
	Stack()
	{
		initialize();
	}
	// Constructor n elements
	Stack(int N)
	{
		head = nullptr; //to avoid a seg fault and ensure no memory leaks
		for (int i = 0; i < N; i++)
		{
			push(1.0 + 0.1 * i);
		}
	}


	void push(double dat)
	{
		Link *newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}

	double peek()
	{
		if (head == nullptr)
		{
			std::cout << "Stack is empty" << std::endl;
			return 0.0; // <--
		}
		return head->data;
	}

//reference
    // T pop() {
    //     if (isEmpty()) {
    //         throw std::runtime_error("Stack is empty");
    //     }
    //     T poppedValue = topNode->data;
    //     Node* temp = topNode;
    //     topNode = topNode->next;
    //     delete temp;
    //     return poppedValue;
    // }
	double pop() 
	{
		if (head == nullptr)
			return 0.0; // <--

		double result = head->data;
		Link *oldHead = head; //temp
		head = head->next;
		delete oldHead;
		return result;
	}

	// Destructor print
	~Stack()
	{
		while (head != nullptr)
		{
			double element = pop();
			std::cout << element << " ";
		}
	}
};
