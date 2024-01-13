#include<bits/stdc++.h>
using namespace std;

void stackExmp();

int main(){
    stackExmp();
    // cout<<"index";
    return 0;
}

void stackExmp(){
    stack<int> st ;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);
    st.top();
    st.size();
    st.empty();
    cout<< st.top();
}