#include "Queue.h"
#include<iostream>
Queue::Queue(int size) : size(size)
{
	front = 0;
	back = -1;
	queue = new int[size];
}

void Queue::insert(int data) 
{
	if (++back == size) {
		std::cout << "Queue full, Increasing size" << std::endl;
		int* newQueue;
		int* temp = new int[size*2];
		for (int i = 0;i < size;i++) {
			temp[i] = queue[i];
		}
		newQueue = temp;
		temp = queue;
		queue = newQueue;
		size *= 2;
		delete [] temp;
	}
	std::cout << "Data inserted" << std::endl;
	queue[back] = data;
}

int Queue::pop() 
{
	
	if (front < back) {
		return queue[front++];
	}
	return -1;
}

void Queue::display()
{
	for (int i = front;i <= back;i++)
	{
		std::cout<< queue[i] << " ";
	}
	
}

int Queue::peek()
{
	if (front != -1)
		return queue[front];
	return -1;
}

int Queue::getQueueSize()
{
	return size;
}
