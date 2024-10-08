#include <iostream>
using namespace std;


int b(int n, int k, int& depth)
{
    depth++;  
    if (k == 0 || k == n)
        return 1;
    return b(n - 1, k - 1, depth) + b(n - 1, k, depth);
}

int main()
{
    int n, k;
    cout << " n: "; cin >> n;
    cout << " k: "; cin >> k;

    int depth = 0;  
    int result = b(n, k, depth);  

    cout << " C(" << n << ", " << k << ") = " << result << endl;
    cout << "REKURSIY: " << depth << endl;

    return 0;
}