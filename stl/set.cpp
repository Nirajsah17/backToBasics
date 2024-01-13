#include<bits/stdc++.h>
using namespace std;
void setExmp();
void _multiSet();
void unOrderSet();

int main(){
    setExmp();
    return 0;
}

void setExmp(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    for(auto it: st){
        cout<<it<<endl;
    }
    st.insert(2);

    for(auto it: st){
        cout<<it<<endl;
    }

    st.find(2);
    st.count(1);
}

void _multiSet(){
    //  same as et but contain duplicate values;
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.erase(1);
}

void unOrderSet(){
    unordered_set<int> unSet;
    // lower and upper bound function doesnot work , rest all function same as set 
    //  has better complexity except some collision happen
    // 
}