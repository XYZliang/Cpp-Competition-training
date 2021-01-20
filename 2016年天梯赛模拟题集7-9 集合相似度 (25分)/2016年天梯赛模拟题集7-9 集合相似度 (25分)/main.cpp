//
//  main.cpp
//  2016年天梯赛模拟题集7-9 集合相似度 (25分)
//
//  Created by 张亮 on 2021/1/20.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int** a=new int*[n];
    int** b=new int*[n];
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a[i]=new int[m+1];
        b[i]=new int[1000000001];
        for(int ii=0;ii<1000000001;ii++)
        {
            b[i][ii]=0;
        }
        a[i][0]=m;
        for(int ii=1;ii<=m;ii++)
        {
            cin>>a[i][ii];
            b[i][a[i][ii]]++;
        }
    }
    int m;
    cin>>m;
    while(m--)
    {
        int p,q;
        cin>>p>>q;
        int nc=0,nt=0;
        for(int i=0;i<=1000000001;i++)
        {
            if(b[p-1][i]*b[q-1][i])
                nc++;
            if((b[p-1][i]==0&&b[q-1][i]!=0)||(b[p-1][i]!=0&&b[q-1][i]==0))
                nt++;
        }
        cout<<1.0*nc/nt;
    }
    return 0;
}
