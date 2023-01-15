#include<iostream>
using namespace std;
float came(char type,char time,int min);
main()
{
char type;
char time;
int min;
float charges,a;

cout<<"enter which type of customer you are(Residential or Premium) \n select(r/p): ";
cin>>type;
cout<<"enter number of minutes you used the service: ";
cin>>min;
cout<<"press D for Daytime and Press N for Night time";
cin>>time;
  a=came( type, time, min);  
  cout<<a<<"$"; 
}
float came(char type,char time,int min)
{
float charges;

if(type=='r' && min<50)
{
charges=10;
return charges;
}

if(type=='r' && min>50)
{
charges=10 + (0.20*min);
return charges;
}

if(type=='p' && min<75 && time=='d')
{
    charges=25 ;
    return charges;
}

if(type=='p' && min<100 && time=='n')
{
    charges=25 ;
    return charges;
}

if(type=='p' && min>75 && time=='d')
{
    charges=25 + (0.10*min) ;
    return charges;
}

if(type=='p' && min>100 && time=='n')
{
    charges=25 + (0.05*min) ;
    return charges;
}
return 0;


}