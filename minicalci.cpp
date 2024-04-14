#include<iostream>
using namespace std;

int main(){
    float a;
cout<<"Enter the value of a : ";
cin>>a;

float b;
cout<<"Enter the value of b : ";
cin>>b;


char op;
cout<<"Enter the operation you want to perform : ";
cin>>op;

switch(op){
    case '+' : cout<< (a+b) <<endl;
    

    case '/' : cout<< (a/b) <<endl;
    break;

    case '*' : cout<<(a*b)<<endl;
    break;

    case '-' : cout<<(a-b)<<endl;
    break;
}
}