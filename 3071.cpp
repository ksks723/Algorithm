#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
    return i > j;
}

string solution(int n)
{
    string answer = "";
    vector<int> v;

    while (n>0)
    {
        if (n%3 < 10)
            answer += n % 3;
        else
            answer += n % 3 - 10 + 'A';
    }
    return answer;
}
int main()
{
    int a;
    cin >> a;
    cout << solution(a);

}