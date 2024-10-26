#include<stdio.h>
#include<stdbool.h>
#include <Math.h>
int main() {
    int firstNum,lastNum;
    printf("Enter the First Number: ");
    scanf("%d",&firstNum);
    printf("Enter the Last Number: ");
    scanf("%d",&lastNum);
    
    for(int i=firstNum; i<= lastNum; i++){
        bool prime = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime  = false;
                break;
            }
        }
       
        if(prime){
            printf(" %d is Prime Number\n",i);
        }
    }
    return 0;
}

