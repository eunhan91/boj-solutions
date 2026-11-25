#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    array<int, 81> lattice;

    for(auto & elem:lattice)
        cin>>elem;

    auto it=max_element(lattice.begin(), lattice.end());

    int idx=it-lattice.begin();

    cout<<*it<<'\n'<<idx/9+1<<" "<<idx%9+1;
}