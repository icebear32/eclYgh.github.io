#define _CRT_SECURE_NO_WARNINGS 1

//任意次方后的最后三位
//例7：编程求一个整数任意次方后的最后三位数，即求x^ y - 的最后三位数, x和y的值由键盘输入。


//#include <stdio.h>
//
//int main()
//{
//	int i, x, y, z = 1;					//x，y为x^y,z为最后三位数
//	printf("请输入两个数：\n");
//	scanf("%d%d", &x, &y);					//输入底数和幂数
//	for (i = 1; i <= y; i++)					//底数每乘一次就取其后三位数
//	{
//		z = z * x % 1000;
//	}
//	if (z > 100)
//	{
//		printf("最后三位数为：%d\n", z);
//	}
//	else if (z < 10)
//	{
//		printf("最后三位数为：%d\n", z);
//	}
//	else
//	{
//		printf("最后三位数为：%d\n", z);
//	}
//
//    return 0;
//}