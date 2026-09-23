#include<stdio.h>
#include <math.h>
#include"student.h"
#include "Function.h"
int main()
{
	struct student stu[50];
	int select,quit=0;
	n=0;
	while(1)
	{
		menu();
		scanf("%d",&select);
		switch(select)
		{
		case 1:
			add(stu);
			break;
		case 2:
			showAll(stu);
			break;
		case 3:
			modify(stu);
			break;
		case 4:
			del(stu);
			break;
		case 5:
			search(stu);
			break;
		case 6: 
			sort(stu);
			break;
		case 7:
			CountStudent(n);
				break;
		case 8:
			printf("\033[34;5m              ！！！！！原神启动！！！！！\033[0m\r\n");
				break;
		case 0:
			quit=1;
			break;
		default:
			printf("你不愿意输入1-7你不如试试数字8\n");
			break;
		}
		if(quit==1)
			break;
		printf("按任意键退回主菜单！\n");
		getchar();
		getchar();
	}
	printf("程序结束！\n");
	return 0;
}

	