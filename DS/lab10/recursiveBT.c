#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* createTree() {
    int data;
    printf("Enter node value (-1 for no node): ");
    scanf("%d", &data);
    if (data == -1) return NULL; // Base case for no node

    struct Node* node = createNode(data);
    printf("Creating left child of %d:\n", data);
    node->left = createTree();
    printf("Creating right child of %d:\n", data);
    node->right = createTree();
    return node;
}

void printTree(struct Node* root) {
    if (root) {
        printTree(root->left); // Visit left subtree
        printf("%d ", root->data); // Visit node
        printTree(root->right); // Visit right subtree
    }
}


int main() {
    printf("Create a binary tree:\n");
    struct Node* root = createTree();

    printf("\nBinary Tree (In-order): ");
    printTree(root);
    printf("\n");

    return 0;
}
