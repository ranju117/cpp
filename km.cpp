#include<iostream>
using namespace std;
class metre
{
public:
int m;
public:

void getmetre();
void displaym();
};
void metre::getmetre()
{cout<<"Enter metres"<<endl;
cin>>m;
}
class kilo
{public:
int m;
public:
    kilo(){}
void getkilo();
kilo(metre &);
void displayk();

operator metre()
{
metre a;
a.m=m*1000;
return a;
}
};
void kilo::getkilo()
{cout<<"Enter kilometres"<<endl;
cin>>m;
}
kilo::kilo(metre &x)
{
m=(x.m/1000);
}
void kilo::displayk()
{
cout<<"Kilometres "<<m<<endl;

}
void metre::displaym()
{
cout<<"Metres: "<<m<<endl;

}
int main()
{
kilo K;metre M;
M.getmetre();
K=M;
K.displayk();
K.getkilo();
M=K;
M.displaym();
}
