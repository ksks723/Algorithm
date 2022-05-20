#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    int count = 0;
    vector<pair<int,int>> arr;

    for (int i=0;i<n;i++)
        cin >> arr[i].first >> arr[i].second;
    
    for (int i=0;i<n;i++){
        int flag = 0;
        for (int j=0;j<n;j++){
            if (i!=j){
                if (arr[i].first > arr[j].first && arr[i].second >= arr[j].second){
                    flag = 1;
                    break;
                }
                if (arr[i].second > arr[j].second && arr[i].first >= arr[j].first){
                    flag = 1;
                    break;
                }
            }
        }
        if (!flag) count++;
    }
    
    cout << count << "\n";
    
    return 0;
}
