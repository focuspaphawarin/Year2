#include <iostream>
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = _insertRec(root, value);
    }

    TreeNode* _insertRec(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->value) {
            node->left = _insertRec(node->left, value);
        }
        else if (value > node->value) {
            node->right = _insertRec(node->right, value);
        }

        return node;
    }

    void deleteNode(int value) {
        root = _deleteRec(root, value);
    }

    TreeNode* _deleteRec(TreeNode* node, int value) {
        if (node == nullptr) {
            return node;
        }

        if (value < node->value) {
            node->left = _deleteRec(node->left, value);
        }
        else if (value > node->value) {
            node->right = _deleteRec(node->right, value);
        }
        else {
            if (node->left == nullptr) {
                return node->right;
            }
            else if (node->right == nullptr) {
                return node->left;
            }

            node->value = minValueNode(node->right);
            node->right = _deleteRec(node->right, node->value);
        }

        return node;
    }

    int minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current->left != nullptr) {
            current = current->left;
        }
        return current->value;
    }

    void printInorder() {
        _inorder(root);
    }

    void _inorder(TreeNode* node) {
    if (node != nullptr) {
        _inorder(node->left);
        cout << node->value << " ";
        _inorder(node->right);
    }
}
};

int main() {
    BinaryTree binaryTree;

    cout << "Enter 'a' to insert, 'd' to delete, 'p' to print In-order, 'x' to exit: ";
    char input;
    int value;

    while (true) {
        cin >> input;

        if (input == 'a') {
            cout << "Enter a value to insert: ";
            cin >> value;
            binaryTree.insert(value);
        }
        else if (input == 'd') {
            cout << "Enter a value to delete: ";
            cin >> value;
            binaryTree.deleteNode(value);
        }
        else if (input == 'p') {
            cout << "In-order traversal: ";
            binaryTree.printInorder();
            cout << endl;
        }
        else if (input == 'x') {
            break;
        }
    }

    return 0;
}
