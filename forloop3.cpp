#include<iostream>

using namespace std;

int main(){
    int n;
    bool isprime = 1;
cout<<"Enter the value of n : ";
cin>>n;

for(int i=2; i<n; i++){
    if(n%i==0){
        cout<<"It is not a prime number "<<endl;
        isprime=0;
        break;
    }
}

    if(isprime==0){
        cout<<n<<" not a prime number ";
    }
    else{
        cout<<n<<" is a prime number ";
    }
    
    
}
