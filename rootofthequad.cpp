#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 float a,b,disc,root1,root2,real,img;
 cout<<"enter the coefficient of quadratic equation";
 cin>>a>>b;
 disc=(b*b)-(4*a*b);
if(disc==0)
{
    cout<<"root are real and equal";
    root1=root2=(-b)/(2*a);
    cout<<"root1="<<root1<<"  "<<"root2="<<root2<<endl;

}
else if(disc>0)
{
    cout<<"root are real and distinct";
    root1=(-b+sqrt(disc))/(2*a);
    root2=(-b-sqrt(disc))/(2*a);
    cout<<"root1="<<root1<<"   "<<"root2="<<root2<<endl;
}
else
{
    cout<<"roots are imaginary ";
    real=(-b)/(2*a);
    img=(sqrt(abs(disc)))/(2*a);
    cout<<"root1="<<real<<"+i"<<img<<"      ";
    cout<<"root2="<<real<<"-i"<<img<<endl;

}

return 0;

}