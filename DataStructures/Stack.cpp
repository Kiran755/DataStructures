#include "Stack.h"
#include<iostream>

Stack::Stack(int size):size(size) {
	stack = new int[size];
	top = -1;
}


void Stack::push(int data)
{
	if(++top==size) {
		std::cout << "Stack full, Increasing size" << std::endl;
		int* temp;
		int* newArr;
		temp = new int[size * 2]; // doubling the storage
		for (int i = 0;i < size;i++)
		{
			temp[i] = stack[i]; // copying elements
		}
		size *= 2;
		newArr = temp;
		temp = stack;
		stack = newArr; // reallocating the new address to the stack array and deleting the previous memory block
		delete [] temp;
	}
	stack[top] = data;
	std::cout << "Data inserted" << std::endl;
}

void Stack::display() 
{
	for (int i = 0;i <= top;i++)
	{
		std::cout << "Element: " << stack[i] << std::endl;
	}
}

int Stack::pop() {
	if (top < 0)
	{
		std::cout << "Stack underflow" << std::endl;
		return -1;
	}
	return stack[top--];
}

int Stack::multipop(int no_of_pops) {
	if (no_of_pops > top + 1) {
		std::cout << "Not Enough elements" << std::endl;
		return -1;
	}
	while (no_of_pops) {
		int data = pop();
		std::cout << data << std::endl;
	}
	return -1;
}

int Stack::peek() {
	if (top >= 0)
		return stack[top];
}

int Stack::getStackSize() {
	return size;
}
