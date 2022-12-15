#include<bits/stdc++.h>
using namespace std;

int main()
 {
    unordered_multiset<int>s;
     for(int i=1;i<=10;i++)
      {
          s.insert(i);
      }
      cout<<"element present in the multiset are\n";
      for(auto it=s.begin();it!=s.end();it++)
       {
         cout<<*it<<" ";
       }
       cout<<endl;
       int n=2;
       if(s.find(2)!=s.end())
        {
            cout<<"present\n";
        }
        s.erase(s.begin());
        cout<<"element after deleting the first element \n";
        for(auto it=s.begin();it!=s.end();it++)
         {
            cout<<*it<<" ";
         }
         cout<<endl;

         cout<<"The size of the unordered map is "<<s.size();
         cout<<endl;

         s.clear();
         cout<<"cleared all the element and its size is "<<s.size()<<endl;
         
 }