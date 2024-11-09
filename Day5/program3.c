// find the largest number in the array

#include<stdio.h>
int main(){
    int arr[10];
    puts("Enter 10 numbers for the array: ");
    // for(int i=0;i<10;i++){
    //     scanf("%d",&arr[i]);
    // }
    for(int i=0;i<10;scanf("%d",&arr[i++]));
    int largest=arr[0];
    // for(int i=0;i<10;i++){
    //     if(arr[i]>largest){
    //         largest=arr[i];
    //     }
    // }
    for(int i=0;i<10;i++)if(arr[i]>largest)largest=arr[i];
    printf("The largest number is %d",largest);
    return 0;
}