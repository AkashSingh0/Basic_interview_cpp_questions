// 153=1*3+5*3+3*3=153
#include<iostream>
using namespace std;

void armstrong(int n){
int sum=0;
    for(int i=1;i<=n;i++){
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==n){
        cout<<n<<" is an Armstrong no."<<endl;
    }
    else{
        cout<<n<<" not an Armstrong no."<<endl;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    armstrong(n);
    return 0;
}