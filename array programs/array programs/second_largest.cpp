#include <iostream>
#include <vector>
#include <climits>                          //USE n=sizeof(arr)/sizeof(arr[0]) to find size of array in interger
using namespace std;
int main(){
    vector<int>v={124,23};
    int max=INT_MIN;
    int smax=INT_MIN;
    for( int i=0;i<v.size();i++){
        if(v[i]>max){
            smax=max;
            max=v[i];
        }
        else if(v[i]<max&&v[i]>smax){
            smax=v[i];
        }
    }
    cout<<smax;
}