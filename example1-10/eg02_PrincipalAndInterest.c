//计算本息
//例2：用C语言计算存款利息。假设有本金1000元，想存一年，有三种方法可选择：
//活期，年利率为0.0036；
//一年期定期，年利率为0.0225；
//存两次半年定期，年利率为0.0198。

//#include <stdio.h>
//
//int main()
//{
//	float principal_rises = 1000;//本金
//	float principal_and_interest1;//本息
//	float principal_and_interest2;//本息
//	float principal_and_interest3;//本息
//
//	//活期
//	double current = 0.0036;//活期利息
//	principal_and_interest1 = principal_rises * (1 + current);//计算本息和
//	printf("活期，年利率为0.0036一年后所得到的本息:%f\n", principal_and_interest1);
//
//	//一年期定期
//	double one_fixed_deposit = 0.0225;//一年期定期利息
//	principal_and_interest2 = principal_rises * (1 + one_fixed_deposit);//计算本息和
//	printf("一年期定期，年利率为0.0225一年后所得到的本息:%f\n", principal_and_interest2);
//
//	//存两次半年定期
//	double two_fixed_deposit = 0.0192;//存两次半年定期利息
//	principal_and_interest3 = principal_rises * (1 + two_fixed_deposit / 2) * (1 + two_fixed_deposit / 2);//计算本息和
//	printf("存两次半年定期，年利率为0.0198一年后所得到的本息:%f\n", principal_and_interest3);
//
//	return 0;
//}
