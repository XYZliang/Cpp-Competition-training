//
//  main.cpp
//  1255: [蓝桥杯 2015 初赛] 饮料换购
//
//  Created by 张亮 on 2020/8/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n,gai,sum;
    while(cin>>n)
    {
        gai=0;
        sum=0;
        do
        {
            sum+=n;
            int m=n+gai;
            n=m/3;
            gai=m%3;
    
        }while(gai+n>=3);
        cout<<sum+n<<endl;
    }
    return 0;
}
//101 101 101
//33 35 134
//11 13 145
//4 5 149
//1 3 150
//1 0 151
