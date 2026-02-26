#include<iostream>
using namespace std;
int main(){
    int a,b,t;
   cout<<"enter value of a and b"<<endl;
   cin>>a>>b;
   cout<<"before swapping a is "<<a<<" and b is "<<b<<endl;
   t=a;
   a=b;
   b=t;
   cout<<"after swapping a is "<<a<<" and b is "<<b<<endl;
   return 0;
}