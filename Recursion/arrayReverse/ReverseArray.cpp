#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr) {
        
        int n=arr.size()-1;
        if (arr.size() <= 1) return; 
        
        swap(arr[0],arr[n]);
        
        vector<int> subArray(arr.begin() + 1, arr.end() - 1);
        
        reverseArray(subArray);
        
        for(int i=1;i<arr.size()-1;++i){
            arr[i]=subArray[i-1];
        }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    cout << "Reversed array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
