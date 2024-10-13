function isPalindrome(s) {
    let left = 0;
    let right = s.length - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isAlphanumeric(s[left])) {
            left++;
        }
        while (left < right && !isAlphanumeric(s[right])) {
            right--;
        }

        // Compare characters in a case-insensitive manner
        if (s[left].toLowerCase() !== s[right].toLowerCase()) {
            return false; // Return false if characters do not match
        }
        left++;
        right--;
    }
    return true; // Return true if all characters matched
}

// Helper function to check if a character is alphanumeric
function isAlphanumeric(char) {
    return /^[a-zA-Z0-9]$/.test(char);
}

// Example usage
const s = "Hello";
console.log(isPalindrome(s)); // Output: false

const s2 = "A man, a plan, a canal: Panama";
console.log(isPalindrome(s2)); // Output: true
