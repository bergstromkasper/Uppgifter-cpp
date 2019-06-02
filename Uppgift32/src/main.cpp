#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mening;
    int length;
    bool m = false, a = false, t = false;

    cout << "Skriv en mening: ";
    getline(cin, mening);
    length = mening.length();
    for (int i = 0; i < length; i++)
    {
        // 77 = M  109 = m
        if (mening[i] == 77 or mening[i] == 109)
        {
            m = true;
        }
        // 65 = A    97 = a
        else if (mening[i] == 65 or mening[i] == 97)
        {
            a = true;
        }
        // 84 = T   116 = t
        else if (mening[i] == 84 or mening[i] == 116)
        {
            t = true;
        }
    }
    if (m == true && a == true && t == true)
    {
        cout << "MAT!";
    }
}