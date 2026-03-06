#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> A = {1,2,3,4};
    vector<int> B = {4,3,2,1};
    unordered_map<int,int> freq;

    if(A.size() != B.size()){
        cout << "Not Equal";
        return 0;
    }

    

    for(int x : A)
        freq[x]++;

    for(int x : B)
    {
        if(freq[x] == 0){
            cout << "Not Equal";
            return 0;
        }
        freq[x]--;
    }

    cout << "Arrays are Equal";
}
