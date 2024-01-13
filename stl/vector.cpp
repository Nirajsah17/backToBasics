#include <bits/stdc++.h>
using namespace std;

void vectorEmp();

int main()
{
    vectorEmp();
    return 0;
}

void vectorEmp()
{
    vector<int> v;
    v.push_back(0);
    v.emplace_back(1);
    // pair vector emplace back will need not use {} to add el in the vector paire.
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(9, 5);
    //  containing five 100
    vector<int> vect(5, 100);

    // Iterate over vector

    vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend()
    // vector<int>::iterator it = v.rbegin()

    it++;
    cout << *(it) << "" << endl;

    // iterator
    cout<<"loop"<<endl;
    for(vector<int>::iterator _it  = v.begin(); _it != v.end(); _it++){
        cout<<*(_it)<<endl;
    }
    // second ways

    for(auto it : v){
        cout<< it <<endl;
    } 

    // erase
    v.erase(v.begin()+1);
    // length
    v.size();
    v.pop_back();
    v.clear();

}