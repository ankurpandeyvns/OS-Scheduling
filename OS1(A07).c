#include<stdio.h>
#include<stdlib.h>
int maxidx(int arr[]) //Returns the index of the largest element in the array
{
	int temp=0;
	for(int i=0;i<10;i++)		//Loop which iterates to find the largest element in array
	{
		if(arr[i]>temp)
		{
			temp=arr[i];
		}
	}
	for(int i=0;i<10;i++)		//Loop which iterates to find the index of the given element.
	{
		if(arr[i]==temp)
		{
			temp=i;
			break;
		}
	}
	return temp;				//Returns the index of the largest element.
}
int main()
{
	int stud[10],max;
	for(int i=0;i<10;i++)
	{
		printf("Enter the number of gifts picked by Student %c: ",i+97);
		scanf("%d",&stud[i]);
		while(stud[i]<0)
		{
			printf("Gifts can't be less than 0!!!\n");
			printf("Enter the number of gifts picked by Student %c: ",i+97);
			scanf("%d",&stud[i]);
		}
		system("clear||cls");
	}
	printf("\n--------------------------------------------------------\n\n");
	for(int i=0;i<10;i++)
	{
		max=maxidx(stud);
		printf("Student %c will get billed. Then,\n\n",max+97);
		stud[max]=0;		//Resets the value to 0 of the largest element as it's no longer needed.
	}
	printf("\n--------------------------------------------------------\n\n");
}

