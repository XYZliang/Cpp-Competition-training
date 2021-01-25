//
//  main.cpp
//  2016年天梯赛初赛题集7-3 谁先倒 (15分)
//
//  Created by 张亮 on 2021/1/25.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int jia,yi,n;
    int jiahe=0;
    int yihe=0;
    bool jiawin=false;
    cin>>jia>>yi>>n;
    for(int i=0;i<n;i++)
    {
        int b,c,d,e;
        cin>>b>>c>>d>>e;
        bool jiaying=true;
        bool yiying=true;
        int end=b+d;
        if(c==end)
            jiaying=false;
        if(e==end)
            yiying=false;
        if(jiaying!=yiying)
        {
            if(!jiaying)
            {
                jiahe++;
                if(jiahe>jia)
                {
                    jiawin=false;
                    break;
                }
            }
            if(!yiying)
            {
                yihe++;
                if(yihe>yi)
                {
                    jiawin=true;
                    break;
                }
            }
        }
    }
    if (jiawin)
        cout<<"B"<<endl<<jiahe<<endl;
    else
        cout<<"A"<<endl<<yihe<<endl;
    return 0;
}
