#include<iostream>
using namespace std;
#include<vector>
void reverse(vector<int>&v,int start,int end){
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int>v={1,2,34,4,64,34};
    int k=3;
    int n=v.size();
    k=k%n;
    reverse(v,0,n-1);
    reverse(v,0,k-1);
    reverse(v,k,n-1);
    for(auto i:v){
        cout<<i<<" ";
    }
}
