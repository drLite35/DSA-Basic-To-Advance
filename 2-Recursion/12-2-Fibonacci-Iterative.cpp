#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
   int n ;
   cin>>n;
   if(n==0)cout<<0;
   else if(n==1)cout<<1;
   else{
    int f0 = 0;
    int f1 = 1;
    int f2;
    for(int i=2 ; i<=n ; i++){
        f2 = f1+f0;
        f0 = f1;
        f1 = f2;
        
    }
    cout <<f2;
   }
return 0;
}