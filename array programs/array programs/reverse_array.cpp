#include<iostream>
#include<vector>
using namespace std;
vector<int>v={10,20,30,40,50};
int main(){
    for( int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}