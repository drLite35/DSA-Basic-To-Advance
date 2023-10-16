#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int get(int *arr , int index , int size){
    if(index>=0 && index<size)return arr[index];
}

void set(int *arr , int index , int size , int x){
    if(index>=0 && index<size) arr[index] = x;
}

int max(int *arr , int size){
    int max=arr[0];
    for(int i=0 ; i<size ; i++){
        if(arr[i]>max)max=arr[i];
    }
    return max;
}

int sum(int *arr , int size){
    int tot=0;
    for(int i=0 ; i<size ; i++){
        tot+=arr[i];
    }
    return tot;
}
int sumr(int *arr , int len){
    if(len<0)return 0;
    else return sumr(arr , len-1)+arr[len];
}
int main(){
   int arr[5] = {1,2,3,4,5};
   cout<<get(arr, 3 , 5)<<endl;
   set(arr, 3 , 5 , 10);
   cout<<get(arr, 3,5)<<endl;
   cout<<max(arr, 5)<<endl;
   cout<<sum(arr, 5)<<endl;
   cout<<sumr(arr, 4)<<endl;
return 0;
}