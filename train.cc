#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int num_stops;
    unsigned int capacity;
    int passengers = 0;

    vector<int> left;
    vector<int> enter;
    vector<int> wait;

    scanf("%d", &capacity);
    scanf("%d", &num_stops);

    int in;

    for(int i = 0; i < num_stops; i++){
        scanf("%d", &in);
        left.push_back(in);
        scanf("%d", &in);
        enter.push_back(in);
        scanf("%d", &in);
        wait.push_back(in);
    }
   
    if (left[0] > 0){ // no one can leave on the first stop
        cout << "impossible" << endl;
        return 0;
    }

    if (wait[wait.size() - 1] > 0 || enter[enter.size() - 1] > 0){ // no one can wait or enter on the last stop
        cout << "impossible" << endl;
        return 0;
    }

    for(int i = 0; i < num_stops; i++){
       
        if (left[i] > passengers){ // cant have more people leave than currently on train
            cout << "impossible" << endl;
            return 0;
        }

        passengers = passengers - left[i] + enter[i]; // update passengers

        if (left[i] > capacity || enter[i] > capacity){ // cant have more than capacity enter or exit
            cout << "impossible" << endl;
            return 0;
        }

        if (passengers < capacity && wait[i] > 0){ // cant have people waiting if there is room on the train
            cout << "impossible" << endl;
            return 0;
        }

        if ( passengers < 0 ){ // cant have less than 0 passengers
            cout << "impossible" << endl;
            return 0;
        }

        if (passengers > capacity){ // cant have more passengers than capacity
            cout << "impossible" << endl;
            return 0;
        }
    }

    if (passengers > 0){ // no passengers at end of route
        cout << "impossible" << endl;
        return 0;
    }

    cout << "possible" << endl;

    return 0;
}
