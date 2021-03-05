#include <iostream>
using namespace std;

int main()
{
    string str, subStr;
    cout << "\nEnter a String: ";
    cin >> str;
    cout << "\nEnter a string to check: ";
    cin >> subStr;

    bool flag = false;
    int i = 0, j = 0;

    while (i < str.length())
    {
        if (str[i] == subStr[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j >= 0)
            {
                j = 0;
            }
            i++;
        }

        if (j == subStr.length())
        {
            flag = true;
            break;
        }
    }
    string isSubString = (flag) ? "Substring present!" : "Substring absent!";
    cout << "\n"
         << isSubString << endl;
    return 0;
}