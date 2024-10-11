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
