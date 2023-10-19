#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
void bitdup(string s){
    long long h=0;
    for(int i=0  ;s[i]!='\0' ; i++){
        int x=1;
        x=x>>(s[i]-97);
        if((x&h)>0){
            cout<<s[i]<<" has duplicate"<<endl;
        }
        else{
            h = x | h; 
        }
    }
}
int main(){
   bitdup("anuraga");
return 0;
}
//understand the concept of masking where you use and operation to see whether the bit is activated or not
//understand the concept of merging where you use or operation to make the bit the bit activated if that aint activated