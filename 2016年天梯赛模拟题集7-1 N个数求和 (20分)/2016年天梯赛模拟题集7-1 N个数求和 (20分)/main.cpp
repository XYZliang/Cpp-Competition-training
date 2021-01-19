#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int* zii=new int[n];
    int* muu=new int[n];
    int zi=0,mu=0,maxmu=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d/%d",&zii[i],&muu[i]);
        if(muu[i]>maxmu)
            maxmu=muu[i];
    }
    int gongmu;
    for(int i=maxmu;;i++)
    {
        int key=1;
        for(int ii=0;ii<n;ii++)
        {
            if(i%muu[ii]==0)
                continue;
            else
            {
                key=0;
                break;
            }
        }
        if(key)
        {
            gongmu=i;
            break;
        }
        else
            continue;
    }
    for(int i=0;i<n;i++)
    {
        zii[i]*=gongmu/muu[i];
        zi+=zii[i];
    }
    mu=gongmu;
    int min=zi;
    if(mu<min)
        min=mu;
    int zheng=zi/mu;
    zi-=zheng*mu;
    for(int i=min;i>1;i--)
    {
        if(zi%i==0&&mu%i==0)
            {
                zi/=i;
                mu/=i;
            }
    }
    if(zheng)
        cout<<zheng;
    if(zheng*zi)
        cout<<" ";
    if(zi)
        cout<<zi<<"/"<<mu;
    if(zheng==0&&zi==0)
        cout<<"0";
    cout<<endl;
    return 0;
}
