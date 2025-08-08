#include <iostream>
#include <chrono>

long long sum_of_squares(int n) {
    long long total = 0;
    for (int i = 1; i <= n; ++i) {
        total += static_cast<long long>(i) * i;
    }
    return total;
}

int main() {
    int N = 10000000;

    auto start = std::chrono::high_resolution_clock::now();
    long long result = sum_of_squares(N);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;

    std::cout << "Result: " << result << "\n";
    std::cout << "C++ Time: " << duration.count() << " seconds\n";

    return 0;
}
