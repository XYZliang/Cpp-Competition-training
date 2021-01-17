//
//  main.cpp
//  1259:[蓝桥杯 2015 初赛] 三羊献瑞
//
//  Created by 张亮 on 2020/10/10.
//
#include <time.h> //时间头(随机数生成器基于时间)
#include <iostream>
using namespace std;
int main()
{
    double r;
    for(int i=1;i<=100;i++)
    {
    srand((unsigned)time(NULL)+rand());
        r=rand()/(1.0*RAND_MAX);
        cout<<r<<endl;
    }
    return 0;
}
