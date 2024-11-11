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

void insert(struct Node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
        return;
    }
   char d[10];
   printf("Enter direction vector ::");
   scanf("%s",d);
   int i =0;
   struct Node * prev;
   struct Node * curr;
   curr = *root;
   while(d[i]!='\0'&&curr!=NULL){
        prev = curr;
        curr = (d[i]=='l'?curr->left:curr->right);
        i++;
   }
   if(curr!=NULL) {printf("invalid direction\n");return;}
   if(d[i-1]=='l') prev->left = createNode(data);
   else prev->right = createNode(data);
   return;
}

void inorderTraversal(struct Node* root) {
    struct Node* stack[100];
    int top = -1;
    struct Node* curr = root;

    while (curr != NULL || top != -1) {
        while (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        printf("%d ", curr->data);
        curr = curr->right;
    }
}
void postorderTraversal(struct Node* root) {
    struct Node* stack1[100], *stack2[100];
    int top1 = -1, top2 = -1;
    struct Node* curr = root;

    if (curr == NULL) return;

    stack1[++top1] = curr;
    while (top1 != -1) {
        curr = stack1[top1--];
        stack2[++top2] = curr;
        if (curr->left) stack1[++top1] = curr->left;
        if (curr->right) stack1[++top1] = curr->right;
    }
    while (top2 != -1) {
        printf("%d ", stack2[top2--]->data);
    }
}


void preorderTraversal(struct Node* root) {
    struct Node* stack[100];
    int top = -1;
    struct Node* curr = root;

    if (curr == NULL) return;

    stack[++top] = curr;
    while (top != -1) {
        curr = stack[top--];
        printf("%d ", curr->data);
        if (curr->right) stack[++top] = curr->right;
        if (curr->left) stack[++top] = curr->left;
    }
}

void printParent(struct Node* root, int value) {
    if (root == NULL) return;

    if ((root->left && root->left->data == value) || (root->right && root->right->data == value)) {
        printf("Parent of %d is %d\n", value, root->data);
    } else {
        printParent(root->left, value);
        printParent(root->right, value);
    }
}

int treeDepth(struct Node* root) {
    if (root == NULL) return 0;
    int leftDepth = treeDepth(root->left);//calc depth of left subtree by recursion,returns 0 if leaf node is reached,recursion stack unwinds and you get depth
    int rightDepth = treeDepth(root->right);
    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
}


int printAncestors(struct Node* root, int value) {
    if (root == NULL) return 0;
    if (root->data == value) return 1;

    if (printAncestors(root->left, value) || printAncestors(root->right, value)) {
        printf("%d ", root->data);
        return 1;
    }
    return 0;
}


int countLeafNodes(struct Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}


int main() {
    struct Node* root = NULL;
    /*char choice;*/
    int value;
    do {

        printf("Enter a value to insert into the tree (-1 to stop): ");
        scanf("%d", &value);
        if (value != -1) {
           insert(&root,value);
        }
    } while (value != -1);
    /*root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->right = createNode(40);
    root->left->left = createNode(50);
    root->left->left->right = createNode(60);
    root->right->left = createNode(700);*/
    printf("\nIn-order Traversal: ");
    inorderTraversal(root);
    printf("\nPost-order Traversal: ");
    postorderTraversal(root);
    printf("\nPre-order Traversal: ");
    preorderTraversal(root);

    int valueToFindParent;
    printf("\nEnter the value to find its parent: ");
    scanf("%d", &valueToFindParent);
    printParent(root, valueToFindParent);

    printf("Depth of the tree: %d\n", treeDepth(root));

    int valueToFindAncestors;
    printf("Enter the value to print its ancestors: ");
    scanf("%d", &valueToFindAncestors);
    printf("Ancestors of %d: ", valueToFindAncestors);
    printAncestors(root, valueToFindAncestors);
    printf("\n");

    printf("Number of leaf nodes: %d\n", countLeafNodes(root));

    return 0;
}
