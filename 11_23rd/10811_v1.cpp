#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    int n_baskets, n_operation;

    cin>>n_baskets>>n_operation;

    vector<int> baskets(n_baskets);

    iota(baskets.begin(), baskets.end(), 1);

    while(n_operation--){
        int first, last;

        cin>>first>>last;

        reverse(baskets.begin()+first-1, baskets.begin()+last);
    }

    for(const auto & basket:baskets)
        cout<<basket<<" ";
}