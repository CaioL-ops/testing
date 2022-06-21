#include <stdio.h>
#include <stdlib.h>

void troca(int *pa, int *pb);

int main() {
	int i=0, x[5]={0,1,2,3,4};
	
	for(i=0; i<5; i++){
	troca(&x[i]+1, &x[i]+4);
	
	}
	
	printf("%d", x[0]);
	
	return 0;
}

void troca(int *pa, int *pb){
	int t;
	
	t=*pa;
	*pa=*pb;
	*pb=t;
}
