#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void swap(int *x , int *y){
    int tmp=(*x);
    *x = *y;
    *y = tmp;
}
int main(){
   int a(10) , b(20);
   swap(&a,&b);
   cout<<a<<" "<<b;
return 0;
}