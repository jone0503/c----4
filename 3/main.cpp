#include<stdio.h>
main(void)
{
    int i,j=5;
    scanf("%d",&i);
    printf("輸入第一變數為: %d\n" ,i);
    i%=j ;
    printf("取餘數數為: %d\n" ,i);
    if(i == 0)
	{
		printf("A");
		
	}
	else if(i == 2)
	{
		printf("B");
		
	}
	else if(i == 3)
	{
		printf("C");
		
	}
	else
	
	{
		printf("D");
		
	}
    
	return 0;
}
