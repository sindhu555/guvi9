#include <stdio.h>

int main(void) {
	// your code goes here
	int i,a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		printf("%d",i);
	}
}
