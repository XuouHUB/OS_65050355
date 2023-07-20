#include <stdio.h>
int main(){
	int tmp;
	int sum=0;
	int count=0;
	for(;;){
		printf("Enter a number : ");
		scanf("%d",&tmp);
		if(tmp==0){
			printf("------END------\n");
			printf("SUM = %d AVG = %d\n",sum,sum/count);
			return 0;
		}
		sum+=tmp;
		count++;
	}
}
