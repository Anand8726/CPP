//Calculate the speed considering the input (initial and final velocities & acceleation) from user .

#include<iostream>
using namespace std;
int main(){
    float u, v, a; 
    float speed;
    cout<<"Enter values of Initial Velocities = ";
    cin>>u;
    cout<<"Enter values of Final Velocities = ";
    cin>>v;
    cout<<"Enter values of Acceleration = ";
    cin>>a;
    speed = ( (v*v) - (u*u) ) / ( 2 * a );
    cout<<"Speed is "<<speed;
    
    return 0;
}