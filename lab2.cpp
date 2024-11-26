#include<stdio.h>

int main(){
	int var1;
	int var2;
	
	scanf("%d",&var1);
	scanf("%d",&var2);
	
	if(var1>var2){
		printf("value1 more than value2");
		printf("\ndifferent =");
		printf("\n%d",(var1-var2));
	}
	else{
		printf("value2 more than value1");
		printf("\ndifferent =");
		printf("\n%d",(var2-var1));
	}
}
