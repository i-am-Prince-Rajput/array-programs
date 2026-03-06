#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={23,0,25,6,0,6,0,1,2};
    int sum=0;
    vector<int>New;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            New.push_back(v[i]);
        }
        else{
            sum+=1;
        }
    }
    for(int i=0;i<sum;i++){
        New.push_back(0);
    }
    cout<<"new array is :";
    for(auto i:New){
        cout<<i<<" ";
    }

}