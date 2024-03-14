#include<stdio.h>
#include<math.h>
#include <c++/13/bits/ranges_util.h>
#include "NumClass.h"




int isPrime(int x){
if(x==1||x==0){return 0;}
if(x==2){return 1;}

for(int i=2;i<x;i++){
    if(x%i==0){
        return 0;
    }
}
    return 1;
}


int isStrong(int x){
int sum=0,temp=x;
while (x>0) 
{
    sum=sum+Factorial(x%10);
    x=x/10;
}
if(sum==temp)
{
    return 1;   
}

    return 0;
}

int Factorial(int x){
    int t=1;
    for (size_t i = 1; i <= x; i++)
    {
        t=t*i;
    }
    return t;
    
}
