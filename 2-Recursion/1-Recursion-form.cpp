#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void func(int n){
    if(n>0){
        cout<<n<<endl;
        func(n-1);
    }
}
int main(){
   int x = 10;
   func(x);
return 0;
}