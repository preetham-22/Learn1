#include<stdio.h>
#include<stdbool.h>
#include <Math.h>
int main() {
    int firstNum,lastNum;
    printf("Enter the First Number: ");
    scanf("%d",&firstNum);
    printf("Enter the Last Number: ");
    scanf("%d",&lastNum);
    int count=0;
    for(int i=firstNum; i<= lastNum; i++){
        bool prime = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime  = false;
                break;
            }
        }       
        if(prime){
           count++;
        }
    }
    printf("Total number of prime numbers between %d and %d is: %d",firstNum,lastNum,count);
    return 0;
}

