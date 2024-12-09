#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	point p1;  // struct를 쓰지 않아도 구조체인것을 안다.
	point p2;
};

int main()   // 이 구조체는 main 함수안에서만 사용 가능
{
	/*
	struct point {
		int x;
		int y;
	};

	struct rectangle {
		struct point p1;
		struct point p2;
	};
	*/

}