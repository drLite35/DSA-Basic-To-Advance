#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   int a = 10;
   int &b = a;
   a=25;
   b=45;
   int c=15;
   a=c;
   cout << a <<" "<< b <<" "<<c; 
return 0;
}