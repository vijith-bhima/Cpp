#include<iostream>
using namespace std;
int main(){
    int a,b,op;
    cout<<"enter value of a and b"<<endl;
    cin>>a>>b;
    cout<<"enter your choice"<<endl;
    cout<<"1.addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.division"<<endl;
    cin>>op;
    switch(op){
        case 1:
       cout<<"addition of a and b is "<<a+b<<endl;
        break;
        case 2:
        cout<<"subtraction of a and b is "<<a-b<<endl;
        break;
        case 3:
        cout<<"multiplication of a and b is"<<a*b<<endl;
        break;
        case 4 :
         if(b!=0){
        cout<<"division of a and b is "<<a/b<<endl;
         } else{
            cout<<"division by zero is not allowed"<<endl;
         }
        break;
        default:
        cout<<"invalid choice"<<endl;
        
    }
    return 0;


}