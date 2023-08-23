#pragma once
class Stack
{
private:
	int top;
	int *stack;
	int size;
public:
	Stack(int size);
	void push(int data);
	int pop();
	int peek();
	int multipop(int no_of_pops);
	void display();
	int getStackSize();

};

