#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
double e(int x, int n){
    static double p = 1;
    static double f = 1;
    double r =1;
    if(n==0)return 1;
    else{
        r = e(x , n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
   cout<<e(1,100);
return 0;
}