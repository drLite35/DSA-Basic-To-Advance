#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

int binary(int *arr , int l , int h , int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key)return binary(arr , l , mid-1 , key);
        else return binary(arr , mid+1 , h , key);
    }
    return -1;
}
int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   cout<<binary(arr , 0 , 9 , 11);
return 0;
}