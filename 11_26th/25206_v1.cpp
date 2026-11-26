#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define FOR_EACH_ELEM(X) \
    X("A+", 4.5)\
    X("A0", 4.0)\
    X("B+", 3.5)\
    X("B0", 3.0)\
    X("C+", 2.5)\
    X("C0", 2.0)\
    X("D+", 1.5)\
    X("D0", 1.0)\
    X("F", 0.0)\

#define MAKE_VECTOR(name, grade) {name, grade},

vector<pair<string, double>> TABLE{FOR_EACH_ELEM(MAKE_VECTOR)};

#undef MAKE_VECTOR

double to_grade_point(string my_grade){
    for(const auto &[name, grade]: TABLE)
        if(my_grade==name) return grade;

    return -1;
}

int main(){
    int total_credits=0;
    string subj_name, grade;
    double credits, weights=0;

    

    while(cin>>subj_name>>credits>>grade){
        if(grade == "P") continue;

        else{
            total_credits+=credits;

            if(to_grade_point(grade) != -1)
                weights+=to_grade_point(grade)*credits;
        }
    }

    cout<<weights/total_credits;
}