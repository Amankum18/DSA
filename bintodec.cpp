#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. in binary : ";
    cin>>n;
    int ans = 0;
    int i;

while(n!=0){
    int digit = n%10;
    if(digit == 1){
        ans = ans + pow(2,i);
    }
    n=n/10;
    i++;
}
cout<<ans;

}