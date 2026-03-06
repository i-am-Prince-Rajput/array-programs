#include<iostream>
using namespace std;
#include <vector>
int main(){
    int sum=0;
    vector <int> v={10,230,20,250};
    for ( int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}