//Calculate the Area of Circle considering the input(radius) from users.

#include<iostream>
using namespace std;
int main(){
    float r, area;
    cout<<"Enter the Radius : ";
    cin>>r;
    //area=3.1425f*r*r;
    area=(float)22/7*r*r;
    cout<<"Area of Circle = "<<area;
    return 0;
}