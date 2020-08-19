//
//  main.cpp
//  1252: [蓝桥杯2015初赛]奇妙的数字
//
//  Created by 张亮 on 2020/8/19.
//

#include <iostream>
using  namespace::std;
bool yep(long long num)
{
    int timee[10]={0};
    while(num>=10)
    {
        int c=num%10;
        timee[c]++;
        if(timee[c]!=1)
            return false;
        num/=10;
    }
    timee[num]++;
    for(int i=1;i<=10;i++)
    if(timee[i]!=1)
        return false;
    return true;
}
int main()
{
    for(int i=10000;;i++)
    {
        long long a=i*i;
        long long b=a*i;
        if(yep(a))
            if(yep(b))
                cout<<i;
        cout<<i<<endl;
    }
    return 0;
}
