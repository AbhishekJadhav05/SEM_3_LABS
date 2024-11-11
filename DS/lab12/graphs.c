#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Function to initialize the adjacency matrix
void initializeMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            matrix[i][j] = 0; // Initialize all values to 0
        }
    }
}

// Function to add an edge in a directed graph
void addDirectedEdge(int matrix[MAX_VERTICES][MAX_VERTICES], int src, int dest) {
    matrix[src][dest] = 1; // Set the edge from src to dest
}

// Function to add an edge in an undirected graph
void addUndirectedEdge(int matrix[MAX_VERTICES][MAX_VERTICES], int src, int dest) {
    matrix[src][dest] = 1; // Set the edge from src to dest
    matrix[dest][src] = 1; // Set the edge from dest to src
}

// Function to display the adjacency matrix
void displayMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices, choice, src, dest;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];

    printf("Enter the number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &vertices);

    if (vertices > MAX_VERTICES) {
        printf("Error: Exceeds maximum number of vertices.\n");
        return 1;
    }

    initializeMatrix(adjacencyMatrix, vertices);

    do {
        printf("\nMenu:\n");
        printf("1. Add Directed Edge\n");
        printf("2. Add Undirected Edge\n");
        printf("3. Display Adjacency Matrix\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter source and destination vertices (0 to %d): ", vertices - 1);
                scanf("%d %d", &src, &dest);
                if (src < vertices && dest < vertices) {
                    addDirectedEdge(adjacencyMatrix, src, dest);
                } else {
                    printf("Error: Invalid vertex.\n");
                }
                break;

            case 2:
                printf("Enter source and destination vertices (0 to %d): ", vertices - 1);
                scanf("%d %d", &src, &dest);
                if (src < vertices && dest < vertices) {
                    addUndirectedEdge(adjacencyMatrix, src, dest);
                } else {
                    printf("Error: Invalid vertex.\n");
                }
                break;

            case 3:
                displayMatrix(adjacencyMatrix, vertices);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Error: Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
