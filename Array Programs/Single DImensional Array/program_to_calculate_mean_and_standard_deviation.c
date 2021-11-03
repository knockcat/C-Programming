#include<stdio.h>
#include<math.h>
void inputarr(int*,int);
float mean(int*,int);
void stdDev(int*,int);
float m = 0;

	main(){
		int n;
		printf("Enter size of array :\n");
		scanf("%d",&n);
		int arr[n];
		inputarr(arr,n);
		mean(arr,n);
		stdDev(arr,n);
		return 0;
	}

void inputarr(int *a ,int n){
	printf("Enter the element of array\n");
	int i;
	for( i =0;i<n;i++){
		scanf("%d",(a+i));
	}
}
	float mean( int *a,int n){
		int sum = 0,i;
		for (i = 0;i<n;i++){
			sum += a[i];
		}
		
		m = (float)sum/n;
		printf("Mean : %0.2f\n",m);
	}
	
	void stdDev(int* a, int n){
		float sum = 0;
		int i;
		for (i = 0;i<n;i++){
			sum+= ((a[i] - m) * (a[i] - m));
		}
		float new_mean = (float)sum/n;
		float sd = sqrt(new_mean);
		printf("Standard Deviation : %0.2f",sd);
	}
	


