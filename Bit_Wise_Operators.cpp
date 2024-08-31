//BITWISE OPERATORS
//Considering values of X and Y as 11 and 7 respectively.
#include<iostream>
using namespace std;
int main(){

    int x = 11 , y = 7 , z;

    z = x & y ;
    cout<<" AND OPERATION = "<<z<<endl;
    
    z = x | y ;
    cout<<" OR OPERATION = "<<z<<endl;
    
    z = x ^ y ;
    cout<<" X-OR OPERATION = "<<z<<endl;
    
    z = ~ x ;
    cout<<" NOT OPERATION = "<<z<<endl;

    //considering value of character A = 20 
    char a = 20 , b ;
    
    b = a << 1;
    cout << " Left-Shift by 1 = "<<(int)b<<endl;
    
    b = a >> 1 ;
    cout<<" Right-Shift by 1 = "<<(int)b;
}
