#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
    public:
        void push(int x)
        {
            q.push(x);
        }

        int pop()
        {
            if(q.empty())
            {
                cout << "Invalid" << endl;
                return -1;
            }

            int temp = q.front();
            q.pop();
            return temp;
        }

        int size()
        {
            return q.size();
        }

    private:
        queue<int>q;
};

int main(void)
{
    MyQueue mq;
    int n;
    cin >> n;

    while(n--)
    {
        int op;
        cin >> op;

        if(op == 1)
        {
            int num;
            cin >> num;
            mq.push(num);
        }

        if(op == 3)
        {
            int ans = mq.size();
            cout << ans << endl;
        }

        if(op == 2)
        {
            int ans = mq.pop();
            if(ans != -1) cout << ans << endl;
        }
    }
}