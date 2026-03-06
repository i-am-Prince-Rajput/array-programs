#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> v = {100,4,200,1,3,2};
    unordered_set<int> st(v.begin(), v.end());

    int longest = 0;

    for(int num : st){
        if(st.find(num - 1) == st.end()){
            int curr = num;
            int count = 1;

            while(st.find(curr + 1) != st.end()){
                curr++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    cout<<"Longest consecutive length: "<<longest;
}
