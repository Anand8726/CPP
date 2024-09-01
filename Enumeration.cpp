//#ENUMERATION

#include<iostream>
using namespace std ;

enum day {mon, tue,wed=5, thurs ,fri ,sat=9,sun};

enum dept{IT ,CS ,ENTC ,MECH ,AIDS };

int main(){

    cout<<"enum for days "<<endl;
    day d ;
    d= mon;
    cout<<d<<endl;
    d= tue;
    cout<<d<<endl;
    d= wed;
    cout<<d<<endl;
    d= thurs;
    cout<<d<<endl;
    d= fri;
    cout<<d<<endl;
    d= sat;
    cout<<d<<endl;
    d= sun;
    cout<<d<<endl;

    cout<<"enum for department "<<endl;

    dept dep ;
    dep =IT ;
    cout<<dep<<endl;
    dep=AIDS ;
    cout<<dep<<endl;
          
}