#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string X, Y;
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    int m = X.size();
    int n = Y.size();

    // Create DP table
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    int maxLen = 0; 
    int endIndex = 0; // To track end index of longest substring in X

    // Fill DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    endIndex = i - 1;
                }
            } else {
                dp[i][j] = 0; // reset if characters don’t match
            }
        }
    }

    // Print DP table
    cout << "\nDP Lookup Table:\n";
    cout << setw(5) << " ";
    for (char c : Y) cout << setw(5) << c;
    cout << endl;
    for (int i = 0; i <= m; i++) {
        if (i == 0) cout << setw(5) << " ";
        else cout << setw(5) << X[i - 1];
        for (int j = 0; j <= n; j++) {
            cout << setw(5) << dp[i][j];
        }
        cout << endl;
    }

    // Extract substring
    string longest = X.substr(endIndex - maxLen + 1, maxLen);
    cout << "\nLongest Common Substring: " << longest << endl;
    cout << "Length: " << maxLen << endl;

    return 0;
}
