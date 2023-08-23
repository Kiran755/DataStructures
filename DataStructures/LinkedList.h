#pragma once


class node {
public:
	int data;
	node* next;
	node(int val):data(val),next(nullptr){}
	node():data(0),next(nullptr){}
};

class LinkedList
{
public:
	node* head;
	LinkedList();
	node* create_node(int data);
	void add(int data);
	void remove(int index);
	void remove_from_start();
	void remove_from_end();
	void update(int index,int data);
	void display();
};

