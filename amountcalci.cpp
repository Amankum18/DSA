#include<iostream>
using namespace std;

int main(){
    int a;
cout<<"Enter the amount : ";
cin>>a;

int note = 0;
int num = 1;

switch(num){
    case 1 : {
        note = a/100;
        a= a-(100*note);
        cout<<note <<"  quantity of Rs.100 is required "<<endl;

    }

    case 2: {
        note = a/50;
        a= a  - (50*note);
        cout<<note <<" quantity of  Rs.50 is required "<<endl;

    }
    case 3:{
        note = a/10;
        a = a - (10*note);
        cout<< note <<" quantity of Rs.10 is required "<<endl;
    }
}
}