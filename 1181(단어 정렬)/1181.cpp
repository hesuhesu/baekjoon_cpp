#include <iostream>
#include <algorithm>

using namespace std;

string arr[20000];

int compare(string a, string b) {

    if (a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N, compare);

    for (int i = 0; i < N; i++) {
        if (i > 0 && (arr[i] == arr[i - 1])) {
            continue;
        }
        cout << arr[i] << '\n';
    }

    return 0;
}