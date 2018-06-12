#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,m[6],i;
	printf("請輸入一個數字:");
	scanf("%2d",&a);
	srand(time(NULL));
	
	for(i=0;i<6;i++){
		m[i]=rand()%49+1;	
		printf("m[%d]=%d\n",i,m[i]);
	}
	
	
	//for(i=0;i<6;i++)
	
	
	printf("%2d,%2d",a,m);
	if(a==m)
	printf("答對");
	else
	printf("答錯");
	return 0;
}
