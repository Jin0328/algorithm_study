#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a, x;
    stack<int> s;

    cin >> n;

    while(n--){
        cin >> a;

        if(a == 1){
        cin >> x;
        s.push(x);
        }

        else if(a == 2){
            if(!s.empty()){
                cout << s.top() << "\n";
                s.pop();
            }else cout << -1 << "\n";
        }

        else if(a == 3){
            cout << s.size() << "\n";
        }

        else if(a == 4){
            if(!s.empty()){
                cout << 0 << "\n";
            }else cout << 1 << "\n";
        }

        else if(a == 5){
            if(!s.empty()){
                cout << s.top() << "\n";
            }else cout << -1 << "\n";
        }
    }

    return 0;
}