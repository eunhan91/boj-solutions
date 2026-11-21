#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--){
        string str;
        cin >> str;

        int open = 0, close = 0;
        stack<char> parent;

        for(char val : str){
            if(val == '(') open++;
            else close++;

            parent.push(val);
        }

        int diff = close - open;
        int max = diff;

        while(!parent.empty()){
            if(parent.top() == '(') diff++;
            else diff--;

            if(max < diff) max = diff;

            parent.pop();
        }

        cout << (open == close && max == 0 ? "YES" : "NO") << '\n';
    }
}