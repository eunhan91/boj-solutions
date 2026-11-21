#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n_integer;
    vector<int> integers;
    

    cin>>n_integer;

    while(n_integer--){
        int integer;
        
        cin>>integer;
        integers.push_back(integer);
    }

    int find_one;

    cin>>find_one;

    cout<<count(integers.begin(),integers.end(), find_one);
}