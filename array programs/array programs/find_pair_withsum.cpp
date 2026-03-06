#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>v={8,23,1,335};
    int target=9;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        int need=target-v[i];
        if(mp.find(need)!=mp.end()){
            cout<<" 1st element :"<<need<<" at index:"<<mp[need]<<endl;
            cout<<" 2st element :"<<v[i]<<" at index:"<<i;
            return 0;
        }
        else{
            mp[v[i]]=i; 
        }
    }
    cout<<"not found ";
    return 0;
}