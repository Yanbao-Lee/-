#include <stdio.h>
int main()
{
	int count[10]; 
	int i =0;
	int x =0;
//��ʼ������
    while(i<10) {
    	i =i+1;
    	count[i]=0; 
	}
//��ʼ�����
    printf("���������֣�����-1����ʾ����\n");
	scanf("%d",&x);
	while (x != -1){
		if (x>=1 && x<=9){
			count[x]++;
		}
		else {
			goto out;
		}
		printf("������������\n"); 
		scanf("%d",&x);
		
	}
	
//��������
   out:
   	i = 0;
   while(i<=9){
   	printf("%d,������%d�Ρ�\n",i,count[i]);
   	i=i+1; 
   }
//..............
    return 0;
} 
