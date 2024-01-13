#include<bits/stdc++.h>
using namespace std;
void dequue();

int main (){
    dequue();
    return 0;
}

void dequue(){
    deque <int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.pop_back();
    dq.pop_front();
    dq.front();
    dq.back();
    cout<<"hello world !";
}