#include <iostream>
using namespace std;

int jarak(int x1,int y1 ,int x2,int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}
int main() {
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (jarak(x1,y1,x2,y2));
}