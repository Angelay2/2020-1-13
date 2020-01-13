#include <stdio.h>
#include <stdlib.h>
// 这份代码实际上是在对数组内容进行初始化(赋值)
#define M 5
int main1(){
	float a[M];
	int i = 0;
	float* p = a;// p指向a

	for (; p < &a[M];){
		*p++ = 0.0f;
	}// 最后全为0



	system("pause");
	return 0;
}

// 两个指针指向同一数组
// 指针相减代表两个指针之间所经历的元素的个数
int main2(){
	int a[M];// M = 5,一个里面为一个int => 4字节
	int* p = a;// 指向第一个int的第一个字节
	int* q = &a[4];// 指向第5个元素的第一个字节处
	printf("%d\n", q - p);// 相减内容 结果为4 => 5-1 差了4个int
	// a = p , q = p + 16  差了16
	system("pause");
	return 0;
}

// 结果为8 = 16/2
// 两个指针都为short类型, 两个指针之间所经历的元素个数由 指针类型决定
int main3(){
	int a[M];//
	short* p = (short*)a;//
	short* q = (short*)&a[4];
	printf("%d\n", q - p);
	// (short*)p + 1 加上2个字节,指向第三个字节处 解引用为前两个字节
	system("pause");
	return 0;
}

// 求字符串长度
// p - s 经历了几个 char 个数就是字符串长度
// 两个指针指向同一块内存
int my_strlen(char* s){
	char* p = s;
	while (*p != '\0')
		p++;// p 指向'\0'
	return p - s;
}

int main4(){
	char* str = "hello bit!"; // s 指向h的左边 最后指向'\0'
	printf("%d\n", my_strlen(str)); // 结果= 10

	system("pause");
	return 0;
}

//可以访问最后一个元素的下一个元素的地址,但是不能访问他的内容 也不能写值
