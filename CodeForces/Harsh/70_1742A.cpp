#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int a,b,c;
        cin >> a >> b >> c;
        if ( (a+b == c) || (a+c == b) || (b+c == a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}