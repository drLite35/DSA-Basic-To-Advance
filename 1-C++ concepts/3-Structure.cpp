#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct rect{
    int len;
    int wid;
    char x;
} r2 , r3; // decleared locally 

struct rect r1 ; // decleared globally

int main(){
   struct rect r3 = {1 ,2} ;// decleared and initialized locally
   cout << sizeof(r3)<<endl;
   cout << r3.len << endl;
return 0;
}