#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    for(int i=0 ; i<arr.length ; i++){
        cout<<arr.A[i]<<" ";
    }
}
void Append(struct Array *arr , int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void Insert(struct Array *arr , int ind , int num){
    if(arr->length<arr->size && ind<arr->length && ind>=0){
    for(int i=arr->length ; i>ind ; i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[ind] = num;
    arr->length++;
    }   
}

int main(){
   struct Array arr={{1,2,3,4,5} , 10 , 5};
   Append(&arr , 10);
   Insert(&arr , 9 , 12);
   display(arr);
   cout<<(arr.length);
return 0;
}