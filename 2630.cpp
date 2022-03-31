#include <iostream>
 
using namespace std;
 
int res[2];  
int arr[130][130];
 
void ck(int x, int y, int N){
    bool flag = true;
    
    for(int i = x; i < x + N; i++)
        for(int j = y; j < y + N; j++)
            if(arr[i][j] != arr[x][y]){
                flag = false;
                break;
            }
    if(flag)
        res[arr[x][y]]++;
    else 
    {
        for(int a = x; a < x + N; a += N/2 )
            for(int b = y; b < y + N; b += N/2)
                ck(a, b, N/2);
        
    }
}
 
int main(void){
    int N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    
    ck(0, 0, N);
    
    for(int i = 0; i < 2; i++){
        cout << res[i] << endl;
    }
  
}
