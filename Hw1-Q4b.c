#include<stdio.h>
#include<math.h>

int HomeValue, popularity, size;
void computeHomeValue(void);

int main(){
	
	computeHomeValue();
}


void computeHomeValue(){
	printf("Enter popularity> ");
		scanf("%d", &popularity);
		
	printf("Enter size> ");
		scanf("%d", &size);
		
	HomeValue = (pow(popularity,3)+pow(size,2))*10000;
	
	printf("Home value is %d", HomeValue);
	
	return 0;
}

