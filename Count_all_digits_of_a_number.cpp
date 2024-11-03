#include<bits/stdc++.h>
using namespace std;
int countdigit(int n){
      
      
    
     
//output 1, when the number is 0.
        if(n==0)return 1;
int count=0;

        //when the number is not 0.
        while(n>0){
            
            int lastdigit=n%10;
            
         count=count+1;
        }
         n/=10;

        return count;
    
    }
    int main(){
        int n; 
        cout<<"Enter a number:";
        cin>>n;
        int countdigit;
        cout<<"countdigit:"<<countdigit<<endl;
        return 0;
        
    }
        
        

   

      