#include<iostream>
using namespace std;
//Shantanu Nawathey
//22070123107
int main()
{
    int a, b, c, d, sum;
    cout<<"Enter the marks of sub 1: ";
    cin>>a;
    cout<<"Enter the marks of sub 2: ";
    cin>>b;
    cout<<"Enter the marks of sub 3: ";
    cin>>c;
    cout<<"Enter the marks of sub 4: ";
    cin>>d;
    sum = (a+b+c+d)/4;
    if(90>=sum){
        cout<<"O grade";

    }
    else if(90>sum>=85){
        cout<<"A+ grade";
    }
    else if(85>sum>=75){
        cout<<"A grade";

    }
    else if(75>sum>=55){
        cout<<"B grade";
    }
    else if(55>sum>=40){
        cout<<"C grade";
    }
    else{
        cout<<"F grade";
    }
}
