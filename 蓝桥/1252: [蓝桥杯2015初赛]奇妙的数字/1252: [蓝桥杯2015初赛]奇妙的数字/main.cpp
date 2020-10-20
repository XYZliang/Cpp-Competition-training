//
//  main.cpp
//  1252: [蓝桥杯2015初赛]奇妙的数字
//
//  Created by 张亮 on 2020/8/19.
//

#include <iostream>
using  namespace::std;
bool yep(int num1,int num2)
{
    int timee[10]={0};
    while(num1>=10)
    {
        int c=num1%10;
        timee[c]++;
        if(timee[c]!=1)
            return false;
        num1/=10;
    }
    timee[num1]++;
    while(num2>=10)
    {
        int c=num2%10;
        timee[c]++;
        if(timee[c]!=1)
            return false;
        num2/=10;
    }
    timee[num2]++;
    for(int i=1;i<=9;i++)
    if(timee[i]!=1)
        return false;
    return true;
}
int main()
{
    for(int i=1;i<100000;i++)
    {
        int a=i*i;
        int b=a*i;
        if(yep(a,b))
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
