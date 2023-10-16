#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
bool isSorted(int *arr , int len){
    for(int i=0 ; i<len-1 ; i++){
        if(arr[i]>arr[i+1])return false;
    }
    return true;
}
int main(){
   int arr[10] = {1,2,3,5,5,9};
   cout<<isSorted(arr ,6 );
return 0;
}