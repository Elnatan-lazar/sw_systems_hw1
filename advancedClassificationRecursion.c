#include<math.h>
#include <stdio.h>
#include "NumClass.h"



int Power(int x,int y){
    int temp=x;
    for ( int i = 1; i <y; i++)
    {

    x=x*temp;
    
    }
    return x;
    
}


int lengthNum(int x){
int ans=0;
while(x>0){
    ans++;
    x=x/10;
}

return ans;
}

int isPalindrome(int x) {
if(x<10){
    return 1;
}
else{
double l=lengthNum(x);

int power=Power(10,l);


if (x/(power/10)%10!=x%10)
{
    return 0;
}
else {
    return isPalindrome(x%(power/10)/10);
}



}


}

int isArmstrong2(int x,int n ){

if(x<10){
    return Power(x,n);
}
return Power(x%10,n)+isArmstrong2(x/10,n);

}




int isArmstrong(int x ){

int num=lengthNum(x);
if(isArmstrong2(x,num)==x){
    return 1;
}
return 0;

}
