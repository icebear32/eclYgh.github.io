#define _CRT_SECURE_NO_WARNINGS 1

//����ĳ���Ǹ���ĵڼ���

//��дһ�����������ĳ����û��Ӽ����������ꡢ�¡��գ�����Ļ������������Ǹ���ĵڼ��졣
//#include <stdio.h> 
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int days = 0;
//
//	printf("������ݣ�>");
//	scanf_s("%d", &year);
//	if (year % 4 == 0)
//	{
//		//����
//		printf("�����·ݣ�>");
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
//		//ƽ��
//		printf("�����·ݣ�>");
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
//		printf("�������\n");
//	}
//	
//	printf("����������>");
//	scanf_s("%d", &day);
//	days = days += day;
//	printf("�������%d��%d��%d��",year,month,day);
//	printf("�Ǹ���ĵ�%d�졣\n", days);
//
//	return 0;
//}

//��
//�Զ��庯��leap()���ж����������Ƿ�Ϊ���ꡣ��������:
int leap(int a)/*�Զ��庯��leapO����ȷ�����������Ƿ�Ϊ����*/
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)//�����ж�����
		return 1;/*�����귵��1*/
	else
		return 0;/* �������귵��0 */
}

int number(int year, int m, int d)/*�Զ��庯��number()�������������Ϊ����ĵڼ���*/
{
	int sum = 0, i;
	int a[12] = { 31,28,31,30,30,31,31,30,31,30,31 };/*����a���ƽ��ÿ�µ�����*/
	int b[12] = { 31,29,31,30,30,31,31,30,31,30,31 };/*����b�������ÿ�µ�����*/
	if (leap(year) == 1)/*�ж��Ƿ�Ϊ����*/
	{
		for (i = 0; i < m - 1; i++)
		{
			sum += b[i];/*������,�ۼ�����bǰm-1���·ݵ�����*/
		}
	}
	else
	{
		for (i = 0; i < m - 1; i++)
		{
			sum += a[i];/*������,�ۼ�����bǰm-1���·ݵ�����*/
		}
	}
	sum += d; /*��ǰ���ۼӵĽ����������, ���������*/
	return sum; /*���ؼ��������*/
}

#include <stdio.h>

int main()
{
	int year = 0, month = 0, day = 0, n;/*�������Ϊ��������*/
	printf("������������\n");
	scanf_s("%d%d%d", &year, &month, &day);/*����������*/
	n = number(year,month, day);/*���ú���number()*/
	printf("��%d��\n", n);

	return 0;
}


