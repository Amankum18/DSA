#include<iostream>
using namespace std;

int main(){
    int n;
cout<<"Enter the output : ";
cin>>n;

int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        char ch = 'A'-i+j+3;
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
}