#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void negpos(int *arr , int len){
    int i=0 ; 
    int j= len-1;
    while(i<j){
        while(arr[i]<0)i++;
        while(arr[j]>=0)j--;
        if(i<j){
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
}
int main(){
   int arr[11] = {1,-2,3,-4,5,-6,8,7,-8,9,-10};
   negpos(arr , 11);
   for(int i=0 ; i<10 ; i++){
    cout<<arr[i]<<" ";
   }
return 0;
}