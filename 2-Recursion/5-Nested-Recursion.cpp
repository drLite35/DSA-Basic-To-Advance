#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int func(int A) {
    if(A>100)return A-10;
    else{
        return func(func(A+11));
    }
}
int main(){
   cout<<func(30);
return 0;
}