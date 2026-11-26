#include <iostream>
#include <set>

using namespace std;

int main(){
    set<pair<int,int>> lattice;
    int n_paper;

    cin>>n_paper;

    while(n_paper--){
        int x_coord, y_coord;

        cin>>x_coord>>y_coord;

        for(int i=0; i<10; ++i)
            for(int j=0; j<10; ++j)
                lattice.emplace(x_coord+i, y_coord+j);
    }

    cout<<lattice.size();
}