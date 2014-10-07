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
    return (((double)b - (double)a) / 2) + (double)a;
}

int evenBetter(int a, int b){
    return a + b;
}

int main(){

    int a1, b1;
    scanf("%d", &a1);
    scanf("%d", &b1);

    int a2, b2;
    scanf("%d", &a2);
    scanf("%d", &b2);

    int a3, b3;
    scanf("%d", &a3);
    scanf("%d", &b3);

    int a4, b4;
    scanf("%d", &a4);
    scanf("%d", &b4);

    // this solution works because you are comparing their
    // expected value * 2. You avoid division this way
    // so it is a much preferred solution.
    int result = evenBetter(a1, b1) + evenBetter(a2, b2);
    int result2 = evenBetter(a3, b3) + evenBetter(a4, b4);

    if (result > result2) cout << "Gunnar" << endl;
    else if (result2 > result) cout << "Emma" << endl;
    else cout << "Tie" << endl;

    return 0;
}
