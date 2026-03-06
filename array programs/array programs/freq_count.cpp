#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
int main(){
    vector<int>v={12,42,252,22,63,12,63};
    unordered_map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]+=1;
    }
    for(auto i:mpp){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
}