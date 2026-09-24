#include <iostream>

using namespace std;
int main(){

double num1,num2;
cout<<"enter the number1 :";
cin>>num1;
cout<<"enter the number  :";
cin>>num2;
char op;
cout<<"enter the arithmic operations  :";
cin>>op;
switch(op){
    case'+':
    cout<<num1+num2;
    break;
    case'-':
    cout<<num1-num2;
    break;
    case'*':
    cout<<num1*num2;
    break;
    case'/':
    if(num2==0)
    cout<<"infinity";
    else
    cout<<num1/num2;
    default:
    cout<<"invalid";
}
}
