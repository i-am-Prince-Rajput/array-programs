#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>
int main(){
    vector<int>a={1,2,3,4,5,6};
    vector<int>b={9,2,4,6,7,8,};
    unordered_set<int>s;
    for(auto x:a ){
        s.insert(x);
    }
    cout<<"dublicate values are:";
    for(auto x:b){
        if(s.count(x)){
            cout<<x<<" ";
        }
    }
}