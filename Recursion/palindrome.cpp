#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to reverse the vector of strings in place
  bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;

      while(left<right){ 
        if(!isalnum(s[left])) left++;
        else if(!isalnum(s[right])) right--;
        else if(tolower(s[left])!=tolower(s[right])) return 0;
        else left++,right--;
      }
        return 1; 
      
    }
int main() {
    string s = {"Hello"};
   cout<< isPalindrome(s);

    

    
    cout << endl;

    return 0;
}
