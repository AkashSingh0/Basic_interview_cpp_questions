// 121, 141, 111, 000

// #include<iostream>
// using namespace std;
// void palindrome(int n){
//     int orgNum=n;
//     int revNum=0;

//     while(n>0){
//         int count=n%10;  //last digit of n
//         revNum=revNum*10+count; //update from 0 to n, reverse n
//         n=n/10;  // update n by removing last element of n
//     }
//     if(orgNum==revNum){
//         cout<<orgNum<<" is a palindrome"<<endl;
//     }else{
//         cout<<orgNum<<" is not a palindrome"<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     palindrome(n);
//     return 0;
// }


//string
#include<iostream>
#include<string>
using namespace std;
void palindrome(const string str){
    int start=0;
    int end=str.length()-1;

    while(start<end){
        if(str[start]!=str[end]){
            cout<<str<<" is Not Palindrome";
            return;
        }
        start++;
        end--;
    }
    cout<<str<<" is Palindrome";
}
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    palindrome(str);
    return 0;
}