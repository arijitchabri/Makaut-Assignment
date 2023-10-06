#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to calculate the height of the binary tree
int height(struct Node* root) {
    if (root == NULL)
        return 0;
    else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}

// Function to count the number of nodes in the binary tree
int countNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    else
        return (countNodes(root->left) + countNodes(root->right) + 1);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Number of nodes in the tree: %d\n", countNodes(root));
    printf("Height of the tree: %d\n", height(root));

    return 0;
}