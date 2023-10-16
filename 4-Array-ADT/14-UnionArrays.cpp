#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int * sortuni(int *arr1 , int *arr2 , int m , int  n){
    int *p = new int[m+n];
    int i=0 , j=0 , k=0;
    while(i<m && j <n){
        if(arr1[i]==arr2[j]){
            p[k++]=arr1[i++];
            j++;
        }
        else if(arr1[i]>arr2[j])p[k++]=arr2[j++];
        else p[k++]=arr1[i++];
    }
    for( ; i<m ; i++)p[k++]= arr1[i];
    for( ; j<n ; j++)p[k++]= arr2[j];
    return p;
} 
int * unsortuni(int *arr1 , int *arr2 , int m , int n){
    int *p = new int[m+n];
    int i , k , j=0;
    for( ; i<m ; i++){
        p[k++]=arr1[i];
    }
    for( ; j<n ; j++){
        int tmp=0;
        for(int l=0 ; l<m ; l++){
            if(arr2[j]==arr1[l])tmp=1;
        }
        if(tmp==1)continue;
        else p[k++]=arr2[j];
    }
    return p;
}
int main(){
   int arr1[5] = {1,2,3,4,500};
   int arr2[8] = {1,2,3,4,500,500,700,800};
   int *p = sortuni(arr1 , arr2 , 5 , 8);
   for(int i=0 ; i<13 ; i++){
    cout<<p[i]<<" ";
   }
return 0;
}