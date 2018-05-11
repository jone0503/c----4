#include <iostream>

int main(void) 
{
int x,i,y=0,z=0;
printf("块硈﹃计(タ俱计)\n");
for(i>=0;;i++)
	{
	scanf("%d",&x);
	if(x>=1)
	{
			
		if(x%2==1)
		{
			y++;
		} 
		else if(x%2==0)
		{
			z++;
		}
	}
	else if(x == 0) 
	{
		break;
	}
	
}
printf(" 计%d \n", y);
printf(" 案计%d \n", z);
return 0;
}
//#include <iostream>
//
//int main(void) 
//{
//	int x,y=0,z=0;
//	printf("块硈﹃计(タ俱计)\n");
//	scanf("%d",&x);
//	
//	if(x != 0)
//	{
//		if(x%2==1)
//		{
//			y++;
//		} 
//		else if(x%2==0)
//		{
//			z++;
//		}
//				
//	}
//	printf(" 计%d \n", y);
//	printf(" 案计%d \n", z);
//	return 0;
//}
