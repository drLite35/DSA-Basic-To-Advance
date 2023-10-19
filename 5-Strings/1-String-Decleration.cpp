#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   char c = 'A';//to decleare char
   char x[10] = "Anurag"; //automatically null is added
   char y[10] = {'A' , 'n' , 'u', 'r' ,'a' , 'g' ,'\0' , 's' , 'i' };//everything after null is ignored
   char s[25] = "Anurag Singh";
   cout<<c<<" "<<x<<" "<<y<<" "<<s;

return 0;
}