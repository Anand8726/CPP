//Calculate the Sum of First N Natural Numbers by considering the input from the user.

#include<iostream>
using namespace std;
int main(){
    int  n , sum;
    cout<<"Enter the number = ";
    cin>>n;
    sum = n*(n+1)/2;
    cout<<"The sum of first N natural numbers are = "<<sum ;
    return 0;
}