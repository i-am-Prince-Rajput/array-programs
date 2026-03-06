#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={2,3,4,5,3,2,1};
    int left=0;
    int right=v.size()-1;
    while(left<right){
        int mid=(left+right)/2;
        if(v[mid]<v[mid+1]){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    cout<<"peak elemt is :"<<v[left];
}