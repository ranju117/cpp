#include<iostream>
using namespace std;
class A
{public:
string name1;
int salary1;
public:
void getnamea();
void display();
};
void A::display()
{
cout<<"name "<<name1<<" salary "<<salary1<<endl;


}
void A::getnamea()
{cout<<"Enter name and salary of A"<<endl;
cin>>name1;
cin>>salary1;
}

class B:public A
{public:
string name2;
int salary2;
public:
void getnameb();
void display();
};
void B::getnameb()
{cout<<"Enter name and salary of B"<<endl;
cin>>name2;
cin>>salary2;
}
void B::display()
{cout<<"name "<<name1<<" salary "<<salary1<<endl;

cout<<"name "<<name2<<" salary "<<salary2<<endl;
}
class C:public B
{public:
string name3;
int salary3;
void getnamec();
void display();
};
void C::getnamec()
{
cout<<"Enter name and salary of C"<<endl;
cin>>name3;
cin>>salary3;
}
void C::display()
{
cout<<"name "<<name1<<" salary "<<salary1<<endl;
cout<<"name "<<name2<<" salary "<<salary2<<endl;
cout<<"name "<<name3<<" salary "<<salary3<<endl;
}

int main()
{
C c;
c.getnamea();
c.getnameb();
c.getnamec();
c.display();
c.A::display();
c.B::display();
}
