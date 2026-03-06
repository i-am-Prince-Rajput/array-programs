#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,43,3,2,1};
    vector<int>leaders;
    int n=v.size();
    int rmax=v[n-1];
    leaders.push_back(rmax);
    for(int i=n-2;i>=0;i--){
        if(v[i]>rmax){
            leaders.push_back(v[i]);
            rmax=v[i];
        }
    }
    cout<<"complete vector is:";
    for(auto i:leaders){
        cout<<i<<" ";
    }
}