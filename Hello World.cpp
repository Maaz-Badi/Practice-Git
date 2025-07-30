#include <iostream>
#include <chrono>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto start = chrono::high_resolution_clock::now();

    for (int i = 1; i <= 100000; ++i) {
        cout << i << '\n';  // Fast: no flush
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> exec_time = end - start;

    cout << "Execution time: " << exec_time.count() << " ms\n";

    return 0;
}
