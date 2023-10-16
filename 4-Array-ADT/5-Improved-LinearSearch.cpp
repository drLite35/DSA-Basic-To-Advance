#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void display(int arr[] , int len){
    for(int i=0 ; i<len ; i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *arr , int n1 , int n2){
    int tmp = arr[n1] ;
    arr[n1] = arr[n2];
    arr[n2] = tmp;
}

int improved(int arr[] , int key , int len){
    for(int i=0 ; i<len ; i++){
        if(key==arr[i]){
            if(i>0)swap(arr , i , i-1);
            return i;
        }
    }
    return -1;
}
int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   cout<<improved(arr , 5 , 10)<<endl;
   display(arr , 10);
   cout<<improved(arr , 5 , 10)<<endl;
   display(arr , 10);
   cout<<improved(arr , 5 , 10)<<endl;
   display(arr , 10);

return 0;
}