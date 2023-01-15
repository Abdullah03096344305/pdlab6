#include<iostream>
using namespace std;

string task1(float english,float math,float chemistry,float science,float biology);
main()
{
    string name;
float english,math,chemistry,science,biology,percentage,total;
string a;
cout<<"enter your name: ";
cin>>name;
cout<<"enter english marks: ";
cin>>english;
cout<<"enter math marks: ";
cin>>math;
cout<<"enter chemistry marks: ";
cin>>chemistry;
cout<<"enter  social science marks: ";
cin>>science;
cout<<"enter biology marks: ";
cin>>biology;
 a=task1( english, math, chemistry, science, biology);
 cout<<"your grade are: "<<a<<endl;
}
string task1(float english,float math,float chemistry,float science,float biology)
{
string name;
float percentage,total;
percentage= (english+math+chemistry+science+biology) * (100) / (500);
 total=english+math+chemistry+science+biology;
 cout<<"your total marks are: "<<total<<endl;
 cout<<"your percentage is :"<<percentage<<"%"<<endl;

if (percentage>90 && percentage<=100 )
{
    return "A+";
}
else if (percentage>=80 && percentage<=90)
{
   return "A";
}
else if (percentage>=70 && percentage<80)
{
    return "B+";
}
else if (percentage>=60 && percentage<70)
{
    return "B";
}
else if (percentage>=50 && percentage<60)
{
    return "C";
}
else if (percentage>=40 && percentage<50)
{
    return "D";
}
else if (percentage<40)
{
    return "F";
}
else
return "wrong input";

}
