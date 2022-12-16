#include<bits/stdc++.h>
#include<thread>

#include<iostream>
using namespace std;
void taskA()
 {
    for(int i=0;i<10;i++)
     {
        _sleep(1);
         cout<<"taskA:"<<i;
         fflush(stdout);
     }
 }
 void taskB()
 {
    for(int i=0;i<10;i++)
     {
        _sleep(1);
         cout<<"taskB:"<<i;
         fflush(stdout);
     }
 }

int main(){
    
    thread_local t(taskA);
    thread_local t1(taskB);

    t.join();
    t1.join();

     return 0 ;
}