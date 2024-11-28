// Program to create a binary tree and find the height of a binary tree

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(Node* root) {
  if (!root) return 0;
  return 1 + max(height(root->left), height(root->right));
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout << "Height of tree: " << height(root) << endl;
  return 0;
}