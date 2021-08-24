#include<stdio.h>
main()
{
	int data = 12345;
	char str[5] = {0};
	int a[5] = {0};
	int b[5] = {0};
	while(1)
	{
	   sprintf(str,"%d",data);
	   for(int i = 0 ;i<5;i++)
	      a[i]=str[i]-48;
	   data = data*4;
	   sprintf(str,"%d",data);
	   for(int i = 0 ;i<5;i++)
	      b[i]=str[i]-48;
	   if(a[0]==b[4] && a[1]==b[3] && a[2]==b[2] && a[3]==b[1] &&a[4]==b[0])
	   {
	   	for(int i = 0 ;i<5;i++)
	      printf("%d",a[i]);
	      printf("\n");

	      printf("\n");
	      break;
	   }
	   data = data/4;
	   data++;
	}
}

