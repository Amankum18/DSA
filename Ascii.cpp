#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character : ";
cin>>ch;
int ascii=ch;

if(ascii>=65 && ascii<=90){
    cout<<"This is a upper case ";
}
else if(ascii>=97 && ascii<=122){
    cout<<"This is a lower case";
}
else if(ascii>=48 && ascii<=57){
    cout<<"This is numerical ";
}


}