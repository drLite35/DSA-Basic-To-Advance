#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void reverse(int *arr , int size){
    for(int i=0 , j=size-1; i<j ; i++ , j-- ){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}
void display(int *arr , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[5]={1,2,3,4,5};
   display(arr,5);
   cout<<endl;
   reverse(arr , 5);
   cout<<endl;
   display(arr , 5);
return 0;
}