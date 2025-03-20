#include<stdio.h>
#include<math.h>

int homeValue, popularity, size;

int main()
{

	printf("Enter popularity> ");
	scanf("%d", &popularity);
	printf("Enter size> ");
	scanf("%d", &size);
	
	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
	
	printf("Home value is %d", homeValue);
	return 0;
}
	
