#include<iostream>
using namespace std;
string sign(string month,int date);
main()
{
string a;
string month;
int date;


cout<<"enter your date of birth: ";
cin>>date;
cout<<"enter your month of birth: ";
cin>>month;
a=sign(month,date);
cout<<"your zodiac sign is "<<a;    
}
string sign(string month,int date)
{

if(month=="march")
{
    if(date>=21 && date<=31)
    {
    return "Aries";
    }
    if(date>=1 && date<=20)
    {
        return "Pisces";
    }
}

if(month=="april")
{
    if(date>=1 && date<=19)
    {
        return "Aries";
    }
    if(date>=20 && date<=30)
    {
        return "Taurus";
    }
}

if(month=="may")
{
    if(date>=1 && date<=19)
    {
        return "Taurus";
    }
    if(date>=20 && date<=31)
    {
        return "Gemini";
    }
}

if(month=="june")
{
    if(date>=1 && date<=20)
    {
        return "Gemini";
    }
    if(date>=21 && date<=30)
    {
        return "Cancer";
    }
}

if(month=="july")
{
    if(date>=1 && date<=22)
    {
        return "Cancer";
    }
    if(date>=23 && date<=31)
    {
        return "Leo";
    }
}

if(month=="august")
{
    if(date>=1 && date<=22)
    {
        return "leo";
    }
    if(date>=23 && date<=31)
    {
        return "virgo";
    }
}

if(month=="september")
{
    if(date>=1 && date<=22)
    {
        return "virgo";
    }
    if(date>=23 && date<=30)
    {
        return "libra";
    }
}

if(month=="october")
{
    if(date>=1 && date<=22)
    {
        return "libra";
    }
    if(date>=23 && date<=31)
    {
        return "scorpio";
    }
}

if(month=="november")
{
    if(date>=1 && date<=21)
    {
        return "scorpio";
    }
    if(date>=22 && date<=30)
    {
        return "sagittarius";
    }
}

if(month=="december")
{
    if(date>=1 && date<=21)
    {
        return "sagittarius";
    }
    if(date>=22 && date<=31)
    {
        return "capricon";
    }
}

if(month=="january")
{
    if(date>=1 && date<=19)
    {
        return "capricon";
    }
    if(date>=20 && date<=31)
    {
        return "aquarius";
    }
}

if(month=="february")
{
    if(date>=1 && date<=18)
    {
        return "aquarius";
    }
    if(date>=19 && date<=29)
    {
        return "pisces";
    }
}







}