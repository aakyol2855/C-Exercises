#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

float array[3][9];
float max_prob = 0.0;

void tablo(void)
{
	float toplam = 0.0;
	int j,i = 0;
	while(i < 3)
	{
		toplam = 0.0;
		for(j=0;j<9;j++){
			array[i][j]=(rand()%100+1.0)/100;
			toplam += array[i][j];
		}
		if(toplam != 1.0){i--;}i++;
	}
	printf("\t\tS1\t\t\tS2\t\t\tS3\n\n");
	for(i = 0;i < 3;i++){
		printf("\nS%d\t",i+1);
		for(j = 0;j < 9;j++){
			printf("%.2f\t",array[i][j]);
		}
	}
}

int location(int index)
{
	int state;
	if(index >= 0 && index < 3)state = 0;
	else if(index >= 3 && index < 6)state = 1;
	else if(index >= 6 && index < 9)state = 2;
	return state;
}

float function(int count,int count1,int time,int startState,int finalState,float prob)
{	
	if(time == 0)
	{
		if(count == count1 && startState == finalState)
		{
			if(max_prob < prob)
				max_prob = prob;
			printf("\nMax : %f , Count: %d , State: S%d\n",max_prob,count,startState+1);
		}
		return;
	}
	int index;
	int tempCount;
	for(index = 0;index < 9;index++)
	{
		prob = prob*array[startState][index];
		if(index%3 == 0 && count != 0){tempCount = -1;function(count+tempCount,count1,time-1,location(index),finalState,prob);}
		else if(index%3 == 1){tempCount = 0;function(count+tempCount,count1,time-1,location(index),finalState,prob);}
		else if(index%3 == 2){tempCount = 1;function(count+tempCount,count1,time-1,location(index),finalState,prob);}
	}
	return max_prob;
}

int main()
{
	tablo();
	char path[100];strcpy(path,"");
	float prob = 1.0;
	int startCount = 1;//Start count 1
	int finalCount = 2;//Final count 2
	int time = 3;
	int startState = 0;//S1
	int finalState = 2;//S3
	printf("\n\n%f",function(startCount,finalCount,time,startState,finalState,prob));
	return 0;
}

























