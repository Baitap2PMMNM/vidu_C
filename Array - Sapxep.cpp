#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100

void nhapdayso(int A[max] , int n) {
	int i ;
	for(i = 0; i < n; i++) {
		printf("\t A[%d] = ", i);
		scanf("%d", &A[i]);
}
}
void xuatdayso(int A[max] , int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%4d", A[i]);
	}
}
void sapxepdayso(int A[max], int n) {
	int i,j,c;
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n; j++) {
			if(A[i] < A[j]) {
				c = A[i];
				A[i] = A[j];
				A[j] = c;
			}
		}
	}
	for(i = 0; i < n; i++) {
		printf("%4d", A[i]);
	}
}
main() {
	int A[max], i,n;
	int c ;
	printf("\n Nhap gioi han so phan tu cua day : ");
	scanf("%d", &n);
	printf("\n Nhap cac phan tu cho day so :");
	printf("\n\n");
	nhapdayso(A,n);
	printf("\n\n Day so vua nhap la : ");
	printf("\n\n");
	xuatdayso(A,n);
	printf("\n\n Day so sau khi sap xep tang dan la : ");
	printf("\n\n");
	sapxepdayso(A,n);
	getch();
	return 0;
	
}
