#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        list<string>history;
        history.push_back("http://www.lightoj.com/");
        auto current=history.begin();
        string command;
        while (cin>>command)
        {
            if(command=="QUIT") break;
            if(command=="VISIT")
            {
                string url;
                cin>>url;
                auto temp=current;
                ++temp;
                history.erase(temp,history.end());
                current=history.insert(history.end(),url);
                cout<<*current<<endl;

            }
            else if(command=="BACK")
            {
                if(current==history.begin()) cout<<"Ignored"<<endl;
                else
                {
                    --current;
                    cout<<*current<<endl;
                }
            }
           else if(command=="FORWARD")
           {
               auto temp=current;
               ++temp;
               if(temp==history.end()) cout<<"Ignored"<<endl;
               else
               {
                   current=temp;
                   cout<<*current<<endl;
               }
           }
        }
    }
}
