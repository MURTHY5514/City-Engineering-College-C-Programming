#include<stdio.h>
int main(){
    int inputNumber;
    puts("Enter a number");
    scanf("%d",&inputNumber);
    for(int i=0;i<inputNumber;i++){
        for (int j=0;j<inputNumber;j++){
            if(j+1>=inputNumber-i){
                printf("*");
            }else{
                printf("  ");
            }
        }
    }
}