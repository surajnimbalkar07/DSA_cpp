function reverseArray(arr, i) {
    let n = arr.length;
    
    // Base case: if we've reached the middle of the array
    if (i >= n / 2) return;

    // Swap elements at positions i and n-i-1
    [arr[i], arr[n - i - 1]] = [arr[n - i - 1], arr[i]];

    // Recursive call to reverse the next elements
    reverseArray(arr, i + 1);
}

const arr = [1, 2, 3, 4, 5];
reverseArray(arr, 0);

console.log("Reversed array:", arr);
