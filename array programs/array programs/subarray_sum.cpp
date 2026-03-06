#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,1,6};
    int target = 7; 

    int start = 0;
    int sum = 0;

    for(int end = 0; end < v.size(); end++)
    {
        sum += v[end];

        while(sum > target)
        {
            sum -= v[start];
            start++;
        }

        if(sum == target)
        {
            cout << "Subarray found from index "
                 << start << " to " << end << endl;
        }
    }
}
