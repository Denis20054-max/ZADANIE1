#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h> 
#include <locale.h> 
#include <math.h> 




struct point {
	float x;
	float y;
	char name;
};
typedef struct point Point;
void put_point(Point z);
float dist(Point z, Point w);
Point srtochka(Point z, Point w);
int chetvert(Point q);

main()
{
	setlocale(LC_ALL, "RUS");
	Point b, a, z, w, q;

	a = (Point){ 1.f, 2.f, 'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	float a1, b1, a2, b2;
	char c1, c2;
	puts("¬ведите координаты 2 ух точек и их название(A 1 2 B 2 3)");
	puts("n x1 y1 n x2 y2");
	scanf("%c %f %f %c %f %f", &c1, &a1, &b1, &c2, &a2, &b2);
	getchar();

	z.name = c1; z.x = a1; z.y = b1;
	w.name = c2; w.x = a2; w.y = b2;

	printf("point %c (%.1f, %.1f)\n", b.name, b.x, b.y);
	put_point(z);
	float distance = dist(z, w);
	printf("–ассто€ние между точками %c и %c = %f\n", z.name, w.name, distance);



	printf("sred tochk ");
	put_point(srtochka(z, w));


	float a3, b3;
	char c3;
	puts("¬ведите координаты точки дл€ которой нужно определить еЄ координатную четверть");
	puts("n x y");
	scanf("%c %f %f", &c3, &a3, &b3);
	getchar();

	q.name = c3; q.x = a3; q.y = b3;

	printf("точка ");
	put_point(q);
	int k = chetvert(q);
	printf("относитс€ к %d четверти", k);


}
void put_point(Point z) {
	printf("point %c(%.1f, %.1f)\n", z.name, z.x, z.y);


}
float dist(Point z, Point w) {
	float rastZW;
	rastZW = sqrt(pow(w.x - z.x, 2) + pow(w.y - z.y, 2));
	return (rastZW);

}
Point srtochka(Point z, Point w) {
	Point M;
	M.x = (z.x + w.x) / 2;
	M.y = (z.y + w.y) / 2;
	return (M);
}
int chetvert(Point q) {
	int k;

	if (q.x > 0 && q.y > 0) {
		k = 1;
	}
	if (q.x < 0 && q.y > 0) {
		k = 2;
	}
	if (q.x < 0 && q.y < 0) {
		k = 3;
	}
	if (q.x > 0 && q.y < 0) {
		k = 4;
	}
	return(k);
}