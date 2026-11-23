#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long f = 1;
    int i = 1;

    while (f < n) {
        i++;
        f = f * i;
    }

    if (f == n) {
        cout << i << endl;
    }

    return 0;
}
