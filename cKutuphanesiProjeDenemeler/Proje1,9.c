#include<stdio.h>

int main(){
	
	int id1,id2;
	printf("Enter two number for check which one is bigger : \n");
	scanf("%d %d",&id1,&id2);
	if(id1>id2) printf("%d > %d",id1,id2);
	else printf("%d > %d ",id2,id1);
	return 0;
}
