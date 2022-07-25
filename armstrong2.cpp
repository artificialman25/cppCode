#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arm=0;
    int original=num;
    while(num>0)
    {
        int lastdigit=num%10;
        arm=arm+(lastdigit*lastdigit*lastdigit);
        num=num/10;


    }
    cout<<arm;
    if(arm==original)
    {
        cout<<"YES ! IT'S A ARMSTORNG NUMBER";
    }
    else{
        cout<<"SORRY!";
    }
    return 0;
}