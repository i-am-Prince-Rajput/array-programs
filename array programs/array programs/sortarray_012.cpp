#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2,0,2,1,1,0};

    int low = 0, mid = 0;
    int high = v.size() - 1;

    while(mid <= high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{ // v[mid] == 2
            swap(v[mid], v[high]);
            high--;
        }
    }

    cout<<"Sorted array: ";
    for(int x : v) cout<<x<<" ";
}
