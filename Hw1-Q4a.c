#include<stdio.h>
#include<math.h>

int computeHomeValue(int popularity, int size); 
int HomeValue, size, popularity;

int main()
{
	printf("Enter popularity> ");
		scanf("%d", &popularity);
	
	printf("Enter size> ");
		scanf("%d", &size);
	
	computeHomeValue(popularity, size);
	
	printf("Home value is %d", HomeValue);
	
	return 0;
}

int computeHomeValue(popularity, size) {
	HomeValue = (pow(popularity, 3)+pow(size, 2))*10000;
}
