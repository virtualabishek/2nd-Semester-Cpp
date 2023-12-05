#include<iostream>
using namespace std;
class time {
    private:
    int hour;
    int minute;
    public:
    time(int h, int m) {
        hour = h;
        minute = m;
    }
    operator float() {
        float a = hour*60 + minute;
        return a;
    }

};

int main() {
    time c1(1,30);
    float d = float(c1);
    cout<<c1<<endl;
    return 0;
}