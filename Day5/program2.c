/**
12345
 2345
  345
   45
    5
*/

#include<stdio.h>
int main(){
    int inputNumber;
    puts("Enter a number");
    scanf("%d",&inputNumber);
    for(int i=0;i<inputNumber;i++){
        for (int j=0;j<inputNumber;j++){
            if(i>inputNumber-i){
                printf("%d",j+1);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}