#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   int A[1][2] = {{1,2}};//first way 
   cout<<A[0][1];
   int *B[3];
   B[0] = new int[4];//using half heap and half static
   B[0][1] = 1;
   cout<<B[0][1];
   int **C;//using completely dynamic array 
   C = new int *[4];
   C[0] = new int[4];
   C[0][1] = 1;

   cout<<C[0][1];
   return 0;


}