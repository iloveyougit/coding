#include<iostream>
using namespace std;
int main()
{
    int n,i,d;
//cout<<"enter array size rotation";
 cin>>n>>d;
 int *a=new int[n];
 int *temp=new int[d];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(i=0;i<d;i++)
 {
     temp[i]=a[i];   //1 2 3 4
     
 }
 for(i=0;i<n;i++)
 {
     
     a[i]=a[i+d];   //3 4
    
 }
 for(i=0;i<n;i++)
 {
     
      a[n-d+i]=temp[i];
 }

  for(i=0;i<n;i++)
 {
     cout<<a[i];
 }
}
