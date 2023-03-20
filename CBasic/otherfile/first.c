#include<stdio.h>

int result;
void add(int x, int y){
	result = x+y;
}

void disp(){
	printf("\n Result in first file: %d\n",result);
}
