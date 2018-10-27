#include <bits/stdc++.h> 
using namespace std; 

void recursiveReverse(string &str, int i=0)
{
    int n=strlen(str.c_str());
    if(i==n/2)
        return;

     
        swap(str[i],str[n-i-1]);
        recursiveReverse(str,i+1);
    
}

// Driver program 
int main() 
{ 
    string str = "12345"; 
    recursiveReverse(str); 
    cout << str; 
    return 0; 
} 
