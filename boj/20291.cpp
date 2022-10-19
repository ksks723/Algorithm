#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
map<string,int> ma;
int n;
vector<string> split(string str, char del){
	istringstream iss(str);
	string buf;
	vector<string> res;
	while(getline(iss,buf,del)){
		res.push_back(buf);
	}
	return res;
}
int main(void)
{
	fast_io();
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		vector<string> res = split(str, '.');
		ma[res[1]]++;
	}
	for (auto iter = ma.begin(); iter != ma.end();iter++)
		cout << iter->first<< " " << iter->second << "\n";
}