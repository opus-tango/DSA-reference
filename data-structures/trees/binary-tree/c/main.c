#include "binary-tree.h"

int main() {
  Node* root = create_node(0);
  root->left = create_node(1);
  root->right = create_node(2);
  root->left->left = create_node(3);
  root->left->right = create_node(4);
  root->right->left = create_node(5);
  root->right->right = create_node(6);
  print_node(root);

  return 0;
}
