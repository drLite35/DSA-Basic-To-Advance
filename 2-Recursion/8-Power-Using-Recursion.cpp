#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int func(int m , int n){
    if(n<=0){
        return 1;
    }
    else return func(m , n-1)*m;
}
int main(){
   cout<<func(2,5)<<endl;
return 0;
}