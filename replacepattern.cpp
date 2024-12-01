//5.	A text T and patterns P and Q are given. Write a program to replace the first occurrence of a pattern (P) in T by Q.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string T, P, Q;
    cout << "Enter the text T: ";
    getline(cin, T);
    cout << "Enter the pattern P: ";
    getline(cin, P);
    cout << "Enter the pattern Q: ";
    getline(cin, Q);
    size_t found = T.find(P);
    if (found != string::npos)
    {
        T.replace(found, P.length(), Q);
        cout << "Text after replacing the pattern: " << T << endl;
    }
    else
    {
        cout << "Pattern not found." << endl;
    }
    return 0;
}
//5.	A text T and patterns P and Q are given. Write a program to replace the first occurrence of a pattern (P) in T by Q.wihtout using any library function.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string T, P, Q;
    cout << "Enter the text T: ";
    getline(cin, T);
    cout << "Enter the pattern P: ";
    getline(cin, P);
    cout << "Enter the pattern Q: ";
    getline(cin, Q);
    int i, j;
    for (i = 0; i < T.length(); i++)
    {
        for (j = 0; j < P.length(); j++)
        {
            if (T[i + j] != P[j])
            {
                break;
            }
        }
        if (j == P.length())
        {
            break;
        }
    }
    if (j == P.length())
    {
        T.replace(i, P.length(), Q);
        cout << "Text after replacing the pattern: " << T << endl;
    }
    else
    {
        cout << "Pattern not found." << endl;
    }
    return 0;
}