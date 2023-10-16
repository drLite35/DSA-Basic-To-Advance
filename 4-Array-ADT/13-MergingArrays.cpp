#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int *merge(int *arr1 , int *arr2 , int m , int n){
    int *p;
    p = new int[m+n];
    int i , j , k=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j])p[k++] = arr1[i++];
        else p[k++] = arr2[j++];
    }
    for( ; i<m ; i++)p[k++]=arr1[i];
    for( ; j<n ; j++)p[k++]=arr2[j];
    return p;
}
int main(){
   int arr1[6] = {1,2,3,67 , 89 , 90};
   int arr2[7] = {-11,-2,-4 ,56,67,120 , 9012 };
   int *p = merge(arr1 , arr2 , 6 , 7);
   for(int i=0 ; i<13 ; i++){
    cout<<p[i]<<" ";
   }
return 0;
}