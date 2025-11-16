#include "binary-tree.h"
#include <stdio.h>
#include <stdlib.h>

Node* create_node(int data){
  Node* node = malloc(sizeof(Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void free_node(Node* node){
  if (node->left != NULL) {
    free_node(node->left);
  }
  if (node->right != NULL){
    free_node(node->right);
  }
  free(node);
}

void print_node(Node* node){
  if (node->right != NULL) {
    printf("-");
    print_node(node->right);
  }
  printf("%d", node->data);
  if (node->left != NULL) {
    printf("-");
    print_node(node->left);
  }
}

Node* get_left(Node* node){
  return node->left;
}
Node* get_right(Node* node){
  return node->right;
}

void set_left(Node* parent, Node* child){
  parent->left = child;
}
void set_right(Node* parent, Node* child){
  parent->right = child;
}
