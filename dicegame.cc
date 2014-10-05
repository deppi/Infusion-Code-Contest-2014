#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

double expectedVal(int a, int b){
    double size = b - a + 1;
    double ex = 0.0;
    double prob = 1/(size);
    for (int i = a; i <= b; i++){
        ex += prob*i;
    }
    return ex;
}

double expectedEasy(int a, int b){
    return ((b - a) / 2) + a;
}

int main(){

    int a1, b1;
    scanf("%d", &a1);
    scanf("%d", &b1);

    //cout << setprecision(200) << expectedVal(a1, b1) << endl;

    int a2, b2;
    scanf("%d", &a2);
    scanf("%d", &b2);

    //cout << setprecision(200) << expectedVal(a2, b2) << endl;

    int a3, b3;
    scanf("%d", &a3);
    scanf("%d", &b3);

    //cout << setprecision(200) << expectedVal(a3, b3) << endl;

    int a4, b4;
    scanf("%d", &a4);
    scanf("%d", &b4);

    //cout << setprecision(200) << expectedVal(a4, b4) << endl;

    double result = expectedEasy(a1, b1) + expectedVal(a2, b2);
    double result2 = expectedEasy(a3, b3) + expectedVal(a4, b4);

    cout << result << " " << result2 << endl;

    if (result > result2) cout << "Gunnar" << endl;
    else if (result2 > result) cout << "Emma" << endl;
    else cout << "Tie" << endl;

    return 0;
}
