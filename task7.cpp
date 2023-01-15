#include<iostream>
using namespace std;
int examhours(int examhour,int arrivalhour);
int examminutes(int exammin,int arrivalmin);
main()
{
int examhour;
int arrivalhour;
int total;
int total1;
int exammin;
int arrivalmin;
cout<<"enter exam starting time(hour): ";
cin>>examhour;
cout<<"enter exam starting time (minutes): ";
cin>>exammin;
cout<<"student hour of arrival: ";
cin>>arrivalhour;
cout<<"student minute of arrival: ";
cin>>arrivalmin;
 total=examhours( examhour, arrivalhour);
cout<<total<<endl;
 total1=examminutes( exammin, arrivalmin);
  cout<<total1<<endl;  
}
int examhours(int examhour,int arrivalhour)
{
    int total;
int exammin;
int arrivalmin;

if(examhour>arrivalhour)
{
    total=examhour-arrivalhour;
    return total;
}
if(examhour<arrivalhour)
{
    total=arrivalhour-examhour;
    return total;
}


}

int examminutes(int exammin,int arrivalmin)
{
int total1;
int examhour;
int arrivalhour;

if(exammin>arrivalmin)
{
    total1=exammin-arrivalmin;
    return total1;
}
if(exammin<arrivalmin)
{
    total1=arrivalmin-exammin;
    return total1;
}



}