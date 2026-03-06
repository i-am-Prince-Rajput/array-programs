#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> v = {-10,-3,5,6};

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int x : v){
        // find two largest
        if(x > max1){
            max2 = max1;
            max1 = x;
        }
        else if(x > max2){
            max2 = x;
        }

        // find two smallest
        if(x < min1){
            min2 = min1;
            min1 = x;
        }
        else if(x < min2){
            min2 = x;
        }
    }

    int ans = max(max1 * max2, min1 * min2);
    cout<<"Maximum product: "<<ans;
}
