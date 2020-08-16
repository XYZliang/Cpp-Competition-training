//
//  main.cpp
//  1250: [蓝桥杯2015初赛]方程整数解
//
//  Created by 张亮 on 2020/8/15.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
        int count(0);
        int counts(0);
        double n=sqrt(num);
        for(int a=1;a<=n;a++)
            for(int b=a;b<=n;b++)
                for(int c=b;c<=n;c++)
                {
                    counts++;
                    if(a*a+b*b+c*c==num)
                    {
                        count++;
                        cout<<a<<" "<<b<<" "<<c<<endl;
                    }
                }
        if(!count)
            cout<<"No Solution"<<endl;
        //cout<<counts<<endl;
    }
    return 0;
}
