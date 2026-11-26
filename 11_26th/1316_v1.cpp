#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int cnt=0, n_str;
    

    cin>>n_str;

    while(n_str--){
        bool valid=true;
        string str;
        map<char, vector<size_t>> table;

        cin>>str;

        for(size_t i=0; i<str.size(); ++i)
            table[str[i]].push_back(i);

        for(const auto &[_, value_table]:table)
            if(adjacent_find(value_table.begin(), value_table.end(),[](auto a, auto b){return b-a > 1;}) != value_table.end()) valid=false;

        if(valid) cnt++;
    }
    cout<<cnt;
}