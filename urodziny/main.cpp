#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
int urodziny;
int main()
{
    cout << "Kiedy masz urodziny?" << endl;
    cin >> urodziny;

{

    for (int i=10; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i;
    }
    if (urodziny ==1608)
    cout << "   Wszystkiego najlepszego!";
    else cout << "  Niestety to nie jest twoj dzien...";
}

    return 0;
}
