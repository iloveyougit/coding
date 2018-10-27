#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
#define asc 256
char getOcc(char* str)
{
    int count[asc]={0};
    int i;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        count[str[i]]++;
    }
    int max=-1;
    char result;
    for(i=0;i<len;i++)
    {
        if(max<=count[str[i]])
        {
           
            max=count[str[i]];
            result=str[i];
         
        }
         
    }
    return result;
}
int main()
{
    char str[]="ankizzthhaee";
    cout<<"Max occ"<<endl<<getOcc(str)<<endl;
}
