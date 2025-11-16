#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

#endif

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(int data);

void free_node(Node* node);

void print_node(Node* node);

Node* get_left(Node* node);
Node* get_right(Node* node);

void set_left(Node* parent, Node* child);
void set_right(Node* parent, Node* child);
