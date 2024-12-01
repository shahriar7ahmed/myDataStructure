//6.	Write a program to implement the following string operation without using any built in functions related to string.
//a)	Find the length of a string S
//b)	Copy string S2 to S1.
//c)	Concatenate string S2 to S1.
//d)	Compare two strings S1 and S2
//e)	 Reverse a string S

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S1, S2;
    cout << "Enter the string S1: ";
    getline(cin, S1);
    cout << "Enter the string S2: ";
    getline(cin, S2);
    int choice;
    cout << "Enter your choice: ";
    cout << "1. Find the length of a string S" << endl;
    cout << "2. Copy string S2 to S1" << endl;
    cout << "3. Concatenate string S2 to S1" << endl;
    cout << "4. Compare two strings S1 and S2" << endl;
    cout << "5. Reverse a string S" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int length = 0;
        for (int i = 0; S1[i] != '\0'; i++)
        {
            length++;
        }
        cout << "Length of the string S1: " << length << endl;
        break;
    }
    case 2:
    {
        int i;
        for (i = 0; S2[i] != '\0'; i++)
        {
            S1[i] = S2[i];
        }
        S1[i] = '\0';
        cout << "String S1 after copying S2: " << S1 << endl;
        break;
    }
    case 3:
    {
        int i, j;
        for (i = 0; S1[i] != '\0'; i++)
            ;
        for (j = 0; S2[j] != '\0'; j++)
        {
            S1[i + j] = S2[j];
        }
        S1[i + j] = '\0';
        cout << "String S1 after concatenating S2: " << S1 << endl;
        break;
    }
    case 4:
    {
        int i;
        for (i = 0; S1[i] != '\0' && S2[i] != '\0'; i++)
        {
            if (S1[i] != S2[i])
            {
                break;
            }
        }
        if (S1[i] == '\0' && S2[i] == '\0')
        {
            cout << "Strings are equal." << endl;
        }
        else
        {
            cout << "Strings are not equal." << endl;
        }
        break;
    }
    case 5:
    {
        int i, j;
        for (i = 0; S1[i] != '\0'; i++)
            ;
        i--;
        for (j = 0; j < i; j++, i--)
        {
            swap(S1[i], S1[j]);
        }
        cout << "String S1 after reversing: " << S1 << endl;
        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }
    return 0;
}
