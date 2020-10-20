//
//  main.cpp
//  1258:[蓝桥杯2015初赛]奖券数目
//
//  Created by 张亮 on 2020/9/2.
//

#include <iostream>
using namespace  std;
int main()
{
    int sum=0;
    for(int i=10000;i<=99999;i++)
    {
        int key=1;
        for(int ii=i*10;ii>10;)
        {
            ii/=10;
            if(ii%10==4)
            {
                key=0;
                break;
            }
        }
        if(key)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
