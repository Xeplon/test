#include <iostream>
using namespace std;

struct binarytree {
	
	struct node {
		int val;
		node *parent,*left, *right;
		
		node(int a) {
			val = a;
			left = NULL;
			right = NULL;
		}
		
		void addnode(int a) {
			if (a <= val) {
				if (left == NULL) {
					left = new node(a);
				} else {
					left->addnode(a);
				}
			} else {
				if (right == NULL) {
					right = new node(a);
				} else {
					right->addnode(a);
				}
			}
		}
		
		void iterate() {
			if (left != NULL) {
				left->iterate();
			}
			cout << val << " ";
			if (right != NULL) {
				right->iterate();
			}
		}
		
		//Minimum
		int minimum() {
			if (left == NULL)
				return val;
			else
				return left->minimum();
		}
	
		//Maximum
		int maximum() {
			if (right == NULL)
				return val;
			else
				return right->maximum();
		}
	};
	
	node *root;
	int size;
	
	//Constructor
	binarytree() {
		size = 0;
	}
	
	//ADD
	void addnode(int a) {
		size++;
		if (root == NULL) {
			root = new node(a);
		} else {
			root->addnode(a);
		}
	}
	
	//Iterate
	void iterate() {
		root->iterate();
	}
	
	//Minimum
	int minimum() {
		return root->minimum();
	}
	
	//Maximum
	int maximum() {
		return root->maximum();
	}
	
};
