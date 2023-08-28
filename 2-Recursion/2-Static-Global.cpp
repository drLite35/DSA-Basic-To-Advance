#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int func(int n){
    if(n>0){
        return func(n-1)+n;
    }
    return 0;
}
int main(){
   int x;
   x=func(5);
   cout<<x<<endl;
return 0;
}