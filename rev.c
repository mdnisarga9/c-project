#include <stdio.h>

void rev() {
    char str[100], rev[100];
    int i, j, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads string without spaces

    // Finding the length of the string
    while (str[count] != '\0') {
        count++;
    }

    // Reversing the string
    j = count - 1;
    for (i = 0; i < count; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';  // Null-terminate the reversed string

    printf("String before reverse: %s\n", str);
    printf("String after reverse: %s\n", rev);
}


