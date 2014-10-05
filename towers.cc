#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int find_min(vector<int> chops){
    int min = chops[0];
    for (int i = 0; i < chops.size(); i++){
        if (min > chops[i]) min = chops[i];
    }
    return min;
}

int my_min(int a, int b){
    if (a < b) return a;
    return b;
}

int num_chops(vector<int> towers){
    int chops = 0;
    vector<int> chops_vec;
    for (int i = 0; i < towers.size(); i++){
        chops_vec.push_back(towers[i] + towers.size() - i - 1);
    }
    return find_min(chops_vec);
}

int main(){
    vector<int> towers;
    int num_towers;
    scanf("%d", &num_towers);
    int in;

    for (int i = 0; i < num_towers; i++){
        scanf("%d", &in);
        towers.push_back(in);
    }

    sort(towers.begin(), towers.end());

    cout << num_chops(towers) << endl;

    return 0;
}
