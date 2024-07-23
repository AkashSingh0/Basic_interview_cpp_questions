#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter a no: ";
    cin>>a;
    cout<<"Enter b no: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a=" << a <<" b="<< b <<endl;

}