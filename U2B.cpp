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
    time e(2,3);
    float d = float(e);
    cout<<e<<endl;
    return 0;
}
