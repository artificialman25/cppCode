#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<hj"enter a year";
    cin>>year;
    if(year%400==0)
    {
        cout<<"It's a leap year "<<year;
    }
    else if(year%100==0)
    {
        cout<<"It's not a leap year"<<year;
    }
    else if(year%4==0)
    {
        cout<<"It's a leap year"<<year;
    }
    else
    {
        cout<<"It's not a leap year"<<year; 
    }
    return 0;
}