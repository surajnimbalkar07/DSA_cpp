//Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.
#include <iostream>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // Base case
        if (n <= 0) return 0;
        
        // Recursive call and summing the cubes
        return n * n * n + sumOfSeries(n - 1);
    }
};

int main() {
    long long n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Call sumOfSeries using the instance
    cout << "Sum of the series: " << sol.sumOfSeries(n) << endl;
    
    return 0;
}
