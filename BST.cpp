#include "BST.h"
#include <iostream>
#include <cstdio>
using namespace std;

BSTNode* insertNode(BSTNode* root,int data)
{
    if(!root) {
        root = (BSTNode*)malloc(sizeof(BSTNode));
        root->data = d;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if(root->data>=data) {
        root->left = insertNode(root->left,data);
    } else {
        root->right = insertNode(root->right,data);
    }
    return root;
}

BSTNode* searchNode(BSTNode* root, int data)
{
    if(!root) return NULL;
    if(root->data==data) return root;
    else if(root->data>data) return searchNode(root->left,data);
    return searchNode(root->right,data);
}

BSTNode* findMin(BSTNode* root)
{
    while(root->left) {
        root=root->left;
    }
    return root;
}

BSTNode* deleteNode(BSTNode* root, int data)
{
    if(!root) return NULL;
    if(root->data == data ) {
        if(!root->right) {
            BSTNode* tmp = root->left;
            free(root);
            return tmp;
        } else if (!root->left) {
            BSTNode* tmp = root->right;
            free(root);
            return tmp;
        } else {
            root->data = findMin(root->right)->data;
            root->right = deleteNode(root->right,root->data);
            return root;
        }
    } else if(root->data >=data) {
        root->left = deleteNode(root->left,data);
    } else
        root->right = deleteNode(root->right,data );
    return root;
}

void printInOrder(BSTNode* root)
{
    BSTNode* cur = root;

    while(cur) {
        if(!cur->left) {
            printf("%d ",cur->data);
            cur=cur->right;
        } else {
            BSTNode* prev = cur->left;
            while(prev->right && prev->right!=cur) {
                prev= prev->right;
            }
            if(!prev->right) {
                prev->right = cur;
                cur=cur->left;
            } else {
                prev->right = NULL;
                printf("%d ",cur->data);
                cur = cur->right;
            }
        }
    }
    printf("\n");
}

void printPreOrder(BSTNode* root)
{

}

void printPostOrder(BSTNode* root)
{

}

void printLevelOrder(BSTNode* root)
{

}
