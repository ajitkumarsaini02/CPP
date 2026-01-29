#include <iostream>
#include <vector>
#include <string>
using namespace std;

int removeOnes2(int ans[], int original[], int m, int idx) {
    if (idx == m) return 0;
    int written = removeOnes2(ans, original, m, idx + 1);
    if (original[idx] != 1) {
        ans[written] = original[idx];
        return written + 1;
    }
    return written;
}

int main() {
    int arr[] = {1, 2, 4, 1, 5, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    int k = removeOnes2(ans, arr, n, 0);
    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
