#include<stdio.h>
#include<Windows.h>

int main()
{
	int a = 10, b = 20;
	
	printf("交换前：a=%d,b=%d\n", a, b);
	
	a ^= b;
	b ^= a;
	a ^= b;
	
	printf("交换后：a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}


//int gcd(int x, int y) {
//	return x%y ?  gcd(y,x%y):y;
//}
//int main() {
//	int a = 10, b = 20;
//	int m=gcd(a, b);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}



//int main() {
//	
//	int a[10] = { 9,3,4,5,6,7,8,1,0,2 };
//	int i = 0;
//	int max = a[0];
//	
//	for (; i < sizeof(a)/sizeof(a[0]); i++) {
//		printf("%d, \b", a[i]);
//		
//	}
//	for (; i < sizeof(a) / sizeof(a[0]-1); i++) {
//	 
//			max=cmp(a[i], a[i + 1]);
//
//		}
//	printf("max=%d\n", max);
//	
//
//	system("pause");
//	return 0;
//}

//int swap(int *x, int *y)
//////{
//////	*x ^= *y;
//////	*y ^= *x;
//////	*x ^= *y;
//////	
//////}
//{
//	*x = *x + *y;
//	*y = *x  - *y;
//	*x = *x  - *y;
//	return *x, *y;
//}
//int main() {
//	int a = 10, b = 20;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	/*{
//		a = a^b;
//		b = a^b;
//		a = a^b;
//	}*/
//	/*{
//		a = (a + b);
//		b = a - b;
//		a = a-b;
//	}*/
//	swap(&a, &b);
//	printf("交换后:a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//int swap(int *x,int *y) {
//	int temp;
//	{
//		temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//	return *x, *y;
//}
//int main() {
//	int a = 10, b = 20;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后:a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//int main() {
//	int a = 10, b = 20;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	int temp;
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	printf("交换后:a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}