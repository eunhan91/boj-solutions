#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> pieces{1,1,2,2,2,8};

    for(const auto & elem:pieces){
        int n_piece;

        cin>>n_piece;

        cout<<elem-n_piece<<" ";
    }
}