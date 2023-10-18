vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    std::vector<int> fibNumbers;
        if (n >= 1) {
        fibNumbers.push_back(0);
    }
    if (n >= 2) {
        fibNumbers.push_back(1);
    }

    for (int i = 2; i < n; i++) {
        int nextFib = fibNumbers[i - 1] + fibNumbers[i - 2];
        fibNumbers.push_back(nextFib);
    }

    return fibNumbers;
}

