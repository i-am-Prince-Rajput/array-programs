#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> v = {2,3,10,6,4,8,1};

    int minSoFar = v[0];
    int maxDiff = INT_MIN;

    for(int i = 1; i < v.size(); i++){
        maxDiff = max(maxDiff, v[i] - minSoFar);
        minSoFar = min(minSoFar, v[i]);
    }

    cout<<"Maximum Difference: "<<maxDiff;
}

