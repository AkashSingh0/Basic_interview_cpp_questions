#include<iostream>
using namespace std;
void prime(int n){

    if(n<=1){
        cout<<"Not Prime"<<endl;
        return;
    }

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            return;
        }
    }
    cout<<"Prime"<<endl;
}
int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    prime(n);
    return 0;
}