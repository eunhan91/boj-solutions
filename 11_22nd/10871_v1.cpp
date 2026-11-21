#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n_seq, standard;
    vector<int> seq;
    cin>>n_seq>>standard;

    seq.resize(n_seq);

    for(auto & word:seq)
        cin>>word;

    for(const auto & number:seq)
        if(number<standard) cout<<number<<" ";
}