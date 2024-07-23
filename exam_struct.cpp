#include<iostream>
using namespace std;

struct Animal{
    string name;
    string color;
    int quantity;
    float Weight;
};

int main(){
    Animal Dog;

    Dog.name="Leo";
    Dog.color="Brown";
    Dog.quantity=4;
    Dog.Weight=45.8;

    cout<<"Animal A "<<endl;
    cout<<"name: "<<Dog.name<<endl;
    cout<<"color: "<<Dog.color<<endl;
    cout<<"quantity: "<<Dog.quantity<<endl;
    cout<<"Weight: "<<Dog.Weight<<endl;

    cout<<endl;
    
    Animal Horse={"Surya", "Black", 8, 128};
    cout<<"Animal B "<<endl;
    cout<<"name: "<<Horse.name<<endl;
    cout<<"color: "<<Horse.color<<endl;
    cout<<"quantity: "<<Horse.quantity<<endl;
    cout<<"Weight: "<<Horse.Weight<<endl;


    return 0;
}