#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[5]= {2,7,1,23,5} ,j,no;
	printf("Enter size of array: ");
	scanf("%d",&no);
	printf("Enter any %d elements in array: ",no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicative elements : ");
	for(i=0; i<no; i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(arr[i]==arr[j])
		{
		printf("%d\n",arr[i]);
	}

	}

     }
    getch();
}
