#include <stdio.h>
#include <stdlib.h>
// ��ݴ���ʵ�������ڶ��������ݽ��г�ʼ��(��ֵ)
#define M 5
int main1(){
	float a[M];
	int i = 0;
	float* p = a;// pָ��a

	for (; p < &a[M];){
		*p++ = 0.0f;
	}// ���ȫΪ0



	system("pause");
	return 0;
}

// ����ָ��ָ��ͬһ����
// ָ�������������ָ��֮����������Ԫ�صĸ���
int main2(){
	int a[M];// M = 5,һ������Ϊһ��int => 4�ֽ�
	int* p = a;// ָ���һ��int�ĵ�һ���ֽ�
	int* q = &a[4];// ָ���5��Ԫ�صĵ�һ���ֽڴ�
	printf("%d\n", q - p);// ������� ���Ϊ4 => 5-1 ����4��int
	// a = p , q = p + 16  ����16
	system("pause");
	return 0;
}

// ���Ϊ8 = 16/2
// ����ָ�붼Ϊshort����, ����ָ��֮����������Ԫ�ظ����� ָ�����;���
int main3(){
	int a[M];//
	short* p = (short*)a;//
	short* q = (short*)&a[4];
	printf("%d\n", q - p);
	// (short*)p + 1 ����2���ֽ�,ָ��������ֽڴ� ������Ϊǰ�����ֽ�
	system("pause");
	return 0;
}

// ���ַ�������
// p - s �����˼��� char ���������ַ�������
// ����ָ��ָ��ͬһ���ڴ�
int my_strlen(char* s){
	char* p = s;
	while (*p != '\0')
		p++;// p ָ��'\0'
	return p - s;
}

int main4(){
	char* str = "hello bit!"; // s ָ��h����� ���ָ��'\0'
	printf("%d\n", my_strlen(str)); // ���= 10

	system("pause");
	return 0;
}

//���Է������һ��Ԫ�ص���һ��Ԫ�صĵ�ַ,���ǲ��ܷ����������� Ҳ����дֵ
