#include<bits/stdc++.h>
using namespace std;

int countOdddigits()  {
   

    int count=0;

    while(n>0){
    int lastdigit=n%10;
   if(lastdigit % 2!=0) {
   count=count+1;
   }
   n=n/10;
    }
    return count;
   
    } 
    int main(){
        countOdddigits();
        return 0;
    }