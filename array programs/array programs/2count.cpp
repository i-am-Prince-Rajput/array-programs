#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
int main(){
    vector<int>v={2,3,2,2,4,5,2};
    int n=v.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            cout<<"majority elements is :"<<it.first;
        }
    }
}