#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int fib(int n){
    if(n<2)return n;
    else return fib(n-2)+fib(n-1);
}
int main(){
   cout<<fib(7)<<endl;
return 0;
}