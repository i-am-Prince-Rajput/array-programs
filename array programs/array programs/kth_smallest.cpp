#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={7,10,4,3,20,15};
    int k = 3;
    int n = v.size();

    for(int i=0;i<n-1;i++){
        int minIndex = i;

        for(int j=i+1;j<n;j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }

        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }

    cout<<"Sorted array: ";
    for(int x:v)
        cout<<x<<" ";

    cout<<"\nKth smallest element = "<< v[k-1];
}
