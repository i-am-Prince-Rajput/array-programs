#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6};
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(v[j] < v[min])
                min=j;
        }
        int temp=v[i];
        v[i]=v[min];
        v[min]=temp;
    }

    vector<int> ans;
    int left=0, right=n-1;

    while(left<=right){
        if(left!=right)
            ans.push_back(v[right--]);
        ans.push_back(v[left++]);      
    }

    cout<<"Rearranged array: ";
    for(int x:ans)
        cout<<x<<" ";
}
