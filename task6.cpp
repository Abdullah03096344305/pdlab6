#include<iostream>
using namespace std;
float apartment(string month,float stays);
float studio(string month,float stays);
main()
{
string month;
float stays;
float a,discount,b;

cout<<"enter month: ";
cin>>month;
cout<<"enter number of days to stay at hotel: ";
cin>>stays;

  a=apartment( month, stays);
  cout<<a<<"$"<<endl;   
b=studio( month, stays);
cout<<b<<"$"<<endl;

}
float apartment(string month,float stays)
{
float a,discount;

if(month=="may" || month=="october")
{
if(stays<=14)
{
a=65*stays;
return a;
}
if(stays>14)
    {
a=65*stays;
discount=(a*90) / (100);
return discount;
    }

}
if(month=="june" || month=="september")
{
   if(stays<=14)
{
a=68.70*stays;
return a;
}
    if(stays>14)
    {
a=68.70*stays;
discount=(a*90) / (100);
return discount;
    }

}
if(month=="july" || month=="august")
{
    if(stays<=14)
{
a=77*stays;
return a;
}
    
    if(stays>14)
    {
a=77*stays;
discount=(a*90) / (100);
return discount;
    }
}

}



float studio(string month,float stays)
{

float b,discount;

if(month=="may" || month=="october")
{
if(stays<7)
{
b=50*stays;
return b;
}
if(stays>7 && stays<=14)
    {
b=50*stays;
discount=(b*95) / (100);
return discount;
    }
    if(stays>14)
    {
b=50*stays;
discount=(b*70) / (100);
return discount;
    }

}
if(month=="june" || month=="september")
{
   if(stays<7)
{
b=75.20*stays;
return b;
}
    if(stays>7 && stays<=14)
    {
b=75.20*stays;

return b;
    }
    if(stays>14)
    {
b=75.20*stays;
discount=(b*80) / (100);
return discount;
    }

}
if(month=="july" || month=="august")
{
    if(stays<7)
{
b=76*stays;
return b;
}
    
    if(stays>7)
    {
b=76*stays;
discount=(b*95) / (100);
return b;
    }
}





}