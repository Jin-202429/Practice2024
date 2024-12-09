#include <stdio.h>
#include <math.h>  // 수학 함수를 쓰기 위해서는 써줘야함

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

 double distance(point p1, point p2);

int main()
{
	// 두 점의 좌표를 입력 받고 거리를 계산하는 distance() 함수를 만드시오
	point p1, p2;

	printf("한 점의 좌표(x, y) : ");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("한 점의 좌표(x, y) : ");
	scanf_s("%d %d", &p2.x, &p2.y);

	printf("(%d, %d)-(%d, %d)의 거리 = %f\n",
		p1.x, p1.y, p2.x, p2.y, distance(p1, p2));
}

double distance(point p1, point p2)
{
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p2.y, 2));
	// pow쓰기 싫으면 밑에 있는 것처럼 쓰기
	// return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}