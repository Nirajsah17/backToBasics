#include<bits/stdc++.h>
using namespace std;
void paiExmp();

int main(){
    pair <int ,int> p= {10,20};
    cout<<"first ::" << p.first << "\n second :: " <<p.second << endl;
    paiExmp();
    return 0;
}


void paiExmp(){
    pair<int ,double> newPair = {10,2.3};
    cout<<newPair.first<<endl;
    cout<<newPair.second;
    pair<int,int> arr[] = {{1,2}, {3,4} , {5,6}};
    cout<< "\n" << arr[2].first;
    // Iterate over pair array; 
    for(const auto& p : arr){
        cout<<"first " <<p.first << "and " << p.second << endl;
    }
}