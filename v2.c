#include <stdio.h>

int main() 
{
	 int days, money;
	 printf("Vvedite days and money:");
	 scanf("%d %d",&days, &money);
	 if (days<= 365 && money>=10000)
	 {
		if (days>=0 && days <=30) {
			money=0.9*money;
		}
			