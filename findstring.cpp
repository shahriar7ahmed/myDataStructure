//2.	A text T and a pattern P are in memory. Write a program to delete first occurrence of P in T.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string T, P;
    cout << "Enter the text T: ";
    getline(cin, T);
    cout << "Enter the pattern P: ";
    getline(cin, P);
    size_t found = T.find(P);
    if (found != string::npos)
    {
        T.erase(found, P.length());
        cout << "Text after deleting the pattern: " << T << endl;
    }
    else
    {
        cout << "Pattern not found." << endl;
    }
    return 0;
}