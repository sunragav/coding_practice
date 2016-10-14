#pragma once

struct BSTNode {
    int data;
    BSTNode* right;
    BSTNode* left;
};

BSTNode* createNode(int data);

BSTNode* insertNode(BSTNode* root,int data);

BSTNode* searchNode(BSTNode* root, int data);

BSTNode* deleteNode(BSTNode* root, int data);

void printInOrder(BSTNode* root);

void printPreOrder(BSTNode* root);

void printPostOrder(BSTNode* root);

void printLevelOrder(BSTNode* root);
