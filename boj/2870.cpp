/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;
int n;
vector<string> v;
string res;

bool cmp(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}

int main() {
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (isdigit(s[j])) {//숫자면
				if (res.length() == 1 && res == "0") 
					res = "";
				res += s[j];
				if (j == s.length() - 1) {
					v.push_back(res);
					res = "";
				}
			}
			else {//문자면
				if (res != "")
					v.push_back(res); 
				res = "";
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
	for (int i = 0; i < v.size();i++) {
		cout << v[i] << "\n";
	}
}
