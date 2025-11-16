#include "binary-tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  _recursive_print_node(node, 0);
}

void _recursive_print_node(Node* node, int level){
  if (node->right != NULL) {
    _recursive_print_node(node->right, level + 1);
  }
  char* dashes = malloc(sizeof(char) * (level+1));
  memset(dashes, '-', level);
  dashes[level] = '\0';
  printf("%s%d\n", dashes, node->data);
  free(dashes);
  if (node->left != NULL) {
    _recursive_print_node(node->left, level + 1);
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
