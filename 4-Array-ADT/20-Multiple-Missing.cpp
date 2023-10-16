#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void multidif(int arr[] , int len){
    int diff = arr[0]-0;
    for(int i=0 ; i<len ; i++){
        if(arr[i]-i!=diff){
            while(diff<arr[i]-i){
            cout<<diff+i<<" ";
            diff++;
            }
        }
    }
}
int main(){
   int arr[5] = {4,7,11,20,22};
   multidif(arr,5);
return 0;
}