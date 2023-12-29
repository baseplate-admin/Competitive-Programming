#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string _st;
    int participants = 0;
    int bytes_send = 0;

    char string;
    while (scanf("%c", &string) != EOF)
    {
        getline(cin, _st);
        cout << _st;
    }
}