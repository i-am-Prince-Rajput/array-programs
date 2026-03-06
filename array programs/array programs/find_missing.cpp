#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={1,2,3,5,6};
    int n=6;
    int act=(n*(n+1))/2;
    int sum=0;
    for (int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<"the missing element is :"<<act-sum;
}