//Copied
#include <bits/stdc++.h>
using namespace std;
class Car {
public:
    int id, start;
};
int main() {
    char mCase;
    int id, time, n;
    cin >> n;
    list<Car> park;
    stack<Car> waitPark;
    do {
        cin >> mCase >> id >> time;
        if (mCase == 'A') {
            if (park.size() >= n) {
                waitPark.push({id, time});
                printf("car#%d waiting\n", id);
            } else {
                park.push_back({id, time});
                printf("car#%d in parking space #%d\n", id, park.size());
            }
        } else if (mCase == 'D') {
            auto index = park.end();
            for (auto i = park.begin(); i != park.end(); i++) {
                if (i->id == id) {
                    index = i;
                    break;
                }
            }
            if (index == park.end())
                printf("the car not in park\n");
            else {
                printf("car#%d out,parking time %d\n", id, time - index->start);
                park.erase(index);
                while (park.size() < n && !waitPark.empty()) {
                    Car temp = waitPark.top();
                    temp.start = time;
                    waitPark.pop();
                    park.push_back(temp);
                    printf("car#%d in parking space #%d\n", temp.id, park.size());
                }
            }
        };
    } while (mCase != 'E');
}
