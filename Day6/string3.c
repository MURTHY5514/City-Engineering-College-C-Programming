#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == ' ') {
            strcpy(&arr[i], &arr[i + 1]);
            i--; 
        }
    }

    printf("String without spaces: %s\n", arr);
    return 0;
}
