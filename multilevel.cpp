#include<iostream>
using namespace std;

class grandparent
{
protected:
string nameg;
int ageg;
};
class parent:public grandparent
{
protected:
string namep;
int agep;
public:
void getname();
};

void parent::getname()
{
cout<<"Enter name of grandfather"<<endl;
cin>>nameg;

cout<<"Enter age of grandfather"<<endl;
cin>>ageg;
cout<<"Enter name of father"<<endl;
cin>>namep;
cout<<"Enter age of father"<<endl;
cin>>agep;

}
class child:protected parent
{
protected:
    string namec;
int agec;
public:
void getnames();
void display();
void mock();
};
void child::mock()
{
    getname();
}
void child::getnames()
{cout<<"Enter name of child"<<endl;
cin>>namec;
cout<<"Enter age of child"<<endl;
cin>>agec;
display();
}
void child::display()
{cout<<"Family details:"<<endl;
cout<<"Grandfather's name "<<nameg<<" Age: "<<ageg<<endl;
cout<<"Father's name "<<namep<<" Age: "<<agep<<endl;
cout<<"Child's name "<<namec<<" Age: "<<agec<<endl;
}
int main()
{
    child C;
    C.mock();
    C.getnames();

}
