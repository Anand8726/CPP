//Find the roots of the Quadratic Equations by considering the values of a, b and c from ax^2+bx+c = 0 .

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c, root1, root2;
    cout<<"Enter values of a,b,c : ";
    cin>>a>>b>>c;   
    root1= (-b+sqrt(b*b-4*a*c))/(2*a);
    root2= (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots of the quadratic equation are "<<root1<<" and "<<root2 ;
    return 0;
}