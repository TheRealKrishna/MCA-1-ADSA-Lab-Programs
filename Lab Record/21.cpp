// Program to perform a deletion from a binary tree (using a delete() function)

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left, *right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* deleteNode(Node* root, int key) {
  if (!root) return root;
  if (key < root->data)
    root->left = deleteNode(root->left, key);
  else if (key > root->data)
    root->right = deleteNode(root->right, key);
  else {
    if (!root->left) return root->right;
    if (!root->right) return root->left;
    Node* temp = root->right;
    while (temp && temp->left) temp = temp->left;
    root->data = temp->data;
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}

void inorder(Node* root) {
  if (!root) return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

int main() {
  Node* root = new Node(50);
  root->left = new Node(30);
  root->right = new Node(70);
  root->left->left = new Node(20);
  root->left->right = new Node(40);
  root->right->left = new Node(60);
  root->right->right = new Node(80);

  cout << "Inorder before deletion: ";
  inorder(root);
  cout << endl;

  root = deleteNode(root, 50);

  cout << "Inorder after deletion: ";
  inorder(root);
  cout << endl;

  return 0;
}