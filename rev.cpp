#include<iostream>
//#include<bits/stdc++.h>
#include<stack>
using namespace std; 
  
void recursiveReverse(string &str) 
{ 
   stack<char> st; 
   for (int i=0; i<str.length(); i++) 
       st.push(str[i]); 
  
   for (int i=0; i<str.length(); i++) { 
       str[i] = st.top(); 
       st.pop(); 
   }        
} 
  
// Driver program 
int main() 
{ 
    string str = "12345"; 
    recursiveReverse(str); 
    cout << str; 
    return 0; 
} 
