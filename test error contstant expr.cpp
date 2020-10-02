#include<stdio.h>

void int main()
{
	int ni, i, j, c;
	scanf("%d", &n);
	int arr[ni], sort[ni];
	
	for(i = 0; i<=ni-1; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(j = 0; j < ni; j++)
	{
	
		int min = arr[0], max = arr[0];
	
		for(i = 0; i < ni; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];	// MAX value
			}
		}
		
	
		for(i = 0; i<ni; i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];	// MIN value
				c = i;
			}
		}
		
		
		sort[j] =  min;
		arr[c] = max;
			
	}
	
	printf("Ascending order:\n\n");

	for(i = 0; i<ni; i++)
	{
		printf("%d\t", sort[i]);
	}     

	printf("Ascending order:\n\n");

	for(i = 0; i<ni; i++)
	{
		printf("%d\t", sort[n-i-1]);
	}     
}
