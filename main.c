
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x,y,z,k;
	
	printf("1到x的總和\n");
	
	printf("輸入x\n");
	scanf("%d",&x);
	
	for(y=1;y<=x;y++)
	{
		if(y==x+1)
		break;
		
		z=z+y;
		k=z-1;
	}
	printf("1到%d的總和為:%d\n",x,k);
	return 0;
}
