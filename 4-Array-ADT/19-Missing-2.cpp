#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int randmis(int arr[] , int len){
    int diff = arr[0]-0;
    for(int i=0 ; i<len ; i++){
        if(arr[i]-i!=diff)return i+diff;
    }
    return -1;
} 
int main(){
   int arr[9] = {4,5,6,7,8,9,10,11,12};
   cout<<randmis(arr , 9);
return 0;
}