#include <stdio.h>
#include <conio.h>
#include <math.h>
int main () {


	float a,b,c,delta;
	       
	printf ("\n \t\tGIAI PHUONG TRINH BAC HAI \n");
			
	printf("\n \tHe so a = "); scanf("%f", &a);
	printf("\n \tHe so b = "); scanf("%f", &b);
	printf("\n \tHe so c = "); scanf("%f", &c);
	
	delta = b*b - 4*a*c;
	
	if(delta < 0) {
		printf("\n\n Phuong trinh vo nghiem \n");
	}
	else if(delta == 0) {
		printf("\n Phuong trinh co nghiem kep: \n\n\tx1 = x2 = %0.2f \n", -b/(2*a));
	}
	else {  
		printf("\n Phuong trinh co 2 nghiem phan biet:\n\n \tx1 = %0.2f \n",(-b+sqrt(delta))/(2*a));
		printf("\n \tx2 = %0.2f \n\n\n\n\n\n",(-b-sqrt(delta))/(2*a));
	}
	getch();
	return 0;
}
