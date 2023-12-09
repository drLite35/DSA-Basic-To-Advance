#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
struct rect {
    int len;
    int wid;
};

int main(){
    int *p1;
    float *p2;
    char *p3;
    bool *p4;
    struct rect *p5;
    cout << sizeof(p1)<<endl;
    cout << sizeof(p2)<<endl;
    cout << sizeof(p3)<<endl;
    cout << sizeof(p4)<<endl;
    cout << sizeof(p5)<<endl;
// every pointer takes the size of 8
return 0;
}