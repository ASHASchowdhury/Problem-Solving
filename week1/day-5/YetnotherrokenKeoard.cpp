#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<int> l, u;
        vector<bool> sh(s.size(), true);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b') {
                sh[i] = false;
                if (!l.empty()) {
                    sh[l.top()] = false;
                    l.pop();
                }
            } else if (s[i] == 'B') {
                sh[i] = false;
                if (!u.empty()) {
                    sh[u.top()] = false;
                    u.pop();
                }
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                l.push(i);
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                u.push(i);
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (sh[i]) {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
