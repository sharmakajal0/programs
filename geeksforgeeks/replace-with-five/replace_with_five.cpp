#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }

    return 0;
}

int convertFive(int n){
    int new_number = 0, final_number = 0;
    int remainder;
    while(n > 0){
        remainder = n % 10;
        if(remainder == 0){
            remainder = 5;
        }
        new_number = new_number * 10 + remainder;
        n = n/10;
    }

    while(new_number > 0){
        remainder = new_number % 10;
        final_number = final_number * 10 + remainder;
        new_number = new_number/10;
    }
    return final_number;

}