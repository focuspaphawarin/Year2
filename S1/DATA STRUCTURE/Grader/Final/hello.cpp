// #include<iostream>
// using namespace std ;

// class BST {
// 	int data;
// 	BST *left, *right;

// public:
// 	// Default constructor.
// 	BST();

// 	// Parameterized constructor.
// 	BST(int);

// 	// Insert function.
// 	BST* Insert(BST*, int);
// 	BST* Search(BST*, int);
// 	BST* Delete(BST*, int);
// 	// BST* Breadth(BST*);

// 	// Inorder traversal.
//     void Inorder(BST*);
//     void Preorder(BST*);
//     void Postorder(BST*);
// };

// class BST *Newnode(int data)
// {
//     class BST *newnode = new BST();
//     newnode->data = data;
//     newnode->left = NULL;
//     newnode->right = NULL;
//     return newnode;
// }
// int height(BST *node);

// // Default Constructor definition.
// BST::BST()
// 	: data(0)
// 	, left(NULL)
// 	, right(NULL)
// {
// }

// // Parameterized Constructor definition.
// // this is to create a new node
// BST::BST(int value)
// {
// 	data = value;
// 	left = right = NULL;
// }

// // Insert function definition.
// BST* BST::Insert(BST* root, int value)
// {
// 	if (!root) 
//     { // if (root == NULL)
// 	  // Insert the first node, if root is NULL.
// 		return new BST(value);
// 	}

// 	// Insert data.
// 	if (value > root->data) {
// 		// Insert right node data, if the 'value'
// 		// to be inserted is greater than 'root' node data.

// 		// Process right nodes.
// 		root->right = Insert(root->right, value);
// 	}
// 	else if (value < root->data) {
// 		// Insert left node data, if the 'value'
// 		// to be inserted is smaller than 'root' node data.

// 		// Process left nodes.
// 		root->left = Insert(root->left, value);
// 	}

// 	// Return 'root' node, after insertion.
// 	return root;
// }

// BST* BST::Search(BST* root, int value)
// {
// 	if (!root)
//     { // return NULL means NOT FOUND
// 		return root;
// 	}
// 	if (value == root->data)
//     {
// 		return root;
// 	}
// 	else if (value > root->data) 
//     {
// 		return Search(root->right, value);
// 	}
// 	else if (value < root->data) 
//     {
// 		return Search(root->left, value);
// 	}
// }

// // Inorder traversal function.
// // This gives data in sorted order.
// // BST* BST::Breadth(BST* root)
// // {
// //     BST* pr = root;
// //     BST* chl = root->left;
// //     BST* chr = root->right;

// //     do
// //     {
// //         cout << root->data << " ";
// //         cout << chl->data << " ";
// //         cout << chr->data << " ";
// //         chl = Breadth(chl);
// //         chr = Breadth(chr);
// //         pr = chl;
// //         pr = chr;
// //     }while (chr != NULL);
// 	// Breadth(root->left);
// 	// Breadth(root->right);

//     // while (succ->left != NULL) {
//     //         succParent = succ;
//     //         succ = succ->left;
//     //     }

//     // if (k < root->data) {
//     //     root->left = Delete(root->left, k);
//     //     return root;
//     // }
//     // else if (k > root->data) {
//     //     root->right = Delete(root->right, k);
//     //     return root;
//     // }
//     // cout << root->data << " ";

//     // cout << root->data << " ";
// 	// Breadth(root->left);
// 	// Breadth(root->right);

// // }

// void printCurrentLevel(BST *root, int level)
// {
//     if (root == NULL)
//         return;
//     if (level == 1)
//         cout << root->data << ",";
//     else if (level > 1)
//     {
//         printCurrentLevel(root->left, level - 1);
//         printCurrentLevel(root->right, level - 1);
//     }
// }

// void Breadth(BST *root)
// {
//     int h = height(root);
//     int i;
//     for (i = 1; i <= h; i++)
//     {
//         printCurrentLevel(root, i);
//         cout << "|";
//     }
// }

// int height(BST *node)
// {
//     if (node == NULL)
//         return 0;
//     else
//     {
//         int lheight = height(node->left);
//         int rheight = height(node->right);
//         if (lheight > rheight)
//         {
//             return (lheight + 1);
//         }
//         else
//         {
//             return (rheight + 1);
//         }
//     }
// }

// void BST::Preorder(BST* root)
// {
// 	if (!root) 
//     {
// 		return;
// 	}
// 	cout << root->data << " ";
// 	Preorder(root->left);
// 	Preorder(root->right);
// }

// void BST::Postorder(BST* root)
// {
// 	if (!root) 
//     {
// 		return;
// 	}
// 	Postorder(root->left);
// 	Postorder(root->right);
// 	cout << root->data << " ";
// }

// void BST::Inorder(BST* root)
// {
// 	if (!root) 
//     {
// 		return;
// 	}
// 	Inorder(root->left);
// 	cout << root->data << " ";
// 	Inorder(root->right);
// }

// BST* BST::Delete(BST* root, int k)
// {
//     // Base case
//     if (root == NULL)
//         return root;
 
//     // Recursive calls for ancestors of
//     // node to be deleted
//     if (k < root->data) {
//         root->left = Delete(root->left, k);
//         return root;
//     }
//     else if (k > root->data) {
//         root->right = Delete(root->right, k);
//         return root;
//     }
 
//     // IN CASE of K == root->data
//     // We reach here when root is the node
//     // to be deleted.
 
//     // If one of the children is empty
//     if (root->left == NULL) {
//         BST* temp = root->right;
//         delete root;
//         return temp;
//     }
//     else if (root->right == NULL) {
//         BST* temp = root->left;
//         delete root;
//         return temp;
//     }
 
//     // If both children exist
//     else 
//     {

//         BST* succParent = root;
 
//         // Find successor
//         BST* succ = root->right;
//         while (succ->left != NULL) {
//             succParent = succ;
//             succ = succ->left;
//         }
 
//         // Delete successor.  Since successor
//         // is always left child of its parent
//         // we can safely make successor's right
//         // right child as left of its parent.
//         // If there is no succ, then assign
//         // succ->right to succParent->right
//         if (succParent != root)
//             succParent->left = succ->right;
//         else
//             succParent->right = succ->right;
 
//         // Copy Successor Data to root
//         root->data = succ->data;
 
//         // Delete Successor and return root
//         delete succ;
//         return root;
//     }
// }




// // Driver code
// int main()
// {
// 	BST b, *root = NULL;
//     char input;
//     int value;
//     do
//     {
//         cin >> input;
//         if(input == 'a')
//         {
//             cin >> value ;
//             if(!root)
//             {
//                 root = b.Insert(root,value);
//             }
//             else
//             {
//                 b.Insert(root,value);
//             }
//         }
//         else if (input == 'b')
//         {
//             b.Breadth(root);
//         }
//         else if (input == 'i')
//         {
//             b.Inorder(root);
//         }
//         else if (input == 'p')
//         {
//             b.Preorder(root);
//         } 
//         else if (input == 't')
//         {
//             b.Postorder(root);
//         }
//         else if (input == 'd')
//         {
//             cin >> value;
//             b.Delete(root,value);
//         }
//     } while (input != 'x');
// 	return 0;
// }