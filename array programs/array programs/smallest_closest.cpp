#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>v={3,4,-1,1};
    unordered_map<int,int>mpp;
    for(auto i:v){
        mpp[i]++;
    }
    int i=1;
    while(true){
        if(mpp.find(i)==mpp.end()){
            cout<<"first missing is :"<<i;
            break;
        }
        i++;
    }

}