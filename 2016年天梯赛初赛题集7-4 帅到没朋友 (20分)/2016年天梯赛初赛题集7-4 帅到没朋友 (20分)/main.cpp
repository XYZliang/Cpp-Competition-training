//
//  main.cpp
//  2016年天梯赛初赛题集7-4 帅到没朋友 (20分)
//
//  Created by 张亮 on 2021/1/25.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int **a=new int*[n];
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a[i]=new int[m+1];
        a[i][0]=m;
        for(int ii=1;ii<=m;ii++)
        {
            cin>>a[i][ii];
        }
    }
    int m;
    int sum=0;
    cin>>m;
    int* b=new int[m];
    for(int i=0;i<m;i++)
    {
        b[i]=0;
    }
    int cont=0;
    for(int i=0;i<m;i++)
    {
        int cha;
        cin>>cha;
        int key=1;
        for(int i=0;i<m;i++)
        {
            if(cha==b[i])
            {
                key=0;
            }
        }
        b[i]=cha;
        cont++;
        for(int i=0;i<n&&key;i++)
        {
            for(int ii=1;ii<=a[i][0]&&key;ii++)
            {
                if(cha==a[i][ii]&&a[i][0]!=1)
                {
                    key=0;
                }
            }
        }
        if(sum&&key)
            cout<<" ";
        if(key)
        {
            sum++;
            cout<<cha;
        }
    }
    if(!sum)
        cout<<"No one is handsome";
    cout<<endl;
    return 0;
}
