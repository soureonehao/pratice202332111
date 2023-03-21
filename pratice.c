#include<stdio.h>
void main() {
	int score[10] = { 85, 90, 92,75, 78, 79,76,78,86,99 };	//往数组存入十位同学的成绩
	int figure,i;
	printf("请输入您想查询的成绩：");
	scanf_s("%d", &figure);		//输入考生号
	for (i = 0; i < 10;i++) {
		if (figure == score[i]) {	//判断输入考生号是否与数组中的数相等
			printf("您查找的成绩是第%d个同学的成绩", i + 1);
		}
		else if(figure != score[i]) {
			printf("您输入的成绩没在数组中！");
			break;
		}
	}
}