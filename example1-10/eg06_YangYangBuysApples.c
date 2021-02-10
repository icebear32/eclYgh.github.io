//阳阳买苹果

//阳阳买苹果,每个苹果0.8元,阳阳第一天买两个苹果第二天开始每天买前一天的两倍,
//直到购买的苹果个数为不超过100的最大值，编程求阳阳每天平均花多少钱?

//#include <stdio.h>
//
//int main()
//{
//	int num = 2;
//	float money = 0;
//	int day = 0;
//	
//	//while (num <= 100)	//err -- 因为不超过100，也包括不等于100
//	while (num < 100)
//	{
//		//money = 0.8 * num;//err -- 只计算每一天的钱数
//		money += 0.8 * num;
//		day++;
//		num = 2 * num;
//	}
//	printf("一共花了%f元钱\n", money);
//	printf("阳阳每天平均花%f元钱\n", money / day);
//
//	return 0;
//}