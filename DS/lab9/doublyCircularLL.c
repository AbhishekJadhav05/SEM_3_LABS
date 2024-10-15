#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *prev;
    int data;
    struct node *next;
} Node;

Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);  // Exit if memory allocation fails
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(Node **head, int data) {
    Node *newNode = createNode(data);

    if (*head == NULL) {
        printf("Creating the first node\n");
        *head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    Node *last = (*head)->prev; // Get the last node
    last->next = newNode;       // Link the last node to the new node
    newNode->prev = last;       // Set the new node's previous pointer
    newNode->next = *head;      // Link the new node to the head
    (*head)->prev = newNode;     // Update head's previous pointer
}

void insertAfter(Node **head, int data, int target) {
    if (*head == NULL) {
        printf("(empty list) Creating the first node\n");
        *head = createNode(data);
        (*head)->next = *head;
        (*head)->prev = *head;
        return;
    }

    Node *current = *head;
    do {
        if (current->data == target) {
            Node *newNode = createNode(data);
            newNode->next = current->next;
            newNode->prev = current;

            current->next->prev = newNode; // Adjust the next node's previous pointer
            current->next = newNode;        // Link the new node in the list
            return;
        }
        current = current->next;
    } while (current != *head);

    // If target not found, insert at the end
    printf("Target not found; inserting at the end of the list\n");
    insertEnd(head, data);
}

void display(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node *current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int main() {
    Node *head = NULL;
    insertAfter(&head, 10, 20);
    insertAfter(&head, 20, 10);
    insertAfter(&head, 30, 20);

    display(head);
    return 0;
}
