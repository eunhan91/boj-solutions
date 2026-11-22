#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n_basket, n_operation;

    cin>>n_basket>>n_operation;

    vector<int> basket(n_basket+1);

    while(n_operation--){
        int begin, end, value;

        cin>>begin>>end>>value;

        transform(basket.begin()+begin, basket.begin()+end+1,basket.begin()+begin ,[&](int){return value;});
    }

    for(const auto & w: vector<int>(basket.begin()+1, basket.end()))
        cout<<w<<" ";
}