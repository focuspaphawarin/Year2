#include <iostream>
using namespace std;

class Node {
public:
    int data;
    int height;
    Node* left;
    Node* right;
    Node(int d){
    	data=d;
    	height=0;
    	left=NULL;
    	right=NULL;
	}
    //Node(int d) : data(d), left(NULL), right(NULL), height(0) {}
};

class AVLTree {
public:
    Node* root = NULL;

    void add(int data) {
        root = addNode(data, root);
    }

    void remove(int data) {
        root = deleteNode(data, root);
    }

    void preorderTraversal() {
        preorder(root);
        cout << endl;
    }

    void preorder(Node* t) {
        if (t != NULL) {
            cout << t->data << " ";
            preorder(t->left);
            preorder(t->right);
        }
    }

    Node* addNode(int data, Node* t) {
        if (t == NULL) {
            return new Node(data);
        }
        if (data < t->data) {
            t->left = addNode(data, t->left);
        } else if (data > t->data) {
            t->right = addNode(data, t->right);
        } else {
            return t;
        }
        t->height = max(height(t->left), height(t->right)) + 1;

        int balance = balanceFactor(t);

        // Left Left Case
        if (balance > 1 && data < t->left->data) {
            return rightRotate(t);
        }

        // Left Right Case
        if (balance > 1 && data > t->left->data) {
            t->left = leftRotate(t->left);
            return rightRotate(t);
        }

        // Right Right Case
        if (balance < -1 && data > t->right->data) {
            return leftRotate(t);
        }

        // Right Left Case
        if (balance < -1 && data < t->right->data) {
            t->right = rightRotate(t->right);
            return leftRotate(t);
        }

        return t;
    }

    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = 1 + max(height(y->left), height(y->right));
        x->height = 1 + max(height(x->left), height(x->right));

        return x;
    }

    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = 1 + max(height(x->left), height(x->right));
        y->height = 1 + max(height(y->left), height(y->right));

        return y;
    }

    int height(Node* t) {
        if (t == NULL) {
            return -1;
        }
        return t->height;
    }

    int balanceFactor(Node* t) {
        if (t == NULL) {
            return 0;
        }
        return height(t->left) - height(t->right);
    }

    Node* minNode(Node* t) {
        Node* current = t;
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    Node* deleteNode(int data, Node* t) {
        if (t == NULL) {
            return t;
        }
        if (data < t->data) {
            t->left = deleteNode(data, t->left);
        } else if (data > t->data) {
            t->right = deleteNode(data, t->right);
        } else {
            if (t->left == NULL || t->right == NULL) {
                Node* temp = (t->left != NULL) ? t->left : t->right;
                if (temp == NULL) {
                    temp = t;
                    t = NULL;
                } else {
                    *t = *temp;
                }
                delete temp;
            } else {
                Node* temp = minNode(t->right);
                t->data = temp->data;
                t->right = deleteNode(temp->data, t->right);
            }
        }
        if (t == NULL) {
            return t;
        }
        t->height = max(height(t->left), height(t->right)) + 1;
        int balance = balanceFactor(t);

        // Left Left Case
        if (balance > 1 && balanceFactor(t->left) >= 0) {
            return rightRotate(t);
        }

        // Left Right Case
        if (balance > 1 && balanceFactor(t->left) < 0) {
            t->left = leftRotate(t->left);
            return rightRotate(t);
        }

        // Right Right Case
        if (balance < -1 && balanceFactor(t->right) <= 0) {
            return leftRotate(t);
        }

                // Right Left Case
        if (balance < -1 && balanceFactor(t->right) > 0) {
            t->right = rightRotate(t->right);
            return leftRotate(t);
        }
        return t;
    }
};

int main() {
    AVLTree t;
    int value;
    char c;
    do
    {
        cin >> c;
        if (c == 'a') {
            cin >> value;
            t.add(value);
        }
        if (c == 'd') {
            cin >> value;
            t.remove(value);
        }
        if (c == 'p') {
            t.preorderTraversal();
        }
    } while(c!='x');

    return 0;
}

