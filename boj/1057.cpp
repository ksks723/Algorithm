#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
    int mem;
    int imm, kim;
    int count = 0;

    cin >> mem >> kim >> imm;

    if (mem < kim || mem < imm)
    {
        count = -1;
    }
    else
    {
        while (kim != imm)
        {
            kim = (kim + 1) / 2;
            imm = (imm + 1) / 2;
            count++;
        }
    }

    cout << count;

    return 0;
}
