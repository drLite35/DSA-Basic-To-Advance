#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int *sadjoint(int *arr1 , int *arr2 , int m , int n){
    int i , j , k =0;
    int *p = new int[m+n];
    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            i++; 
            j++;
        }
        else if(arr1[i]<arr2[j])p[k++] = arr1[i++];
        else j++;
    }
    for( ; i<m ; i++){
        p[k++] = arr1[i];
    }
    return p;
}
int *unsadjoint(int *arr1 , int *arr2 , int m , int n){
    int *p = new int[m];
    int k=0;
    for(int i=0 ; i<m ; i++){
        int tmp =0;
        for(int j=0 ; j<n ; j++){
            if(arr1[i]==arr2[j])tmp=1;
        }
        if(tmp==1)continue;
        else p[k++] = arr1[i];
    }
    return p;
}
int main(){
    int arr1[6] = {12,23,34,45,67,70};
    int arr2[11] = {1,2,3,4,5,6,12,23,45,34,70};
    int *p = unsadjoint(arr1 , arr2 , 6 , 11);
    for(int i=0 ; i<9 ; i++){
        cout<<p[i]<<" ";
    }
return 0;
}