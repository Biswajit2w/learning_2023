#include<stdio.h>
void printNumber(int n1);
void space(int n1);
void printNumber1(int n1);
void printNumber(int n1){
	int i;
	for(i=1;i<=n1;i++){
		printf("%d",i);
	}
}
void printNumber1(int n1){
	int i;
	for(i=n1;i>=1;i--){
		printf("%d",i);
	}
}
void space(int n1){
int i, j;
    for (i = n1 - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = 1; j <= (n1 - i) * 2; j++) {
            printf(" ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}


int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printNumber(num);
	printNumber1(num);
	printf("\n");
    space(num);
	return 0;
}
