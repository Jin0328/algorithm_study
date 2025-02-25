#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    string input, state;
    set<string> log;

    cin >> n;
    while(n--){
        cin >> input >> state;
        if(state == "enter"){
            log.insert(input);
        }
        if(state == "leave"){
            log.erase(input);
        }
    }

    for(auto iter = log.rbegin(); iter != log.rend(); iter++){
        cout << *iter << '\n';
    }
    return 0;
}