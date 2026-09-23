#ifndef STUDENT
#define STUDENT
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#define HHH printf("%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","学号|","姓名|","复变函数|","概率论|","毛概|","C语言|","总分|","原神等级|")
struct student{
	 int id;
	 char name[8];
	 int sum;
	 int fbhs;
	 int mzd;
	 int cyy;
	 int ys;
	 int gll;
};
static int n;
void menu();
void add(struct student stu[]);
void show(struct student stu[],int i);
void showAll(struct student stu[]);
void modify(struct student stu[]);
void del(struct student stu[]);
void search(struct student stu[]);
void sort(struct student stu[]);
void CountStudent(int n);
#endif
