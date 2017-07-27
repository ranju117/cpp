#include<iostream>
using namespace std;
class student
{
public:
string name;
public:
void getname();
};
void student::getname()
{
cout<<"Enter name";
cin>>name;
}
class submarks:public virtual student
{
public:
int m1,m2,m3;
public:
void getmarks();
};

void submarks::getmarks()
{
cout<<"Enter m1,m2,m3"<<endl;
cin>>m1>>m2>>m3;
}

class sportsmarks:public virtual student
{
public:
int m;
public:
void getmark();
};
void sportsmarks::getmark()
{cout<<"Enter sports marks"<<endl;
cin>>m;
}
class result:public sportsmarks,public submarks
{
public:
int average;
void getaverage();
};
void result::getaverage()
{
average=(m1+m2+m3+m)/4;
cout<<"Student name"<<name<<endl;
cout<<"Marks "<<m1<<" "<<m2<<" "<<m3<<" Average "<<average<<endl;
}
int main()
{
result R;
R.getname();
R.getmarks();
R.getmark();
R.getaverage();
}
