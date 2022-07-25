#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter the name of the customer";
    cin>>name;
    int units;
    cout<<"enter the units consumed";
    cin>>units;
    float charge;
    if(units>0&&units<=200)
    {
      charge=100+(units*0.8);

    }
    else if(units>200&&units<300)
    {
        charge=100+(200*0.8)+((units-200)*0.9);
    }
    else{
        charge=100+(200*0.8)+(100*0.9)+(units-300);
    }
    if(charge>400)
    {
        charge=charge+(0.15*charge);
    }
    cout<<"Name Of The Customer "<<name<<endl<<"  "<<"Units Consumed By The Consumer  "<<units<<endl<<"  "<<"Total Charge OF Electricity  "<<charge<<endl;
    return 0;

}