//
//  main.cpp
//  1253: [蓝桥杯2015初赛]牌型种数
//
//  Created by 张亮 on 2020/8/19.
//

#include <iostream>
using namespace std;

int plan;

void dts(int num,int time)
{
    //time++ X
    if(num>13||time>13)
        return;
    if(num==13&&time==13)
    {
        plan++;
        return;
    }
    time++;//注意time++的位置
    for(int i=0;i<=4;i++)
    {
        //dts(num+i,++time); X
        dts(num+i,time);
    }
}

int main()
{
    plan=0;
    dts(0,0);
    cout<<plan<<endl;
    return 0;
}
