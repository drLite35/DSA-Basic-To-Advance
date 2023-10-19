#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   string a = "Pai";
   string b = "Pa";
   int i=0 , j = 0;
   for(; a[i]!='\0' && b[j]!='\0' ; i++ , j++){
    if(a[i]!=b[j]){
        cout<<"NO";
        break;
   }
   }
   cout<<i<<" "<<j;
   if(a[i]==b[j])cout<<"equal";
   else cout<<"NO";
return 0;
}//we are supposed to initialise both of the given variable to maintain the given sequence and thus then only we can see the desired results keep in mind
//one other way is to directly check for the length if they are unequal give the output as no directly and if equal then compare each letter and break if they are not at any point
//in both the cases one might use the fact that if a[i]>b[j]then this will come in 