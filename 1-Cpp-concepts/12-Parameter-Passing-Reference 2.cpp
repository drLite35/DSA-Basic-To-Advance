#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void swap(int &a , int &b){
    int tmp;
    tmp = a;
    a=b;
    b=tmp;
}
 
int main(){
   int a(10) , b(20);
   swap(a,b);
   cout<<a<<" "<<b;
return 0;
}