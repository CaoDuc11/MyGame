#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int a[m][n];
    int cot = n , hang= m-1;
    int i =0, j =0, h =1;
    while ( h <= m*n){
        for( int e = 0; e < cot; e++){
           if((n - cot)%2 == 0){
               a[i][j] =h;
               j++;
               h++;
           }
           else{
               a[i][j] = h;
               j--;
               h++;
           }
        }
        cot--;
        for( int e = 0; e < hang; e++){
            if((m -1 - hang)%2 == 0){
                a[i][j] = h;
                i++;
                h++;
           }
           else{
                a[i][j] =h;
                i--;
                h++;
           }

        }
        hang--;
    }
    for( int i =0;  i < m ; i++){
        for( int j =0; j < n; j++)cout << a[i][j] << ' ';
        cout << endl;
    }

}
