//Sum of the elements of an array
#include<stdio.h>
int main(){
    int arr[100],*p=arr,n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&arr[i++]));
    for(int i=0;i<n;sum+=*p,p++,i++);
    printf("%d",sum);
    return 0;
}