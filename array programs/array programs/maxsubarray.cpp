#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    int cs= 0;
    int maxSum = INT_MIN;

    for(int i=0;i<v.size();i++){
        cs += v[i];

        maxSum = max(maxSum, cs);

        if(cs < 0)
            cs= 0;
    }

    cout<<"Maximum Subarray Sum = "<<maxSum;
}
