#include <iostream>
#include <vector>

using namespace std;

int how_many_currency(int & change, double price_of_currency){
    int number_of_currency=0;

    while(change >= price_of_currency){
            change-=price_of_currency;
            number_of_currency++;
    }

    return number_of_currency;
}

int main(){
    int n_case;
    vector<int> table{25, 10, 5, 1};

    cin>>n_case;

    while(n_case--){
        int change;

        cin>>change;

        for(const auto & price_of_currency:table)
            cout<<how_many_currency(change, price_of_currency)<<" ";

        cout<<'\n';
    }
}