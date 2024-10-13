#include <iostream>
#include <vector>

using namespace std;

vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    long long fact = 1;
    long long i = 1;
    
    // Calculate factorial numbers smaller than or equal to n
    while (fact < n) {
        result.push_back(fact);
        i++;
        fact *= i;  // Update the factorial for the next number
    }
    
    return result; 
}

int main() {
    long long n ;
    cout<<"enter no:";
    cin>>n;
    vector<long long> result = factorialNumbers(n);

    cout << "Factorial numbers smaller than or equal to " << n << " are: ";
    for (auto num : result) {
        cout << num << " ";
    }

    return 0;
}
