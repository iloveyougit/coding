#include <iostream>
using namespace std;
int main() {
	int num,i;
	cin >> num;	
    int *a=new int[num];
	for(i=0;i<num;i++)
	{
	    cin>>a[i];
	}
	for(i=num-1;i>=0;i--)
        cout<< a[i];
