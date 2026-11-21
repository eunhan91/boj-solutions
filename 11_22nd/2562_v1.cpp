#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    array<int, 9> seq;
    
    for(auto & number:seq)
        cin>>number;

    auto max_it=max_element(seq.begin(), seq.end());

    cout<<*max_it<<endl<<max_it-seq.begin()+1;
}   