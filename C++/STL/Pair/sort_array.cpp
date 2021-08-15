// Sort an array according to
// other using pair in STL.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pairsort(int a[], char b[], int n)
{
    pair<int, char> pairt[n];

    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

int main()
{
    int a[] = {2, 3, 4, 5, 1};
    char b[] = {'A', 'B', 'C', 'I', 'J'};

    int n = sizeof(a) / sizeof(a[0]);

    pairsort(a, b, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}