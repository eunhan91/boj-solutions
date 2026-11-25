#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> myvec;
    string str;

    while(cin>>str)
        myvec.push_back(str);

    cout<<myvec.size();
}