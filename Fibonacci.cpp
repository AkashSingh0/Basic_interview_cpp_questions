// 0 1 1 2 3 5 8 13 21....

#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0, b=1, nextTerm;

    if(n>=1){
        cout<<a;
    }

    for(int i=1;i<n;i++){
        
        nextTerm=a+b;
        cout<<" "<<b;
        a=b;
        b=nextTerm;
    }
}
int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
    
    if(n<=0){
        cout<<"plz enter a positive integer"<<endl;
    }else{
        fibonacci(n);
    }
    return 0;
}