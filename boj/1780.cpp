
#include <iostream>
 
using namespace std;
 
int res[3];  
int arr[2187][2187];
 
void ck(int x, int y, int N){
    bool flag = true;
    
    for(int i = x; i < x + N; i++)
        for(int j = y; j < y + N; j++)
            if(arr[i][j] != arr[x][y]){
                flag = false;
                break;
            }
    if(flag)
        res[arr[x][y] + 1]++;
    else 
    {
        for(int a = x; a < x + N; a += N/3 )
            for(int b = y; b < y + N; b += N/3)
                ck(a, b, N/3);
        
    }
}
 
int main(){
    int N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    
    ck(0, 0, N);
    
    for(int i = 0; i < 3; i++){
        cout << res[i] << endl;
    }
  
}
