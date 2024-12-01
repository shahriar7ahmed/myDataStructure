//3.	Write a program that will read a string (S) and find the index of the first occurrence of a pattern (P) in the string S.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, P;
    cout << "Enter the string S: ";
    getline(cin, S);
    cout << "Enter the pattern P: ";
    getline(cin, P);
    size_t found = S.find(P);
    if (found != string::npos)
    {
        cout << "Pattern found at position " << found + 1 << endl;
    }
    else
    {
        cout << "Pattern not found." << endl;
    }
    return 0;
}
//3.	Write a program that will read a string (S) and find the index of the first occurrence of a pattern (P) in the string S.wihtout using any library function.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, P;
    cout << "Enter the string S: ";
    getline(cin, S);
    cout << "Enter the pattern P: ";
    getline(cin, P);
    int i, j;
    for (i = 0; i < S.length(); i++)
    {
        for (j = 0; j < P.length(); j++)
        {
            if (S[i + j] != P[j])
            {
                break;
            }
        }
        if (j == P.length())
        {
            cout << "Pattern found at position " << i + 1 << endl;
            return 0;
        }
    }
    cout << "Pattern not found." << endl;
    return 0;
}