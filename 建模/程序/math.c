#include "stdio.h"
#include "math.h"

int main()
{
	double y=0, v=0;
	printf("Please input v: ");
	scanf("%lf",&v);
	y=(3572.1*v-95.987*v*v-8877)/8877;
	printf("yµÄÖµÎª£º%f",y); 
	return 0;
} 
