#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

    //   auto iterator = itr;
int main(){
    vector<int>v;
      for(int i=0;i<5;i++)
       {
        v.push_back(i);
       }
     
      // to represent element in the vecotr 
      cout<<"elements in the vecotr are \n";
      for(auto it=v.begin();it!=v.end();it++)
       {
        cout<<*it<<endl;
       }

       cout<<"inserting an element in the array \n"; 
       v.insert(v.begin(),6);

       cout<<"after inserting the at begning element "<<endl;

       for(auto it=v.begin();it!=v.end();it++)
       {
        cout<<*it<<endl;
       }

       cout<<"last element in the vector is \n"<<v.back()<<endl;
      
      cout<<"checking emptyness of vector "<<v.empty()<<endl;

        return 0 ;
}