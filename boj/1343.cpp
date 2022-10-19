// #include <iostream>
// #include <algorithm>
// using namespace std;
// void fast_io(void)
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// }
// string strA = "AAAA", strB = "BB",inputstr;
// int c=0;
// void printAABB()
// {
//     if(c%4==2)
//     {
//         for (int i = 0; i < c / 4;i++)
//             cout << strA;
//         cout << strB;
//     }
//     else if(!c%4)
//         for (int i = 0; i < c / 4; i++)
//             cout << strA;
//     else if(!c%2)
//         for (int i = 0; i < c / 2; i++)
//             cout << strB;
//     else
//         cout << -1;
// }
// int main(void)
// {
//     fast_io();
//     cin >> inputstr;
//     for (int i = 0; i < inputstr.length();i++)
//     {
//         if (inputstr[i] == '.' || i == inputstr.length()-1)
//         {
//             c = 0;
//             printAABB();
//             cout << ".";
//             continue;
//         }
//         else
//         {
//             c++;
//         }
//         cout << c << "\n";
//     }
// }

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
    string B, R;
    int c = 0;

    cin >> B;

    B += ' ';

    for (int i = 0; i < B.size() - 1; i++)
    {

        if (B[i] == 'X')
            c++;

        if (B[i] == '.')
        {
            R += ".";
            if (c % 2 != 0)
                break;
            else
                c = 0;
        }

        if (c == 2 && B[i + 1] != 'X')
        {
            R += "BB";
            c = 0;
        }
        else if (c == 4)
        {
            R += "AAAA";
            c = 0;
        }
    }

    if (c % 2 == 1)
        cout << -1;
    else
        cout << R;
}