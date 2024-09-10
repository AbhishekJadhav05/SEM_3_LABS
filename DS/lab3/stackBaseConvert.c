#include<stdio.h>

// Define stack structure
struct stack {
    int top;
    int arr[50];
} s;

// Push function to push elements onto the stack
void push(int ele) {
    if (ele >= 10) {  // Handle hex conversion for digits A-F
        s.arr[++s.top] = ele + 55; // 'A' = 65, so 10 -> 'A' is 10 + 55 = 65
    } else {
        s.arr[++s.top] = ele;  // Push digits directly for bases 2, 8, and <10 in base 16
    }
}

// Display function to print the stack content
void display() {
    for (int i = s.top; i >= 0; i--) {
        if (s.arr[i] >= 65) {  // Handle display of hex characters A-F
            printf("%c", s.arr[i]);
        } else {
            printf("%d", s.arr[i]);
        }
    }
    printf("\n");
}

void main() {
    int dec, b, temp;

    // Initialize stack
    s.top = -1;

    printf("Enter decimal number: ");
    scanf("%d", &dec);

    // Ask for the base and ensure it's 2, 8, or 16
    printf("Enter base to convert to (2, 8, 16): ");
    do {
        scanf("%d", &b);
        if (b == 2 || b == 8 || b == 16) {
            break;
        }
        printf("Invalid input. Please enter 2, 8, or 16: ");
    } while (1);

    // Convert decimal to the required base
    temp = dec;
    while (temp > 0) {
        push(temp % b);  // Push the remainder onto the stack
        temp = temp / b;
    }

    // Display the converted number
    printf("Converted number: ");
    display();
}
