#include<iostream>
using namespace std;
struct time{
    int hour;
    int min;
    int sec;
};
int main()
{
struct time t1={7,31,54};
struct time t2={2,55,36};
struct time t;
t.sec=(t1.sec+t2.sec)%60;
int x=(t1.sec+t2.sec)/60;
t.min=(t1.min+t2.min+x)%60;
int y=(t1.min+t2.min)/60;
t.hour=t1.hour+t2.hour+y;
cout<<t.hour<<" ";
cout<<t.min<<" ";
cout<<t.sec<<" ";
return 0;
}