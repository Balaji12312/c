#include<stdio.h>
int main()
{
	int arr[50],num,x,y,temp;
	printf("Pleas enter the Number of Elements you want in an array:");
	scanf("%d";&num);
	printf("Please Enter the number of elements:");
	for(x=0;x<num-1;x++){
		for(y=0;y<num-x-1;y++){
			if(arr[y]>arr[y+1]{
			temp=arr[y];
			arr[y]=arr[y+1];
			arr[y+1]=temp;
		}
		}
	}
	printf("Array after implementing bubble sort:");
	for (x=0;x<num;x++)
	{
		printf("%d",arr[x]);
		
	}
	return 0;
}
