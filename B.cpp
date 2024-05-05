#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (k % 2 == 0) {
        sort(s.begin(), s.end());
        cout << s << '\n';
        return;
    }

    vector<vector<int>> cnt(26, vector<int>(2, 0));

    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'a'][i % 2]++;
    }

    string ans = "";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            if (cnt[j][i % 2] > 0) {
                cnt[j][i % 2]--;
                ans += (j + 'a');
                break;
            }
        }
    }

    cout << ans << '\n';
}