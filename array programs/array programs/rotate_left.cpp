#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& a,int start,int end){
    while(start < end){
        swap(a[start++], a[end--]);
    }
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    int start = 0;
    int end = v.size();
    int k = 2;

    k = k % end;

    // LEFT ROTATION STEPS (correct)
    reverse(v, start, k-1);
    reverse(v, k, end-1);
    reverse(v, start, end-1);

    cout<<"elements after left rotation: ";
    for(auto i : v){
        cout<<i<<" ";
    }
} 