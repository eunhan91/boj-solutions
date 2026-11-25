#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
    array<string, 5> board;

    for(auto & str:board)
        getline(cin, str);

    for(int i=0; i<15; ++i)
        for(int j=0; j<5; ++j)
            if(board[j].size()>i) cout<<board[j][i];
}