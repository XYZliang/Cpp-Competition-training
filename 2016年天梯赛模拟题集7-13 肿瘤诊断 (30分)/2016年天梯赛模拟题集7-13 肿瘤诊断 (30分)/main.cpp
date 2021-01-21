//
//  main.cpp
//  2016年天梯赛模拟题集7-13 肿瘤诊断 (30分)
//
//  Created by 张亮 on 2021/1/21.
//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int m,n,l,t;
int*** a;
int*** b;

int quyu(int i,int ii,int iii)
{
    if(ii<0||iii<0||ii>=m||iii>=n)
        return 0;
    if(a[i][ii][iii]==0||b[i][ii][iii]==1)
        return 0;
    b[i][ii][iii]=1;
    return 1+quyu(i,ii-1,iii-1)+quyu(i,ii-1,iii)+quyu(i,ii-1,iii+1)+quyu(i,ii,iii-1)+quyu(i,ii,iii+1)+quyu(i,ii+1,iii-1)+quyu(i,ii+1,iii)+quyu(i,ii+1,iii+1);
}

int main(int argc, const char * argv[]) {
    int sum=0;
    cin>>m>>n>>l>>t;
    a=new int**[l];
    b=new int**[l];
    for(int i=0;i<l;i++)//控制张
    {
        a[i]=new int*[m];
        b[i]=new int*[m];
        for(int ii=0;ii<m;ii++)//行
        {
            a[i][ii]=new int[n];
            b[i][ii]=new int[n];
            for(int iii=0;iii<n;iii++)//列
            {
                cin>>a[i][ii][iii];
                b[i][ii][iii]=0;
            }
        }
        for(int ii=0;ii<m;ii++)
        {
            for(int iii=0;iii<n;iii++)
            {
                if(a[i][ii][iii]==0||b[i][ii][iii]==1)
                    continue;
                int s=quyu(i, ii,iii);
                if(s>=t)
                {
                    sum+=s;
                    //cout<<i+1<<","<<ii+1<<","<<iii+1<<","<<":"<<s<<endl;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
