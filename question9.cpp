#include <iostream>
#include <math.h>

using namespace std;

class Point {
    public:
        Point(int x, int y);
        ~Point();
        int getPositionx();
        int getPositiony();
        void display();
        friend bool compare(Point a, Point b);
        friend int dist(Point a, Point b);
        friend Point middle(Point a, Point b);
    private:
        int cordx;
        int cordy;
};

Point::Point(int x, int y) {
    cordx = x;
    cordy = y;
}

Point::~Point(void) {}

int Point::getPositionx( void ) {
    return cordx;
}

int Point::getPositiony( void ) {
    return cordy;
}



bool compare(Point a, Point b) {
    bool isSame = false;
    if (a.getPositionx() == b.getPositiony() && a.getPositiony() == b.getPositiony()) {
        isSame = true;
    }
    return isSame;
}

int dist(Point a, Point b) {
    int distance;
    distance = sqrt(a.getPositionx()*a.getPositionx() + b.getPositiony()*b.getPositiony());
    return distance;
}

Point middle(Point a, Point b) {
    int x, y;
    x = (a.getPositionx() + b.getPositionx()) / 2;
    y = (a.getPositiony() + b.getPositiony()) / 2;
    return Point(x, y);
}

int *inputvalue(int *box) {
    int cordx, cordy;

    cout << "Enter position of X : \n";
    cin >> cordx;
    cout << "Enter position of Y : \n";
    cin >> cordy;

    box[0] = cordx;
    box[1] = cordy;

    return box;
}

int main() {
    int box[2];
    string boolean;

    cout << "1st Point : \n" << endl;
    inputvalue(box);
    Point point1(box[0], box[1]);

    cout << endl << "2nd Point: \n" << endl;
    inputvalue(box);
    Point point2(box[0], box[1]);
    cout << endl;
    cout << endl;
    boolean = compare(point1, point2) ? "True" : "False";
    cout << "Comparing: \n " << boolean << endl;
    cout << "The Distance : \n" << dist(point1, point2) << endl;
    cout << "Middle : \n";
    return 0;
}
