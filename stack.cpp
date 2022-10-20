#include <iostream> 
#include <stack>  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,data;
    stack<int>stk;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>data;
        stk.push(data);
    }

    while(!stk.empty())
    {
        if(stk.top()>10)cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}