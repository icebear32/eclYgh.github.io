#define _CRT_SECURE_NO_WARNINGS 1

//计算某日是该年的第几天

//编写一个计算天数的程序，用户从键盘中输入年、月、日，在屏幕中输出此日期是该年的第几天。
//#include <stdio.h> 
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int days = 0;
//
//	printf("输入年份：>");
//	scanf_s("%d", &year);
//	if (year % 4 == 0)
//	{
//		//闰年
//		printf("输入月份：>");
//		scanf_s("%d", &month);
//		switch (month)
//		{
//		case 1:
//			days = 0;
//			break;
//		case 2:
//			days = 31;
//			break;
//		case 3:
//			days = 60;
//			break;
//		case 4:
//			days = 91;
//			break;
//		case 5:
//			days = 121;
//			break;
//		case 6:
//			days = 152;
//			break;
//		case 7:
//			days = 182;
//			break;
//		case 8:
//			days = 213;
//			break;
//		case 9:
//			days = 244;
//			break;
//		case 10:
//			days = 274;
//			break;
//		case 11:
//			days = 305;
//			break;
//		case 12:
//			days = 335;
//			break;
//		default:
//			break;
//		}
//	}
//	else if (year % 4 != 0)
//	{
//		//平年
//		printf("输入月份：>");
//		scanf_s("%d", &month);
//		switch (month)
//		{
//		case 1:
//			days = 0;
//			break;
//		case 2:
//			days = 31;
//			break;
//		case 3:
//			days = 59;
//			break;
//		case 4:
//			days = 90;
//			break;
//		case 5:
//			days = 120;
//			break;
//		case 6:
//			days = 151;
//			break;
//		case 7:
//			days = 181;
//			break;
//		case 8:
//			days = 212;
//			break;
//		case 9:
//			days = 243;
//			break;
//		case 10:
//			days = 273;
//			break;
//		case 11:
//			days = 304;
//			break;
//		case 12:
//			days = 334;
//			break;
//		default:
//			break;
//		}
//	}
//	else
//	{
//		printf("输入错误！\n");
//	}
//	
//	printf("输入天数：>");
//	scanf_s("%d", &day);
//	days = days += day;
//	printf("你输入的%d年%d月%d日",year,month,day);
//	printf("是该年的第%d天。\n", days);
//
//	return 0;
//}

//答案
//自定义函数leap()，判断输入的年份是否为闰年。代码如下:
int leap(int a)/*自定义函数leapO用来确定输入的年份是否为闰年*/
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)//润年判定条件
		return 1;/*是闰年返回1*/
	else
		return 0;/* 不是闰年返回0 */
}

int number(int year, int m, int d)/*自定义函数number()计算输入的日期为该年的第几天*/
{
	int sum = 0, i;
	int a[12] = { 31,28,31,30,30,31,31,30,31,30,31 };/*数组a存放平年每月的天数*/
	int b[12] = { 31,29,31,30,30,31,31,30,31,30,31 };/*数组b存放润年每月的天数*/
	if (leap(year) == 1)/*判断是否为闰年*/
	{
		for (i = 0; i < m - 1; i++)
		{
			sum += b[i];/*是闰年,累加数组b前m-1个月份的天数*/
		}
	}
	else
	{
		for (i = 0; i < m - 1; i++)
		{
			sum += a[i];/*是闰年,累加数组b前m-1个月份的天数*/
		}
	}
	sum += d; /*将前面累加的结果加上日期, 求出总天数*/
	return sum; /*返回计算的天数*/
}

#include <stdio.h>

int main()
{
	int year = 0, month = 0, day = 0, n;/*定义变量为基本整型*/
	printf("请输入年月日\n");
	scanf_s("%d%d%d", &year, &month, &day);/*输入年月日*/
	n = number(year,month, day);/*调用函数number()*/
	printf("第%d天\n", n);

	return 0;
}


