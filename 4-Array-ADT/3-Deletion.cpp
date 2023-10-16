#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct Array {
    int A[10];
    int len;
    int size;
};

void display(struct Array arr){
    for(int i=0 ; i<arr.len ; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
    cout<<arr.len<<endl;
    cout<<arr.size;
}
void deletion(struct Array *arr ,  int index){
    if(index<arr->len){
        for(int i=index ; i<(arr->len)-1 ; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->len--;
    }
}
int main(){
   struct Array arr = {{1,2,3,4} , 4 ,10};
   deletion(&arr , 0);
   display(arr);
return 0;
}