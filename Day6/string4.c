#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        if(!((arr[i]>='a' && arr[i]<='z')|| (arr[i]>='A' && arr[i]<='Z'))){
            
            int j=1;
            while(!(arr[i+j]>='a' && arr[i+j]<='z') || (arr[i+j]>='A' && arr[i+j]<='Z')) j++;
            strcpy(&arr[i], &arr[i + j]);
        }
    }

    printf("String without spaces: %s\n", arr);
    return 0;
}
