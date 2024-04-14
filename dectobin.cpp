#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
cout<<"Enter the digit is decimal : ";
cin>>n;

int ans = 0;
int i;

while(n!=0){
    int bits = n&1;
    n=n>>1;

    ans = (bits * pow(10,i))+ans;
    i++;
}
cout<<"Answer of digit in binary is : "<<ans;
}