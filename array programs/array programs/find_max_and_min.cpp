#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=v[0];int min=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]<=min){
            min=v[i];
        }
        if(v[i]>=max){
            max=v[i];
        }
    }
    cout<<"max:"<<max<<" min:"<<min;
}