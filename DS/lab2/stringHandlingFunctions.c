#include <stdio.h>
#include<stdlib.h>
// Function to get the length of a string
int strlength(char *s) {
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

// Function to insert a string s2 into s1 at position pos
void InsertString(char *s1, char *s2, int pos) {
    int s1_len = strlength(s1);
    int s2_len = strlength(s2);
    int i;

    // Move characters of s1 to make space for s2
    for (i = s1_len; i >= pos; i--)
        s1[i + s2_len] = s1[i];

    // Insert characters of s2 into s1
    for (i = 0; i < s2_len; i++)
        s1[i + pos] = s2[i];
}

// Function to delete substring s2 from string s1
void Delete_Subs(char *s1, char *s2) {
    int s1_len = strlength(s1);
    int s2_len = strlength(s2);
    int i, j, pos = -1;

    // Find the substring position
    for (i = 0; i <= s1_len - s2_len; i++) {
        int match = 1;
        for (j = 0; j < s2_len; j++) {
            if (s1[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            pos = i;
            break;
        }
    }

    // If the substring is found, shift characters to the left
    if (pos != -1) {
        for (i = pos; i <= s1_len - s2_len; i++)
            s1[i] = s1[i + s2_len];
    }
}

// Function to concatenate s1 and s2 into s3
void concat(char *s1, char *s2, char *s3) {
    int s1_len = strlength(s1);
    int s2_len = strlength(s2);
    int i, j;

    // Copy s1 into s3
    for (i = 0; i < s1_len; i++)
        s3[i] = s1[i];

    // Copy s2 into s3 after s1
    for (j = 0; j < s2_len; j++)
        s3[i + j] = s2[j];

    // Null-terminate the concatenated string
    s3[i + j] = '\0';
}

// Function to compare two strings
int stringCompare(char* str1,char* str2){
    int i=0;
    int flag=0;
    while(flag == 0){
        if(str1[i]<str2[i]){
            flag = -1;
        }
        else if (str1[i]>str2[i])
        {
            flag = 1;
        }
        if(str1[i] == '\0')
            break;
        i++;
    }
    return flag;
}


int main() {
    char string[100], subs[50], stradd[150];
    int ch, len, output;

    printf("Enter a string: ");
    scanf("%s", string);
   

    while (1) {
        printf("\nEnter a choice\n1. Length\n2. Concatenation\n3. Comparison\n4. Insert\n5. Delete a substring\n6. Exit: ");
        fflush(stdin);
        scanf("%d",&ch);
        
        if (ch == 6) break;

        switch (ch) {
            case 1:
                len = strlength(string);
                printf("The length of the string is: %d\n", len);
                break;
            case 2:
                printf("Enter another string: ");
                scanf("%s", subs);
                concat(string, subs, stradd);
                printf("New concatenated string is: %s\n", stradd);
                break;
            case 3:
                printf("Enter another string: ");
                scanf("%s", subs);
                output = stringCompare(string, subs);
                printf("output : %d",output);
                break;
            case 4:
                printf("Enter another string: ");
                scanf("%s", subs);
                printf("Enter the position: ");
                scanf("%d", &output);
                InsertString(string, subs, output);
                printf("New string is: '%s'\n", string);
                break;
            case 5:
                printf("Enter substring to delete: ");
                scanf("%s", subs);
                Delete_Subs(string, subs);
                printf("String after deletion is: '%s'\n", string);
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}
