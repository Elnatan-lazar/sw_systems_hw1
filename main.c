#include <stdio.h>
#include "NumClass.h"

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        int c=a;
        a=b;
        b=c;
    }
  printf("The Armstrong numbers are: ");
  for(int i=a;i<=b;i++){
        if(isArmstrong(i)){
            printf("%d ",i);
        }
    }
printf("\n");
printf("he Palindromes are: ");
for(int i=a;i<=b;i++){
        if(isPalindrome(i)){
            printf("%d ",i);
        }
    }
printf("\n");
printf("The Prime numbers are: ");
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
  printf("\n");
    printf("The Strong numbers are:");
    for(int i=a;i<=b;i++){
        if(isStrong(i)){
            printf("%d ",i);
        }
    }

    




    return 0;
}