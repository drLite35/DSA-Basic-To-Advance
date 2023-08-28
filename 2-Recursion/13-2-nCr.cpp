#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int pas(int n , int r){
    if(n==r || r==0)return 1;
    else{
        return pas(n-1 , r-1) + pas(n-1 , r);
    }
} 
int main(){
   cout << pas(5,3)<<endl;
return 0;
}