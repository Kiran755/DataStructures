#include "LinkedList.h"
#include<iostream>


LinkedList::LinkedList(){
	head = nullptr;
}



node* LinkedList::create_node(int data) {
	node* new_node = new node(data);
	return new_node;
}


void LinkedList::add(int data) {
	if (head == nullptr)
	{
		head = create_node(data);
	}
	else {
		node* ptr = head;
		while (ptr->next != nullptr) {
			ptr = ptr->next;
		}
		node* new_node = create_node(data);
		ptr->next = new_node;
	}
	std::cout << "Data inserted" << std::endl;
}

void LinkedList::remove_from_start() 
{
	if (head != nullptr) {
		node* ptr = head;
		head = head->next;
		delete ptr;
	}
}

void LinkedList::remove_from_end() {
	node* ptr = head;
	node* prev = head;
	while (ptr->next != nullptr) {
		prev = prev;
		ptr = ptr->next;
	}
	prev->next = nullptr;
	delete ptr;
}

void LinkedList::remove(int index) {
	node* ptr = head;
	node* prev = head;
	while (index > 0 && ptr->next != nullptr) {
		index--;
		prev = ptr;
		ptr = ptr->next;
	}
	if (index > 0)
	{
		std::cout << "index doesnt exist" << std::endl;
		return;
	}
	prev->next = ptr->next;
}

void LinkedList::update(int index, int data) {
	node* ptr = head;
	while (index>0 && ptr->next != nullptr) {
		index--;
		ptr = ptr->next;
	}
	if (index > 0)
	{
		std::cout << "index doesnt exist" << std::endl;
		return;
	}
	ptr->data = data;
}

void LinkedList::display() {
	node* ptr = head;
	while (ptr != head) {
		std::cout << ptr->data << " ";
	}
}
