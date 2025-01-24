#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node *left;
    struct Node *right;

    Node(int value){
        val = value;
        left = right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    return 0;
}