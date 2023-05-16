#include <iostream>    
using namespace std;

class Clock
{
    public:

        Clock(int a = 0, int b = 0, int c = 0):hour(a), minute(b), second(c){};

        void showTime()
        {
            cout << hour << ":" << minute << ":" << second << endl;
        }

    private:

        int hour;
        int minute;
        int second;
};

int main() {
 Clock myClock1,myClock2(8, 30, 30);    
 cout << "First time set and output:" << endl;
 myClock1.showTime();    
 cout << "Second time set and output:" << endl;
 myClock2.showTime();    
 return 0;
}