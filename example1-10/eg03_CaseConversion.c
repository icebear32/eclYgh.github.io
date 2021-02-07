//大小写转换
//例3：C语言实现将大写字母A，输出为小写字母a

//解题思路：字符数据以ASCII码存储在内存的，形式与整数的存储形式相同，
//所以字符型数据和其他算术型数据之间可以互相赋值和运算。

//A对应ASCII码十进制数字是65，a对应ASCII码十进制数字是97，即大小写字母之间ASCII码差值为32

//#include <stdio.h>
//
//int main()
//{
//	////查看大写A的ASCII码表值
//	//char character_Big = 'A';//定义字符变量
//	//char character_Small = 'a';//定义字符变量并初始化
//	//printf("A = %d , a = %d", character_Big, character_Small);//注意这里的格式控制符是%d	//A = 65 , a = 97
//	
//	char character_Big = 'A';//定义字符变量并初始化，把赋值字母A赋值给character_Big
//	char character_Small;//定义字符变量
//	character_Small = character_Big + 32;// 用A的ASCII码表值 + 32
//
//	printf("%c的小写字母是：%c\n", character_Big, character_Small);//输出小写字母a
//
//	return 0;
//}