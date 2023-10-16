#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int missing(int arr[] , int len){
    int num = arr[len-1];
    int sum =(num*(num+1))/2;
    int s(0);
    for(int i=0 ; i<len ; i++){
        s+=arr[i];
    }
    return sum-s;
}
int main(){
   int arr[8] = {1,2,3,4,6,7,8,9};
   cout<<missing(arr , 8);
return 0;
}