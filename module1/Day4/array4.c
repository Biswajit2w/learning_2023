#include<stdio.h>
int sumOfOddAndEven(int arr[],int n){
	int sum1=0,sum2=0;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			sum1+=arr[i];
		}else{
			sum2+=arr[i];
		}
	}
	printf("\nThe sum of even elements is:%d",sum1);
	printf("\nThe sum of odd elements is:%d",sum2);
}
int main(){
	int size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the array elemnts:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);	
	}
	
	printf("Array elements are:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	sumOfOddAndEven(arr,size);
	return 0;
	
}
