#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *link;
}*head = NULL;

void create(int arr[] , int n){
    struct Node *tail , *current;
    head->data = arr[0];
    head->link = NULL;
    tail = head;
    for(int i=0 ; i<n; i++){
        current->data = arr[i];
        current->link = NULL;
        tail->link= current;
        tail = current;
    }
}
//this is the complete method to make linked list using head and tail and temp or current keep head or first at beginning and sort of make a chain using tail and current
int main(){
   
return 0;
}