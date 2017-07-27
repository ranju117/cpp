#include<iostream>
using namespace std;

class duration
{
    public:
int hr,mi;
duration(){}
public:
void getduration()
{
cin>>hr>>mi;
}
};
class time
{public:
int hr,mi;
public:
    time(){}
 time(duration &d)
{
    hr=d.hr;
    mi=d.mi;
}
void display()
{
cout<<"hrs: "<<hr<<"mins: "<<mi<<endl;
}
operator duration()
{

    duration D;
    D.hr=hr;
    D.mi=mi;
    return D;
}
};
int main()
{
time t;
duration D;
D.getduration();
t=D;
t.display();
D=t;

cout<<"Hrs:"<<D.hr<<" mins:"<<D.mi<<endl;

}
