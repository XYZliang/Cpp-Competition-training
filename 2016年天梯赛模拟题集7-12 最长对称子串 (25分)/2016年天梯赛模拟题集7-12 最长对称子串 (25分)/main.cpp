//
//  main.cpp
//  2016年天梯赛模拟题集7-12 最长对称子串 (25分)
//
//  Created by 张亮 on 2021/1/21.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string a;
int len;
int hello(int l,int r)
{
    int key=0;
    if(a[l]!=a[r])
        key=0;
    else
    {
        if(abs(l-r)==0)
        {
            key=1;
        }
        else if(abs(l-r)==1)
        {
            key=2;
        }
        else
        {
            key=hello(l+1, r-1);
            key=key?key+2:0;
        }
    }
    return key;
}

int main(int argc, const char * argv[]) {

    getline(cin,a);
    len=(int)a.length();
    int max=1;
    for(int i=0;i<len;i++)
    {
        for(int ii=len-1;ii>i;ii--)
        {
            int ax=0;
            if(a[i]==a[ii])
            {
                ax=hello(i, ii);
                max=ax>max?ax:max;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
