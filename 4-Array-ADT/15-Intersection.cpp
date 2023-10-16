#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int *sortInt(int *arr1 , int *arr2 , int m , int n){
    int i , j , k =0;
    int *p = new int[m+n];
    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            p[k++]=arr1[i++];
            j++;
        }
        else if(arr1[i]>arr2[j])j++;
        else i++;
    }
    return p;

}
int *unsortInt(int *arr1 , int *arr2 , int m , int n){
    int *p = new int[m+n];
    int k=0;
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            if(arr1[i]==arr2[j]){
                p[k++]=arr1[i];
            }
        }
    }
    return p;
}
int main(){
   int arr1[6] = {12,23,34,45,67,70};
   int arr2[11] = {1,2,3,4,5,6,12,23,34 , 45,70};
   int *p = sortInt(arr1 , arr2 , 6 , 11);
   for(int i=0 ; i<9 ; i++){
    cout<<p[i]<<" ";
   }
return 0;
}