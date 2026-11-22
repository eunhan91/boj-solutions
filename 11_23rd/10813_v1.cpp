#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n_basket, n_operation;
    vector<int> baskets;

    cin>>n_basket>>n_operation;

    for(int i=0; i<=n_basket; ++i)
        baskets.push_back(i);

    while(n_operation--){
        int target1, target2;

        cin>>target1>>target2;

        swap(baskets[target1], baskets[target2]);
    }

    for(int i=1; i<=n_basket; ++i)
        cout<<baskets[i]<<" ";
}