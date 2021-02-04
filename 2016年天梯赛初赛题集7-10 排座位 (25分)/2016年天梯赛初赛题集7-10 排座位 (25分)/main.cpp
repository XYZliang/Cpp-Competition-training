//
//  main.cpp
//  2016年天梯赛初赛题集7-10 排座位 (25分)
//
//  Created by 张亮 on 2021/1/31.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m,k;
    cin>>n>>m>>k;
    int** a=new int*[n+1];
    for(int i=1;i<=n;i++)
    {
        a[i]=new int[n+1];
        for(int ii=1;ii<=n;ii++)
        {
            a[i][ii]=0;
        }
    }
    while(m--)
    {
        int b,c,d;
        cin>>b>>c>>d;
        a[b][c]=d;
        a[c][b]=d;
    }
    while(k--)
    {
        int b,c;
        cin>>b>>c;
        int d=a[b][c];
        if(d==1)
            cout<<"No problem";
        else if(d==0)
            cout<<"OK";
        else
        {
            int friends=0;
            for(int i=1;i<=n;i++)
            {
                if(a[b][i]==1&&a[c][i]==1)
                {
                    friends++;
                    break;
                }
            }
            if(friends)
                cout<<"OK but...";
            else
                cout<<"No way";
        }
        cout<<endl;
    }
    return 0;
}
