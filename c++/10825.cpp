#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
    string name;
    int korean, english, math;
};

bool cmp(const student &s1, const student &s2){
    if(s1.korean != s2.korean){
        return s1.korean > s2.korean;
    }
    if(s1.english != s2.english){
        return s1.english < s2.english;
    }
    if(s1.math != s2.math){
        return s1.math > s2.math;
    }
    return s1.name < s2.name;
}

int main(){
    int n;
    cin >> n;

    vector<student> my_class(n);

    for(int i = 0; i < n; i++){
        cin >> my_class[i].name >> my_class[i].korean >> my_class[i].english >> my_class[i].math;
    }

    sort(my_class.begin(), my_class.end(), cmp);

    for(auto iter : my_class){
        cout << iter.name << '\n';
    }

    return 0;
}