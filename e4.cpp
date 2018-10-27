#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,t,i;
     ofstream myfile;
  myfile.open ("example.txt",ios::app);
    cin>>t;
    for(i=0;i<t;t++)
    {
        cin>>n;
        int *a=new int[n];
        int sum=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    myfile<<sum<<endl;
     
    }
     myfile.close();
}
