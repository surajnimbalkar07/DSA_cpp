//Print numbers from 1 to n without the help of loops. 
//You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.

#include <iostream>
using namespace std;

void printGfg(int N)
{

    if (N > 0)
    {
        printGfg(N - 1);
        cout << "GFG ";
    }
}

int main()
{

    int N;
    cout<<"no is:";
    cin >> N;
    printGfg(N);
    return 0;
}
