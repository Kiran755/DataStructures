#include "BinaryTree.h"
#include<iostream>

BinaryTree::BinaryTree() {
	root = nullptr;
}


node* create_node(int data) {
	node* new_node = new node(data);
	return new_node;
}
node* BinaryTree::add(node *rootNode,int data) {
	if (rootNode == nullptr) {
		return create_node(data);
	}
	if (rootNode->left == nullptr)
	{
		rootNode->left = add(rootNode->left, data);
	}
	else if (rootNode->right == nullptr) {
		rootNode->right = add(rootNode->right, data);
	}
}

void BinaryTree::remove(node* rootNode,int data) {

}
