//1.	Write a program to insert a string S into a text T so that S begins in position K of T. without using any library function.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string T, S;
    int K;
    cout << "Enter the text T: ";
    getline(cin, T);
    cout << "Enter the string S: ";
    getline(cin, S);
    cout << "Enter the position K: ";
    cin >> K;
    string result = T.substr(0, K - 1) + S + T.substr(K - 1);
    cout << "Text after inserting the string: " << result << endl;
    return 0;
}
