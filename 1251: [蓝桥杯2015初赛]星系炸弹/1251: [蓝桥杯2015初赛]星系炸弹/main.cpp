//
//  main.cpp
//  1251: [蓝桥杯2015初赛]星系炸弹
//
//  Created by 张亮 on 2020/8/16.
//

#include <iostream>
using namespace std;

int day[14]={0,31,28,31,30,31,30,31,31,30,31,30,31,99999};
int y,m,d,a;

void right()
{
        day[2]=((y%4==0&&y%100!=0)||y%400==0)?29:28;
    if(d>day[m])
    {
        d-=day[m];
        m++;
    }
    else if(m>12)
    {
        y++;
        m-=12;
    }
    else
    {
        cout<<y<<"-";
        if(m<10)
            cout<<"0"<<m<<"-";
        else
            cout<<m<<"-";
        if(d<10)
            cout<<"0"<<d<<endl;
        else
            cout<<d<<endl;
        return;
    }
    right();
    return;
}

int main()
{
    while(cin>>y>>m>>d>>a)
    {
        d+=a;
        right();
    }
    return 0;
}
