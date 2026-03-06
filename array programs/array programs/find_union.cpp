#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>
int main(){
    vector<int>a={2,3,4,56,2,3};
    vector<int>b={3,5,2,34,2,6};
    unordered_set<int>s;
    for(auto x:a){
        s.insert(x);
    }
    for(auto x:b){
        s.insert(x);
    }
    cout<<"union is :";
    for(auto x:s){
        cout<<x<<" ";
    }

}