#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    
    cout<<"Enter rows and col for the first matrix: ";
    cin>>r1>>c1;

    cout<<"Enter rows and col for the second matrix: ";
    cin>>r2>>c2;

    if(c1 != r2){
        cout<<"Matrix multiplication is not possible with this dimension"<<endl;
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    cout<<"Enter the element of first matrix: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>> matrix1[i][j];
        }
    }

    cout<<"Enter the element of Second matrix: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>> matrix2[i][j];
        }
    }

    //intilaize result matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
        result[i][j]=0;
        }
    }

    //perform matrix multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    cout<<"Resultant matrix:"<<endl;
    for(int i=0;i<r1;i++){  
        for(int j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}