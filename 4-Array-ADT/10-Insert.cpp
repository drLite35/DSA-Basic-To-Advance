#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void insert(int *arr , int len , int x){
    int i=len-1;
    while(arr[i]>=x){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
}
int main(){
   int arr[10] = {1,2,3,4,17,218,788,900,91223};
   insert(arr , 9 , 345 );
   for(int i=0 ; i<10 ; i++){
    cout<<arr[i]<<" ";
   }
return 0;
}