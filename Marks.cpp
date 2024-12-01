//1.	Write a program to create an array of n elements to read the marks of n students and then count how many students passed [pass marks ≥ 40] in the examination. 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the number of students: ";
    cin >> n;
    int marks[n];
    cout << "Enter the marks of " << n << " students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        if (marks[i] >= 40)
        {
            count++;
        }
    }
    cout << "Number of students passed in the examination: " << count << endl;
    return 0;
}