#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n_seq;

    cin>>n_seq;
    vector<int> seq(n_seq);

    for(auto & number:seq)
        cin>>number;

    const auto & [min_it, max_it]=minmax_element(seq.begin(), seq.end());
    
    cout<<*min_it<<" "<<*max_it;
}