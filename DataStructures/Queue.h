#pragma once
class Queue
{
private:
	int front;
	int back;
	int* queue;
	int size;
public:
	Queue(int size);
	void insert(int data);
	int pop();
	int peek();
	void display();
	int getQueueSize();
};

