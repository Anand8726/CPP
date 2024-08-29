//Calculate the Area Of Triangle by taking input (base and height) from user.

#include<iostream>
using namespace std ;
int main(){
    int base, height, area;
    cout<<"Enter Base and Height = ";
    cin>>base>>height;
    area = (base*height)/2;
    cout<<"Area of triangle = "<<area;
    return 0;
}