#include <iostream>
using namespace std;

int d[8], m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ans[8];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, w = 0;
    cin >> n;
    d[w]++;
    for (int i = 1900; i <= 1900 + n - 1; i++) {
        m[2] = 28;
        if (!(i % 400) || (!(i % 4) && (i % 100)))
            m[2] = 29;
        for (int j = 1; j <= 12; j++)
            for (int k = 1; k <= m[j]; k++) {
                w++;
                if (w > 7)
                    w = 1;
                if (k == 13)
                    ans[w]++;
            }
    }
    cout << ans[6] << " " << ans[7] << " ";
    for (int i = 1; i <= 5; i++)
        cout << ans[i] << " ";
    return 0;
}