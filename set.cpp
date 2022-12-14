#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    int k=0;
     for(int i=0;i<5;i++)
      {
        s.insert(i);
      }
      cout<<"the max element an unordered set can hold "<<s.max_size()<<endl;
      cout<<"the max count of bucket is "<<s.max_bucket_count()<<endl;
      cout<<"bicket size is "<<s.bucket_size(3)<<endl;
      s.clear();
    if(s.find(0)!=s.end())
     {
        cout<<k<<"  is present in the list \n"<<endl;
     }
     else
     cout<<"nahi hai re bava\n";
     cout<<"iski size  hai "<<s.size()<<endl;
     cout<<s.empty();
     return 0 ;
}