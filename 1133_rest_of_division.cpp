#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    if(b < a) swap(a,b);
    for(int i = a+1; i < b; i++){
            if(i%5 == 2 || i%5 == 3){
                   cout << i << endl;
                   }
                   }
    return 0;
}
