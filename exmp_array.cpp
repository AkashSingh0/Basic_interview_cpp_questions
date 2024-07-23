#include<iostream>
using namespace std;
int main(){
    int num[5]={1,2,3,4,5};
    cout<<"Element of the array are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"num[" << i << "] = " << num[i]<<endl;
    }
    
    num[2]=5;
    num[4]=3;

    cout<<"Array after modification: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"num[" << i << "] = " <<num[i]<<endl;
    }

    return 0;
}