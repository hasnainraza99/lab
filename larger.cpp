#include<stdio.h>

int main(){
	int  a ,b ,c;
	printf("input a,  b, c,");
	scanf("%d %d %d",&a ,&b, &c);
	if(a>=b && a>=c)
	printf("%d is larger",a);
	if(b>=a && b>=c)
	printf("%d is larger",b);
	if(c>=a && c>=b)
	printf("%d is larger",c);
	return 0;
}
