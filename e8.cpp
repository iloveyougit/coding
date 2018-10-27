#include<iostream>
#include<vector>
using namespace std;
class MyQueue
{
private:
    vector<int> data;
    int p_start;
public:
    MyQueue(){p_start=0;}
    bool enqueue(int x)
    {
        data.push_back(x);
        return true;
    }
    bool dequeue()
    {
        if(is_empty())
        {
           return true; 
        }
        p_start++;
        return true;
    }
    int Front()
    {
        return data[p_start];
        
    }
    bool is_empty()
    {
        return p_start>=data.size();
    }
    
};
int main()
{
    MyQueue q;
    q.enqueue(5);
     q.enqueue(6);
      q.enqueue(7);
    if(!q.is_empty())
        cout<<q.Front()<<endl;
    q.dequeue();
     q.dequeue();
     if(!q.is_empty())
        cout<<q.Front()<<endl;
    
}
