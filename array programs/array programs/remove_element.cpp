#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={2,34,3,4,3};
    int x=34;
    int k=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=x){
            v[k]=v[i];
            k++;
        }
    }
    v.resize(k);
    for(auto i:v){
        cout<<i<<" ";
    }
}