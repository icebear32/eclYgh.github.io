/*
	��9��
	3�����²μӻ���3������ΪA��B��C��3������ΪX��Y��Z��
	������֪������˭��˭��飬���Ǿ��������е���λ,
	�õ����½��:
		A˵������X���;
		X˵����δ�����C;
		C˵������Z��顣
	�����º�֪�������ڿ���Ц��˵��ȫ�Ǽٻ���
	��ô������˭��˭�����?
*/
/*
	�á�a=1����ʾ����A������X��飬ͬ���������A��������X�����д�ɡ�a!=1����
	��������õ����±���ʽ:
		a! =1	A����X���
		c! =1	C����X���
		c! =3	C����Z���
	�ڷ�����ʱ����������������������
	��3�����ɲ��ܻ�Ϊ��ż������a!=b��b!=c��a!=c��
	������п��ܵ������������������ʽ�����������㡣
	�����������ʹ��������ʽ�Ľ��Ϊ�棬
	���������������ȷ�Ľ����

*/
//#include <stdio.h>
//
//int main() 
//{
//    int a, b, c;
//    for (a = 1; a <= 3; a++) //���a�����п�����
//    { 
//        for (b = 1; b <= 3; b++) //���b�����п�����
//        { 
//            for (c = 1; c <= 3; c++) //���c�����п�����
//            { 
//                if (a != 1 && c != 1 && c != 3 && a != b && b != c && a != c) 
//                {
//                    //�������ʽΪ������������������´�ѭ��
//                    printf("%c ���޸� a\n", 'x' + a - 1);
//                    printf("%c ���޸� b\n", 'x' + b - 1);
//                    printf("%c ���޸� c\n", 'x' + c - 1);
//                }
//            }
//        }
//    }
//
//    return 0;
//}