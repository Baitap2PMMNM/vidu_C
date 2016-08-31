#include <stdio.h>
#include <conio.h>

main() {
	int a,b,c,max;
	
	printf("\n\n \t TIM GIA TRI LON NHAT \
	\n\n Cho 3 so nguyen duong a,b,c : ");
	printf("\n\n a = "); scanf("%d", &a);
	printf("\n b = "); scanf("%d", &b);
	printf("\n c = "); scanf("%d", &c);
	
	max = a;
	
	if (b > max) {
		max = b;
	}
	if (c > b) {
		max = c;
	}
	
	printf("\n So lon nhat la : %d \n", max);
	getch();
	return 0;
}
	
