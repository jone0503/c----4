#include <iostream>

int main(void) 
{
int x,i,y=0,z=0;
printf("��J�@�s�ꪺ�Ʀr(�����)�C\n");
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
printf(" �_��%d \n", y);
printf(" ����%d \n", z);
return 0;
}
//#include <iostream>
//
//int main(void) 
//{
//	int x,y=0,z=0;
//	printf("��J�@�s�ꪺ�Ʀr(�����)�C\n");
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
//	printf(" �_��%d \n", y);
//	printf(" ����%d \n", z);
//	return 0;
//}
