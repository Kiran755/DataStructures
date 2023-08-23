#pragma once
class node {
public:
	int data;
	node* left;
	node* right;
	node(int data) :data(data), left(nullptr), right(nullptr) {};
};
class BinaryTree
{
public:
	node* root;
	BinaryTree();
	node* add(node*rootNode, int data);
	void remove(node*rootNode,int data);

};

