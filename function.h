void menu(){
	system("cls");
	printf("\n");
	printf("\033[33m\t\t\t-------------------------------学生成绩管理系统-------------------------\r\n");
	printf("\033[32m\t\t\t|\t\t1. 添加记录                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t2. 显示记录                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t3. 修改记录                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t4. 删除记录                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t5. 查找记录                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t6. 顺序记录                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t7. 统计数量                                             |\r\n");
	printf("\033[32m\t\t\t|\t\t0. 退出系统                                             |\r\n");
	printf("\033[33m\t\t\t-------------------------------------------------------------------------\r\n");
	printf("\033[33m\t\t\t请选择(0-7):");
}
void add(struct student stu[]){
int i,id=0;
char quit;
do{
	printf("学号：");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(id==stu[i].id)
		{
			printf("此学号存在！\n");
			return;
		}
	}
	stu[i].id=id;
	printf("姓名：");
	scanf("%s",&stu[i].name);
	printf("复变函数：");
	scanf("%d",&stu[i].fbhs);
	printf("概率论：");
	scanf("%d",&stu[i].gll);
	printf("毛概：");
	scanf("%d",&stu[i].mzd);
	printf("c语言：");
	scanf("%d",&stu[i].cyy);
	printf("原神等级：");
	scanf("%d",&stu[i].ys);
	stu[i].sum = stu[i].fbhs+ stu[i].gll+ stu[i].mzd+ stu[i].cyy;
	n++;
	if(stu[i].ys>60||stu[i].ys<=0){
		printf("\033[34;5你就装吧~\033[0m\r\n");
	}else{if(stu[i].ys<=55){
		printf("\033[33;5m 不如马永峰滚回家去吧！\033[0m\r\n");
	}else{
		printf("\033[33;5m 太有实力了马永峰！！！\033[0m\r\n");
		printf("\033[34;5m ！！！！！原神启动！！！！！\033[0m\r\n");
	}
	};
	printf("\033[31m是否继续添加？(Y/N)\r\n");
	scanf("\t%c",&quit);
}while(quit!='n'&&quit!='N');
}
void show(struct student stu[],int i){
	printf("%-10d",stu[i].id);
	printf("%-10s",stu[i].name);
	printf("%-10d",stu[i].fbhs);
	printf("%-10d",stu[i].gll);
	printf("%-10d",stu[i].mzd);
	printf("%-10d",stu[i].cyy);
	printf("%-10d",stu[i].sum);
	printf("%-10d\n",stu[i].ys);
	
}
void showAll(struct student stu[]){
	int i;
	HHH;
	for(i=0;i<n;i++)
	{
	show(stu,i);
	}
}
void modify(struct student stu[]){
	char name[8],ch;
	int i;
	printf("修改学生成绩。\n");
	printf("请输入学生的姓名：");
	scanf("%7s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,stu[i].name)==0)
		{
			getchar();
			printf("找到该生的记录，如下所示：\n");
			 HHH;
			show(stu,i);
			printf("是否修改？(Y/N)\n");
			scanf("%c",&ch);
			if(ch=='Y'||ch=='y')
			{
				getchar();
				printf("姓名：");
	scanf("%s",&stu[i].name);
	printf("复变函数：");
	scanf("%d",&stu[i].fbhs);
	printf("概率论：");
	scanf("%d",&stu[i].gll);
	printf("毛概：");
	scanf("%d",&stu[i].mzd);
	printf("c语言：");
	scanf("%d",&stu[i].cyy);
	printf("原神等级：");
	scanf("%d",&stu[i].ys);
	stu[i].sum = stu[i].fbhs+ stu[i].gll+ stu[i].mzd+ stu[i].cyy;
				printf("修改完成。\n");

			}
			if(stu[i].ys>60||stu[i].ys<=0){
		printf("\033[34;5你就装吧~\033[0m\r\n");
	}else{if(stu[i].ys<=55){
		printf("\033[33;5m 不如马永峰滚回家去吧！\033[0m\r\n");
	}else{
		printf("\033[33;5m 太有实力了马永峰！！！\033[0m\r\n");
		printf("\033[34;5m ！！！！！原神启动！！！！！\033[0m\r\n");
	}
	};
			return;
		}
	}
	printf("\033[31;5m没有找到该生记录。\n");
}
void del(struct student stu[])
{
	int id,i;
	char ch;
	printf("\033[31m删除学生的记录。\n");
	printf("\033[31m请输入学号：");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(id==stu[i].id)
		{
			getchar();
			printf("\033[345m找到该生的记录，如下所示：\n");
			HHH;
			show(stu,i);
			printf("\033[315m是否删除(Y/N)\n");
			scanf("%c",&ch);
			if(ch=='Y'||ch=='y')
			{
				for(;i<n;i++)
					stu[i]=stu[i+1];
				n--;
				printf("\033[31;5m删除成功！");
			}
			return;
		}
	}

}
void search(struct student stu[])
{
	char name[8];
	int i;
	printf("查找学生的记录。\n");
	printf("请输入学生的姓名：");
	scanf("%7s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(name,stu[i].name)==0)
		{
			printf("找到该生的记录，如下所示：\n");
			HHH;
			show(stu,i);
			return;
		}
	}
	printf("没有找到该生的记录。\n");
}
void sort(struct student stu[])
{
	int i,j;
	struct student t;
	printf("\033[345m按总成绩进行排序。");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(stu[i].sum<stu[j].sum)
			{
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;

			}
		}
	}
	printf("\033[335m排序结果如下：\n");
	showAll(stu);
}
void CountStudent(int n) {
	printf("\033[315m统计学生总人数：%d\n", n);
}