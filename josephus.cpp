#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>ch;
    for(int i=1;i<=n;i++)
    {
        ch.push_back(i);
    }
    auto it=ch.begin();
    while(!ch.empty())
    {
        ++it;
        if(it==ch.end())
        {
            it=ch.begin();
        }
        cout<<*it<<" ";
        it=ch.erase(it);
        if(it==ch.end())
        {
            it=ch.begin();
        }
    }
}
