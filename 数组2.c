#include <stdio.h>
int main()
{
	int count[10]; 
	int i =0;
	int x =0;
//初始化数组
    while(i<10) {
    	i =i+1;
    	count[i]=0; 
	}
//初始化完毕
    printf("请输入数字，输入-1来表示结束\n");
	scanf("%d",&x);
	while (x != -1){
		if (x>=1 && x<=9){
			count[x]++;
		}
		else {
			goto out;
		}
		printf("继续输入数字\n"); 
		scanf("%d",&x);
		
	}
	
//遍历数组
   out:
   	i = 0;
   while(i<=9){
   	printf("%d,出现了%d次。\n",i,count[i]);
   	i=i+1; 
   }
//..............
    return 0;
} 
