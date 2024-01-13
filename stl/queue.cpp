#include<bits/stdc++.h>
using namespace std;

void queueExample();

int main(){
    queueExample();
    return 0;
}


void queueExample(){
    queue <int> q ;
    q.push(1); // {1}
    q.push(2);  // {1,2}
    q.emplace(3); // {1,2,3}
    q.back()+= 5; // {1,2,8}
    q.front(); // print 1
    q.pop(); // print 8
    cout<<q.front();
    cout<<q.back();

}