#include <stdio.h>
#include <stdlib.h>   // standard 라이브러리, 절대값을 사용하기 위해

struct point
{
	int x;
	int y;
};

struct rectangle 
{
	point p1;  
	point p2;
};

int area(point p1, point p2);
int rectArea(rectangle r);

int main()
{
	point p1, p2;

	// 사각형의 면적 구하기
	rectangle r;
	r.p1 = p1;
	r.p2 = p2;
	printf("(%d, %d)-(%d, %d)의 면적 = %d\n", p1.x, p1.y, p2.x, p2.y, area(r));

	printf("(%d, %d)-(%d, %d)의 면적 = %d\n", p1.x, p1.y, p2.x, p2.y, rectArea(r));
}

int rectArea(rectangle r)
{
	return abs(r.p2.x - r.p1.x) * abs(r.p2.y - r.p1.y);
}

int area(point p1, point p2)
{
	return (p2.x - p1.x) * (p2.y - p1.y);
}

double distance(point p1, point p2)
{
	return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}