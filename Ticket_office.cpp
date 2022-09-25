
#include <iostream>
using namespace std;

int main() {
    int ages[5];
    float res, min;
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    min = ages[0];
    for (int i= 0;i <= 4; i++){
        //min = ages[0];
        if (ages[i] < min){
            min = ages[i];
        }
    }
    res = 50 - (min*50)/100;
    cout << res;
    //cout << min;
    return 0;
}
