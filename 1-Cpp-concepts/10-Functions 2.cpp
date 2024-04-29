#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int add(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
   int a(10) , b(5);
   int z;
   z=add(a,b);
   cout<<z<<endl;
return 0;
}