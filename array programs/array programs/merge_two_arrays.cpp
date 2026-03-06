#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>a={1,2,3,4,5};
    vector<int>b={6,7,8,9};
    vector<int>res;
    int l=0;
    int k=0;
    while(l<a.size()&&k<b.size()){
        if(a[l]<b[k]){
            res.push_back(a[l]);
            l=l+1;
        }
        else{
            res.push_back(b[k]);
            k+=1;
        }
    }
    
    while(k<b.size()){
        res.push_back(b[k]);
        k=k+1;
    }
    while(l<a.size()){
        res.push_back(a[l]);
        l=l+1;
    }
    cout<<"current array is:"<<endl;
    for(auto i:res){
        cout<<i<<" ";
    }
}