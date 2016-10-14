#include "BST.h"
#include <iostream>
using namespace std;



int main(int argc, char **argv)
{

    BSTNode* root = NULL;
    int a[] = {5,8,4,3,9,7,12,1};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
        root = insertNode(root,a[i]);
    printInOrder(root);
    return 0;
}
