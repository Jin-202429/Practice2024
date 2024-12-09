#include <iostream>
using namespace std;

class Point {
protected:   // 이것을 쓰면 상속하는 곳에서만 사용 가능 (다른 곳에서 사용하지 못한다)
    int x, y;
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    void Set(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void Print() {  // 부모 클래스의 프린트
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class ColorPoint :public Point {
private:
    string color;
public:
    ColorPoint() : Point(), color("black") {}  // 디폴트 생성자
    ColorPoint(int x, int y, string color) : Point(x, y), color(color) {}
    void SetColor(string color) {
        this->color = color; 
    }
    void Print() {  // 자식 클래스의 프린트
        cout << "(" << x << "," << y << ")" << color << endl;

    }
};

int main()
{
    Point a(10, 20);
    ColorPoint c(30, 30, "red");
    

    c.Set(40, 40);
    c.SetColor("blue");

    a.Print();
    c.Print();  // 자식을 프린트 썼더니 자식의 함수가 프린트 된다.
}
