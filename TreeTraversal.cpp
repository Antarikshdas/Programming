#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* left,*right;
	Node(int data)
	{
		this->data=data;
		left = right = NULL;
	}
};
void printinorder(struct Node* node)
{
	if(node==NULL)
	{
		return;
	}

	//left root right 

	printinorder(node->left);
	cout<<node->data<<"   ";
	printinorder(node->right);
}
void printpostorder(struct Node* node)
{
	if(node==NULL)
		return;
	//left right root
	printpostorder(node->left);
	printpostorder(node->right);
	cout<<node->data<<"   ";
}
void printpreorder(struct Node* node)
{
	if(node==NULL)
	{
		return;
	}
	//root left right
	cout<<node->data<<"    ";
	printpostorder(node->left);
	printpostorder(node->right);
}
int main()
{
	struct Node* root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	printpreorder(root);
	cout<<endl;
	printinorder(root);
	cout<<endl;
	printpostorder(root);
	cout<<endl;
	return 0;
}