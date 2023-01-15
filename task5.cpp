#include<iostream>
using namespace std;
float phal(string fruit,string day,float quantity);
main()
{
string fruit;
string day;
float quantity;
float a;

cout<<"enter fruit name: ";
cin>>fruit;
cout<<"enter day :";
cin>>day;
cout<<"enter quantity: ";
cin>>quantity;

   a= phal( fruit, day, quantity); 
   cout<<a;
}
float phal(string fruit,string day,float quantity)
{
    float a;
if(fruit=="banana")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*2.50;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*2.70;
return a;
}
}

if(fruit=="apple")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*1.20;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*1.25;
return a;
}
}

if(fruit=="orange")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*0.85;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*0.90;
return a;
}
}

if(fruit=="grapefruit")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*1.45;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*1.60;
return a;
}
}

if(fruit=="kiwi")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*2.70;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*3;
return a;
}
}

if(fruit=="pineapple")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*5.50;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*5.60;
return a;
}
}

if(fruit=="grapes")
{
if(day=="monday" || day=="tuesday"|| day=="wednesday"|| day=="thursday"|| day=="friday")
{
    a=quantity*3.85;
return a;
}

if(day=="saturday"|| day=="sunday")
{
a=quantity*4.20;
return a;
}
}
if(day!="monday" || day!="tuesday" || day!="wednesday" || day!="thursday" || day!="friday" || day!="saturday" || day!="sunday" )
{
    cout<<"invalid input";
}
if(fruit!="banana" || fruit!="apple" || fruit!="orange" || fruit!="kiwi" || fruit!="grapefruit" || fruit!="pineapple" || fruit!="grapes"  )
{
    cout<<"invalid Input";
}

}