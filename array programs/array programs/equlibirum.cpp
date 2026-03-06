#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {-7,1,5,2,-4,3,0};
    int n = v.size();

    int total = 0;
    for(int x : v)
        total += x;

    int leftSum = 0;

    for(int i=0;i<n;i++){
        int rightSum = total - leftSum - v[i];

        if(leftSum == rightSum){
            cout<<"Equilibrium Index: "<<i;
            return 0;
        }

        leftSum += v[i];
    }

    cout<<"No Equilibrium Index";
}
