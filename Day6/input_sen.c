#include<stdio.h>
int main(){
    int arr[100];
    printf("Enter a sentence");
    scanf("%[^\n]s",&arr);
    printf("%s",arr);
}