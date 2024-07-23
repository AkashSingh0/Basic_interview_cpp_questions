#include<iostream>
using namespace std;
void Sum_of_digit(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=ans+n%10;
        n=n/10;
    }
    cout<<ans;
}
int main(){
   int n;
   cout<<"Enter the no: ";
   cin>>n;
   Sum_of_digit(n);
   return 0;
}


//sum of 10 digit
// void Sum_of_digit(int n){
//     int ans=0;
//     while(n!=0){
//         ans=ans+n;
//         n--;
//     }
//     cout<<ans;
// }