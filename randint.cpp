//4.	Write a program to write 100 randomly generated integer to a file called RAND.DAT. And then read the contents of the file and display them on the screen.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("RAND.DAT");
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        fout << rand() % 100 << " ";
    }
    fout.close();
    ifstream fin;
    fin.open("RAND.DAT");
    int num;
    while (fin >> num)
    {
        cout << num << " ";
    }
    fin.close();
    return 0;
}