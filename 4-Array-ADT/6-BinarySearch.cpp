#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int binary(int *arr , int key , int len){
    int l=0 ;
    int h=len-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key)h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   cout<<binary(arr , 3 , 10);
return 0;
}