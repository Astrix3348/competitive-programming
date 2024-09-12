#include<iostream>
using namespace std;

class Node{

public:
	int data;
	Node * left;
	Node * right;

	Node(int d){
		data = d;
		left = right = NULL;
	}
};

Node* buildTree(){

	int d;
	cin >> d;

	if(d==-1){
		return NULL;
	}
	Node* n = new Node(d);
	n->left = buildTree();
	n->right = buildTree();
	return n;

}

void printPreorder(Node *root){
	if(root==NULL){
		return;
	}
	cout << root->data << " ";
	printPreorder(root->left);
	printPreorder(root->right);
}

void inorder(Node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
void post(Node *root){
	if(root==NULL){
		return;
	}
	post(root->left);
	post(root->right);
	cout << root->data << " ";
}

int main(){
	Node * root = buildTree();
	printPreorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	post(root);

	return 0;
}