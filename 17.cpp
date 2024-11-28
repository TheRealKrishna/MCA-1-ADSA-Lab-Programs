// Program to implement Binary Search Tree

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int key) {
  if (!root) return new Node(key);
  if (key < root->data) root->left = insert(root->left, key);
  else root->right = insert(root->right, key);
  return root;
}

void inorder(Node* root) {
  if (!root) return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

int main() {
  Node* root = nullptr;
  int keys[] = {50, 30, 20, 40, 70, 60, 80};
  for (int key : keys) root = insert(root, key);
  inorder(root);
  return 0;
}
