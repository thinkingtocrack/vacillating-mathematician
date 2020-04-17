#include<stdio.h>
void main()
{
        int i,a;
	float b,c;
        printf("enter how much times the lady mathematician wants to get back\n");
        scanf("%d",&a); 
        float arr[a];
        arr[0]=.5;
        for(i=1;i<a;i++)
        {
                if(i%2==1)
                {
                        arr[i]=arr[i-1]*.5;
                        b=arr[i];
                }
                else
                {
                        arr[i]=arr[i-1]*.5 + .5;
                        c=arr[i];
                }
        }
	if (a%2==1)
	{
		printf("her position is in x = %f\n",b);
	}
	else
	{
		printf("her position is in x =  %f\n",c);
	}
}

