#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
int *arr(int n){
    int ans[n];
    ans[0] = 55;
    return ans;
} 
int main(){
   int *a = arr(5);
   cout << a[0];
return 0;
}