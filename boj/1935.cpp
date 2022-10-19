#include <iostream>
#include <iomanip>
#include <stack>
double calculate(double num1, double num2, char oper)
{
    switch (oper)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    }
}
int Change(char alphabet, int *num)
{
    for (int i = 'A'; i <= 'Z'; i++)
        if (alphabet == i)
            return num[i - 'A'];
}
int main()
{
    int N;
    std::stack<double> st;
    std::string str;
    std::cin >> N >> str;
    int *num = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> num[i];
    for (int i = 0; i != str.length(); i++)
    {
        if (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')
            st.push(Change(str[i], num));
        else
        {
            double num2 = st.top();
            st.pop();
            double num1 = st.top();
            st.pop();
            st.push(calculate(num1, num2, str[i]));
        }
    }
    double result = st.top();
    delete[] num;
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << result;
}
