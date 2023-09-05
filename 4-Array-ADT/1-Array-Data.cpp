#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct Array{
    int *a;
    int size;
    int len;
};

int main(){
    struct Array arr;
    cout <<"Enter the size of Array"<<endl;
    int m;
    cin >> m ;
    arr.size = m;
    int n;
    cin >> n;
    arr.len = n;
    arr.a = new int[arr.size];
    for(int i=0 ; i<arr.len ; i++){
        cin >> arr.a[i];
    }
     for(int i=0 ; i<arr.len ; i++){
        cout << arr.a[i] << endl;
    }
   
return 0;
}