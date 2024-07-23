//4!=4*3*2*1

#include<iostream>
using namespace std;
void facto(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
        cout<<"Factorial of "<< n <<" is: "<< fact <<endl;
}
int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;
    facto(n);
    return 0;
}
