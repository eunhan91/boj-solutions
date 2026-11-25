#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M;

    cin>>N>>M;

    vector<vector<int>> a_matrix(N, vector<int>(M));
    vector<vector<int>> b_matrix(N, vector<int>(M));

    for(auto & vec:a_matrix)
        for(auto & elem: vec)
            cin>>elem;
    
    for(auto & vec:b_matrix)
        for(auto & elem: vec)
            cin>>elem;

    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j)
            cout<<a_matrix[i][j]+b_matrix[i][j]<<" ";
        cout<<'\n';
    }
}