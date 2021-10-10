#include<bits/stdc++.h>

using namespace std;

class Node;
class BST;

class Node{
public:
int data;
Node *right;
Node *left;
Node(int x);
friend class BST;
};
class BST{
public:
void insert(Node* root,int data);
BST *root;
};
Node :: Node(int x){
this->data = x;
this->right = nullptr;
this->left = nullptr;
}
void BST :: insert(Node *root,int data){
	 Node *nnode = new Node(data);
	if(root->data > data )
	{
       root->left = nnode;
	}
	else
	{
		root->right = nnode;
	}	
}
int main(){
Node *root = new Node(8);
BST ob;
ob.root = root;
ob.insert(root,9);
cout << root->data << endl;
cout << root->right->data << endl;
}