#include<iostream>
using namespace std;
string tennis(string temp,string humid);
main()
{
string temp;
string humid;
string a;

cout<<"enter temparatrure: ";
cin>>temp;
cout<<"enter humidity";
cin>>humid;
 a=tennis(temp,humid);  
 cout<<a; 
}
string tennis(string temp,string humid)
{
if(temp=="warm")
{
    if(humid=="dry")
    {
        return "play tennis";
    }
    if(humid=="humid: ")
    {
        return "swim";
    }
    return 0;
}

if(temp=="cold")
{
    if(humid=="dry")
    {
        return "play basketball";
    }
    if(humid=="humid")
    {
        return "watch tv";
    }
    return 0;
}


}