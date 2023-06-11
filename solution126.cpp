#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }
    return 0;
}
