#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   int A[8]; //static way to declare an array
   A[0] = 45;
   int *p;
   p = new int[5];//use to declare using heap or dynamic array 
   p[0] = 45;
   cout << p[0]<<endl;
   cout << A[0];
return 0;
}