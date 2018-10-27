#include<iostream>
using namespace std;
int main(){
    int n,t,i,k,r;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    int m=0;
    cin>>n>>k;
    int *a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            r=k-a[i];
            if(m<=r)
            {
                m=r;
            } 
        }
    }
    cout<<endl<<m;
}
}
