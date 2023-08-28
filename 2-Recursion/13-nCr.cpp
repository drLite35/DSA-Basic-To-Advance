#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int fact(int n){
    if(n<=0)return 1;
    else return fact(n-1)*n;
}
int comb(int n ,int r){
    int t1 = fact(n);
    int t2 = fact(r);
    int t3 = fact(n-r);
    return t1/(t2*t3);
}
int main(){
   cout<<comb(4,4)<<endl;
return 0;
}