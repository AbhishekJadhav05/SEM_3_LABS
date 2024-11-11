#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node* createNode(int data) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}
void insert_empty(node **head,int newData)
{
    node *temp = createNode(newData);
    *head = temp;
}
void insertBefore(node **head, int newData, int beforeData) {
    node *newNode = createNode(newData);
    if (*head == NULL) {
        printf("List is empty\n");
        insert_empty(head,newData);
        return;
    }
    if ((*head)->data == beforeData) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    node *temp = *head;
    while (temp->next != NULL && temp->next->data != beforeData) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("Element %d not found\n", beforeData);
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAfter(node **head, int newData, int afterData) {
    node *newNode = createNode(newData);
    node *temp = *head;
    while (temp != NULL && temp->data != afterData) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element %d not found\n", afterData);
        insert_empty(head,newData);
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteElement(node **head, int data) {
    node *temp = *head;
    node *prev = NULL;
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element %d not found\n", data);
        return;
    }
    prev->next = temp->next;
    free(temp);
}

void traverse(node *head) {
    node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse(node **head) {
    node *prev = NULL;
    node *current = *head;
    node *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}


void sort(node **head) {
    if (*head == NULL) return;
    node *i, *j;
    int temp;
    for (i = *head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void deleteEveryAlternate(node **head) {
    if (*head == NULL) return;
    node *current = *head;
    node *temp;
    while (current != NULL && current->next != NULL) {
        temp = current->next;
        current->next = temp->next;
        free(temp);
        current = current->next;
    }
}

void insertInSorted(node **head, int data) {
    node *newNode = createNode(data);
    if (*head == NULL || (*head)->data >= data) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    node *temp = *head;
    while (temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    node *head = NULL;
    int choice, data, beforeData, afterData;

    while (choice!=9) {
        printf("Menu:\n");
        printf("1. Insert element before another element\n");
        printf("2. Insert element after another element\n");
        printf("3. Delete given element\n");
        printf("4. Traverse the list\n");
        printf("5. Reverse the list\n");
        printf("6. Sort the list\n");
        printf("7. Delete every alternate node\n");
        printf("8. Insert element in a sorted list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert and element before which to insert: ");
                scanf("%d %d", &data, &beforeData);
                insertBefore(&head, data, beforeData);
                break;
            case 2:
                printf("Enter element to insert and element after which to insert: ");
                scanf("%d %d", &data, &afterData);
                insertAfter(&head, data, afterData);
                break;
            case 3:
                printf("Enter element to delete: ");
                scanf("%d", &data);
                deleteElement(&head, data);
                break;
            case 4:
                traverse(head);
                break;
            case 5:
                reverse(&head);
                break;
            case 6:
                sort(&head);
                break;
            case 7:
                deleteEveryAlternate(&head);
                break;
            case 8:
                printf("Enter element to insert in sorted list: ");
                scanf("%d", &data);
                insertInSorted(&head, data);
                break;
            case 9:
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
