#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int pow(int m , int n){
    if(n<=0)return 1;
    if(n%2==0)return pow(m*m , n/2);
    else return pow(m , n-1)*m;
} 
int main(){
   cout<<pow(2 , 3);
return 0;
}