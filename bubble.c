
//Q.1)Write a C Program for Bubble Sort
int main()

{
	int array[100],n,i,j,swap;
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter %d Numbersin",n);
	for(i = 0; i < n; i++)
	scanf("%d", &array[i]);
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(array[j] > array[j+1])
			{
				swap=array[j];
				array[j]=array[j+1];
				array[j+1]=swap;
			}
		}
	}
	printf("Sorted Array in");
	for(i = 0; i < n; i++)
	printf("%d\nn",array[i]);
	return 0;
}
