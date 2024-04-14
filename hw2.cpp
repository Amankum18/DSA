#include<iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;
   
for(int i = 2; i<n; i++){
    int nextnum = a+b;

    a = b;
    b = nextnum;

   
}
return b;

}



int main(){
    int x;
cin>>x;

int ans = fib(x);

cout<<ans;
}