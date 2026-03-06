#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6};
    int n=v.size();

    for(int s=0; s<n; s++){
        for(int e=s; e<n; e++){
            
            for(int j=s; j<=e; j++){
                cout<<v[j]<<" ";
            }
            
            cout<<endl;
        }
        cout<<endl;
    }
}
