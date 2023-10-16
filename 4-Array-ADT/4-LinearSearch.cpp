#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

int search(int *arr , int key , int len){
    for(int i=0 ; i<len ; i++){
        if(arr[i]==key)return i;
    }
    return -1;
}
int main(){
   int arr[5] = {1,2,3,4,5};
   cout<<search(arr , 3 , 5);
return 0;
}