#include <iostream>

int main(void) 
{
double x,y=0;
double max=0;
printf("輸入一連串的實數。\n");
for(x>=-999;x<=9999;x++)
	{
	scanf("%lf",&x);
	if(x>=x &&x<=x &&x!=0)
	{
			
		if(max < x)
		max = x;
		
	
	}
	else if(x == 0) 
	{
		break;
	}
	
}
printf(" %f \n", max);
return 0;
}


