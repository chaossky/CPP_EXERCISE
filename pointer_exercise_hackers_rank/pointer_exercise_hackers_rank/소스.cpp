#include <stdio.h>

void update(int *a, int *b) {
	 int add,sub;

	 add = int(*a) - int(*b);
	 /*
	 if (a > b)   *b = int(*a) - int(*b)	 ;
	else if (*a < *b) *b = int(*b) - int(*a) ;
	 */
	 
	*b= (int(*a) >int(*b) )? int(*a) - int(*b) : int(*b) - int(*a);
	// Complete this function    
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}
