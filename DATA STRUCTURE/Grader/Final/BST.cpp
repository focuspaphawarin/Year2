#include<iostream>
#include<queue>
using namespace std;

class BST {
	int data;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int);

	// Insert function.
	BST* Insert(BST*, int);
	BST* Search(BST*, int);
	BST* Delete(BST*, int);

	int getData() const {
		return data;
	}

	BST* getLeft() const {
		return left;
	}

	BST* getRight() const {
		return right;
	}

	// Inorder traversal.
	void Inorder(BST*);
	void Preorder(BST*);
	void Postorder(BST*);
};

// Default Constructor definition.
BST::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

// Parameterized Constructor definition.
// this is to create a new node
BST::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST::Insert(BST* root, int value)
{
	if (!root) 
	{
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data) {
		// Insert right node data if the 'value'
		// to be inserted is greater than 'root' node data.
		root->right = Insert(root->right, value);
	}
	else if (value < root->data) {
		// Insert left node data if the 'value'
		// to be inserted is smaller than 'root' node data.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node after insertion.
	return root;
}

BST* BST::Search(BST* root, int value)
{
	if (!root)
	{ 
		return root;
	}
	if (value == root->data)
	{
		return root;
	}
	else if (value > root->data)
	{
		return Search(root->right, value);
	}
	else if (value < root->data)
	{
		return Search(root->left, value);
	}
}

void BST::Inorder(BST* root)
{
	if (!root) 
	{
		return;
	}
	Inorder(root->left);
	cout << root->getData() << ","; 
	Inorder(root->right);
}

void BST::Preorder(BST* root)
{
	if (!root) 
	{
		return;
	}
	cout << root->getData() << ","; 
	Preorder(root->left);
	Preorder(root->right);
}

void BST::Postorder(BST* root)
{
	if (!root) 
	{
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout << root->getData() << ","; 
}

BST* BST::Delete(BST* root, int k)
{
	if (root == NULL)
		return root;

	if (k < root->data) {
		root->left = Delete(root->left, k);
		return root;
	}
	else if (k > root->data) {
		root->right = Delete(root->right, k);
		return root;
	}

	if (root->left == NULL) {
		BST* temp = root->right;
		delete root;
		return temp;
	}
	else if (root->right == NULL) {
		BST* temp = root->left;
		delete root;
		return temp;
	}

	BST* succParent = root;
	BST* succ = root->right;
	while (succ->left != NULL) {
		succParent = succ;
		succ = succ->left;
	}

	if (succParent != root)
		succParent->left = succ->right;
	else
		succParent->right = succ->right;

	root->data = succ->data;
	delete succ;
	return root;
}

void printLevelOrder(BST* root)
{
	if (!root)
		return;

	queue<BST*> q;
	q.push(root);

	while (!q.empty())
	{
		int levelSize = q.size();
		for (int i = 0; i < levelSize; ++i)
		{
			BST* current = q.front();
			q.pop();
			cout << current->getData() << ","; 

			if (current->getLeft()) 
				q.push(current->getLeft());
			if (current->getRight()) 
				q.push(current->getRight());
		}
		cout << "|";
	}
}

int main()
{
	BST b, *root = NULL;
	char input;
	int value;
	do
	{
		cin >> input;
		if (input == 'a')
		{
			cin >> value;
			if (!root)
			{
				root = b.Insert(root, value);
			}
			else
			{
				b.Insert(root, value);
			}
		}
		else if (input == 'b')
		{
			printLevelOrder(root);
			cout << endl;
		}
		else if (input == 'i')
		{
			b.Inorder(root);
			cout << endl;
		}
		else if (input == 'p')
		{
			b.Preorder(root);
			cout << endl;
		}
		else if (input == 't')
		{
			b.Postorder(root);
			cout << endl;
		}
		else if (input == 'd')
		{
			cin >> value;
			root = b.Delete(root, value);
		}
	} while (input != 'x');
	return 0;
}
