#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,3,1};
    vector<int>res;
    vector<int>del;
    unordered_set<int>mp;
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i])==mp.end()){
            res.push_back(v[i]) ;
            mp.insert(v[i]);
        }
        else{
            del.push_back(v[i]);
        }
    }
    cout<<"deleted array is :";
    for(auto i:del){
        cout<<i<<" ";

    }
    cout<<endl;
    cout<<"new array is :";
    for(auto i:res){
        cout<<i<<" ";

    }
}