#include<stdio.h>
#include<conio.h>

main()
{
	int numf,numl,n,sum=0;
	clrscr();
	printf("Enter the number :- ");
	scanf("%d",&n);
	for(numf=n;numf>=10;numf=numf/10)
	{
		numl=n%10;
	}
		sum=numf+numl;
		printf("Sum of first and last number :- %d/n",sum);










	getch();

}
