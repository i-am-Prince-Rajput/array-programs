#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={12,23,3423,35,36,47};
    bool s=true;
    for(int i=0;i<v.size();i++){
        if(v[i]>v[i+1]){
            s=false;
            break;
        }
    }
    if(s){
        cout<<"yes array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}