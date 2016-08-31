/* Viet chuong trinh tim cac so nguyen a, b, c, d khac nhau trong khoang tu 0 toi 10
thoa man dieu kien a*d*d = b*c*c*c */

#include <stdio.h>
#include <conio.h>
#include <math.h>
main() {
	int a,b,c,d;
	
	printf("\n Cac gia tri thoa man : a*d*d = b*c*c*c ");
	printf("\n\n    a   b   c   d \n ");
	for(a = 0; a <=10;a++)
		for(b = 0; b <=10; b++)
			for(c = 0; c <=10; c++)
				for(d = 0; d <=10; d++) {
					if(((a != b) && (b != c) && (c != d)) && ((a*d*d) == (b*c*c*c))) {
						printf("\n %4d%4d%4d%4d \t Tich bang : %d*%d*%d = %d*%d*%d*%d = %d ", a,b,c,d,a,d,d,b,c,c,c,a*d*d);
					}
				}
				getch();
				return 0;
}
