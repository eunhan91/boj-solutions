#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string str;
    vector<int> table(26);

    cin>>str;

    for(size_t i=0; i<str.size(); ++i)
        isupper(str[i])? table[str[i]-65]+=1 : table[str[i]-97]+=1;

    auto max_alpha=max_element(table.begin(), table.end());

    if(count(table.begin(), table.end(), *max_alpha) !=1) cout<<"?";
    else                                                 cout<<char(max_alpha-table.begin()+65);
}