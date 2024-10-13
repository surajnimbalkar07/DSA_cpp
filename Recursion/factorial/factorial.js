function factorialNumbers(n) {
    let result = [];
    let fact = 1;
    let i = 1;

    // Calculate factorial numbers smaller than or equal to n
    while (fact < n) {
        result.push(fact);
        i++;
        fact *= i;  // Update the factorial for the next number
    }

    return result;
}

// Example usage:
let n = 6;
let result = factorialNumbers(n);

console.log(`Factorial numbers smaller than or equal to ${n} are:`, result);
