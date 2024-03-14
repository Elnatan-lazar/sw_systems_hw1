#include<stdio.h>
#include<math.h>
#include "NumClass.h"



int isArmstrong(int x) {
int n=lengthNum(x);
int temp=x;
int sum=0;
while(x>0){
    
    sum=sum+power(x%10,n);
    x=x/10;
}

if(sum==temp){
    return 1;
}
return 0;
}


int power(int x,int y){
    int temp=x;
    for ( int i = 1; i <y; i++)
    {

    x=x*temp;
    
    }
    return x;
    
}


int isPalindrome(int x){
    int revers=0,temp=x;
    while(x>0){
        revers=revers*10+(x%10);
        x=x/10;

    }
    if(revers==temp){
        return 1;
    }
    return 0;

}

int lengthNum(int x){
int ans=0;
while(x>0){
    ans++;
    x=x/10;
}

return ans;
}