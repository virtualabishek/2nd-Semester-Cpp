#include<iostream>
using namespace std;
class animal {
private:
int price;
string color;
public:
void getData() {
    cout<<"Enter the price and color. "<<endl;
    cin>>price>>color;
}
void showData(){
    cout<<"The price is: Rs. "<<price<<", and color is: "<<color<<endl;
}
};
int main() {
    animal cat, dog;
    cat.getData();
    cat.showData();
    dog.getData();
    dog.showData();
    return 0;
}