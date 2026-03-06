#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
int main(){
    vector<int>v={2,3,4,2,6,7,4};
    unordered_map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    cout<<"duplicates are:";
    for(auto i:mpp){
        if(i.second>1){
            cout<<i.first<<" ";
        }
    }

}