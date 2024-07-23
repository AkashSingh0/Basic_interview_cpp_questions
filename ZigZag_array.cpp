#include<iostream>
using namespace std;
void swap(int arr[], int i, int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
void zigzag(int arr[], int n){
    int flag=1; //x<y! then swap
    for(int i=0;i<n-1;i++){
        if(flag==1){
            if(arr[i]>arr[i+1]){
                swap(arr, i, i+1);
            }
            flag =0;
        }else{
            if(arr[i]<arr[i+1]){
                swap(arr,i,i+1);
            }
            flag=1;
        }
    }
}
int main(){
    int n=6;
    int arr[n]={5,3,7,4,9,1};
    
    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    zigzag(arr, n);

    cout<<"After Zigzag array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}