// 用递归法将一个长整型数n逆序输出。例如输入483，输出384。
// #include <iostream>
// using namespace std;
// void backward(int n)
// {
// 	cout << n % 10;
// 	if (n < 10)
// 		return;
// 	else
// 		backward(n / 10);
// }
// int main()
// {
// 	int n;
// 	cin >> n;
// 	backward(n);
// 	cout << endl;
// 	return 0;
// }

// 编写函数计算从n个元素中取m个元素的组合数C(m,n) 若无解输出wrong
// #include <iostream>
// using namespace std;
// int combinatorial(int n, int m)
// {
// 	int result = 1;
// 	for (int i = 0; i < n; i++)
// 	{
// 		result *= n;
// 		n--;
// 	}
// 	for (int i = 0; i < m; i++)
// 	{
// 		result /= m;
// 		m--;
// 	}
// 	return result;
// }
// int main()
// {
// 	int n, m;
// 	cin >> n >> m;
// 	if (m > n)
// 	{
// 		cout << "wrong";
// 	}
// 	else if (m = n)
// 	{
// 		cout << 1;
// 	}
// 	else
// 		cout << combinatorial(n, m);
// 	return 0;
// }              过不了

// #include <iostream>
// using namespace std;
// int fac(int n)
// {
// 	if (n <= 1)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return n * fac(n - 1);
// 	}
// }
// int main()
// {
// 	int n, m, result;
// 	cin >> n >> m;
// 	result = fac(n) / (fac(m) * fac(n - m));
// 	if (n < m)
// 	{
// 		cout << "wrong";
// 	}
// 	else
// 		cout << result;
// 	system("pause");
// 	return 0;
// }

// 已知f(x)=1/(1+x*x)，编写函数用梯形法计算f(x)在区间[a,b]的积分。 输入 0.5 1  输出 0.321751
// #include <iostream>
// using namespace std;
// double f(double x)
// {
// 	return 1 / (1 + x * x);
// }
// int main()
// {
// 	double a, b, l, s = 0;
// 	int k;
// 	cin >> a >> b;
// 	l = 0.0000001;
// 	k = (int)((b - a) / l);
// 	for (int i = 1; i <= k; i++)
// 	{
// 		s += f(a + i * l) * l;
// 	}
// 	cout << s;
// 	return 0;
// }

// /*已知ack函数对于m≥0和n≥0有定义：ack(0, n) = n + 1、ack(m, 0) = ack(m - 1, 1)、
// ack(m, n) = ack(m - 1, ack(m, n - 1))。输入m和n，求解ack函数。*/
// #include <iostream>
// using namespace std;
// int ack(int m, int n)
// {
// 	if (m == 0)
// 		return n + 1;
// 	if (n == 0)
// 		return ack(m - 1, 1);
// 	if (m != 0 && n != 0)
// 		return ack(m - 1, ack(m, n - 1));
// }
// int main()
// {
// 	int m, n;
// 	cin >> m >> n;
// 	cout << ack(m, n);
// 	return 0;
// }

// /*某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的。
// 加密函数如下：每位数字都加上5，然后用除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。*/
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int g = n % 10;
// 	int s = n / 10 % 10;
// 	int b = n / 100 % 10;
// 	int q = n / 1000;
// 	g = (g + 5) % 10;
// 	s = (s + 5) % 10;
// 	b = (b + 5) % 10;
// 	q = (q + 5) % 10;
// 	swap(g, q);
// 	swap(s, b);
// 	cout << g + s * 10 + b * 100 + q * 1000;
// 	return 0;
// }

// 编写函数fceil(x) ，返回大于等于x的最小整数，例如fceil(2.8) 为3，fceil(-2.8) 为 - 2。
// #include <iostream>
// using namespace std;
// int fceil(double x)
// {
// 	if (x - int(x) == 0)
// 	{
// 		return x;
// 	}
// 	else
// 	{
// 		if (x > 0)
// 		{
// 			return int(x) + 1;
// 		}
// 		else
// 			return int(x);
// 	}
// }
// int main()
// {
// 	double x;
// 	cin >> x;
// 	cout << fceil(x);
// 	return 0;
// }

// /*到了某公司发工资的日期，财务部的小明最近在考虑一个问题：如果每个员工的工资额都知道，
// 最少需要准备多少张人民币，才能在给每位员工发工资的时候都不用员工找零呢？
// 这里假设员工的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。
// 请设计一个函数int salary(n)，参数为某个员工的工资，返回值为最少发放的人民币张数。*/
// #include <iostream>
// using namespace std;
// int salary(int n)
// {
// 	int count = 0;
// 	count += n / 100;
// 	n %= 100;
// 	count += n / 50;
// 	n %= 50;
// 	count += n / 10;
// 	n %= 10;
// 	count += n / 5;
// 	n %= 5;
// 	count += n / 2;
// 	n %= 2;
// 	count += n;
// 	return count;
// }
// int main()
// {
// 	int n, m, count;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> m;
// 		count += salary(m);
// 	}
// 	cout << count;
// 	return 0;
// }

// /*设计一个函数sum求两个时间相加的结果A+B，A和B都是由3个整数组成，分别表示时、分、秒。
// 比如，假设A为34 45 56，就表示A所表示的时间是34小时45分钟56秒。
// 输入格式：输入数据每行有6个整数AH、AM、AS、BH、BM、BS，分别表示时间A和B所对应的时分秒。
// 输出格式：输出A+B，每个输出结果也是由时分秒3部分组成，同时也要满足时间的规则（即分和秒的取值范围在0~59），
// 每个输出占一行，并且所有的部分都可以用32位整数表示。
// 输入 1 2 3 4 5 6 输出 5 7 9*/
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int AH, AM, AS, BH, BM, BS, H, M, S;
// 	while (cin >> AH >> AM >> AS >> BH >> BM >> BS)
// 	{
// 		S = (AS + BS) % 60;
// 		M = (AM + BM) % 60 + (AS + BS) / 60;
// 		H = (AH + BH) + (AM + BM) / 60;
// 		cout << H << " " << M << " " << S;
// 	}
// 	return 0;
// }

//冒泡排序对10个数进行排序并输出
// #include <iostream>
// using namespace std;
// int main()
// {
//     const int n = 10;
//     int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j + 1] < arr[j])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//冒泡排序对10个数进行排序并输出到m.txt文件中
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     const int n = 10;
//     int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j + 1] < arr[j])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     ofstream out("m.txt");
//     for (int i = 0; i < n; i++)
//     {
//         out << arr[i] << " ";
//     }
//     out.close();
//     return 0;
// }

//用指针将输入的两个数按大小顺序输出
// #include <iostream>
// using namespace std;
// void swap(int *p1, int *p2)
// {
//     int t = *p1;
//     *p1 = *p2;
//     *p2 = t;
// }
// int main()
// {
//     int a, b, *p1 = &a, *p2 = &b;
//     cin >> a >> b;
//     if (a < b)
//     {
//         swap(p1, p2);
//     }
//     cout << "max=" << a << " min=" << b;
//     return 0;
// }

//用指针对输入的三个整数按由大到小的顺序输出
// #include <iostream>
// using namespace std;
// void swap(int *p1, int *p2)
// {
//     int t = *p1;
//     *p1 = *p2;
//     *p2 = t;
// }
// void exchange(int *p1, int *p2, int *p3)
// {
//     if (*p1 < *p2)
//     {
//         swap(p1, p2);
//     }
//     if (*p1 < *p3)
//     {
//         swap(p1, p3);
//     }
//     if (*p2 < *p3)
//     {
//         swap(p2, p3);
//     }
// }
// int main()
// {
//     int a, b, c, *p1 = &a, *p2 = &b, *p3 = &c;
//     cin >> a >> b >> c;
//     exchange(p1, p2, p3);

//     cout << a << " " << b << " " << c;
//     return 0;
// }

//用指针输出数组元素
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {50, 40, 30, 20, 10};
//     int *p = a;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << *p << " ";
//         p++;
//     }
//     return 0;
// }

//用指针输出数组元素
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {50, 40, 30, 20, 10};
//     int *p;
//     for (p = a; p < a + 5; p++)
//         cout << *p << " ";
//     return 0;
// }

//从键盘读入10个字符串，使用选择法对它们进行由小到大排序，并输出排序结果。
// #include <iostream>
// using namespace std;
// void SelectSort(string arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         string t = arr[i];
//         arr[i] = arr[min];
//         arr[min] = t;
//     }
// }
// int main()
// {
//     int const n = 10;
//     string arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     SelectSort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// //用选择法对整型数组的元素进行排序的函数。（用数组名作函数参数 ）
// #include <iostream>
// using namespace std;
// void select_sort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         int t = arr[min];
//         arr[min] = arr[i];
//         arr[i] = t;
//     }
// }
// int main()
// {
//     int a[10];
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> a[i];
//     }
//     select_sort(a, 10);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

//用指针实现数组逆序
// #include <iostream>
// using namespace std;
// void restre(int *start, int n)
// {
// 	int *end = start + n - 1;
// 	while (start < end)
// 	{
// 		int t = *start;
// 		*start = *end;
// 		*end = t;
// 		start++;
// 		end--;
// 	}
// }
// int main()
// {
// 	int a[5] = {1, 2, 3, 4, 5};
// 	restre(a, 5);
// 	for (int i = 0; i < 5; i++)
// 		cout << a[i] << " ";
// 	return 0;
// }

//数组实现选择排序
// #include <iostream>
// using namespace std;
// void select_sort(int array[], int n)
// {
// 	int i, j, k, t;
// 	for (i = 0; i < n - 1; i++)
// 	{
// 		k = i;
// 		for (j = i + 1; j < n; j++)
// 			if (array[j] < array[k])
// 				k = j;
// 		t = array[k];
// 		array[k] = array[i];
// 		array[i] = t;
// 	}
// }
// int main()
// {
// 	int a[10], i;
// 	cout << "enter the originl array:" << endl;
// 	for (i = 0; i < 10; i++)
// 		cin >> a[i];
// 	cout << endl;
// 	select_sort(a, 10);
// 	cout << "the sorted array:" << endl;
// 	for (i = 0; i < 10; i++)
// 		cout << a[i] << "  ";
// 	cout << endl;
// 	return 0;
// }

//指针实现选择排序
// #include <iostream>
// using namespace std;
// void select_sort(int *p, int n)
// {
// 	int i, j, k, t;
// 	for (i = 0; i < n - 1; i++)
// 	{
// 		k = i;
// 		for (j = i + 1; j < n; j++)
// 			if (*(p + j) < *(p + k))
// 				k = j;
// 		t = *(p + k);
// 		*(p + k) = *(p + i);
// 		*(p + i) = t;
// 	}
// }
// int main()
// {
// 	int a[10], i;
// 	cout << "enter the originl array:" << endl;
// 	for (i = 0; i < 10; i++)
// 		cin >> a[i];
// 	cout << endl;
// 	select_sort(a, 10);
// 	cout << "the sorted array:" << endl;
// 	for (i = 0; i < 10; i++)
// 		cout << a[i] << "  ";
// 	cout << endl;
// 	return 0;
// }

//求3*4矩阵中元素的最大值
// #include <iostream>
// using namespace std;
// int max_value(int array[][4])
// {
// 	int i, j, max;
// 	max = array[0][0];
// 	for (i = 0; i < 3; i++)
// 		for (j = 0; j < 4; j++)
// 			if (array[i][j] > max)
// 				max = array[i][j];
// 	return max;
// }
// int main()
// {
// 	int a[3][4] = {{11, 32, 45, 67}, {22, 44, 66, 88}, {15, 72, 43, 37}};
// 	cout << "max value is " << max_value(a) << endl;
// 	return 0;
// }

//定义一个字符数组并输出
// #include <iostream>
// using namespace std;
// int main()
// {
// 	char str[] = "I love CHINA!";
// 	cout << str << endl;
// 	return 0;
// }

//定义一个字符串变量并输出
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
// 	string str = "I love CHINA!";
// 	cout << str << endl;
// 	return 0;
// }

//定义一个字符指针变量并输出其指向的字符串
// #include <iostream>
// using namespace std;
// int main()
// {
// 	char *str = "I love CHINA!";
// 	cout << str << endl;
// 	cout << str + 2; //love CHINA!
// 	return 0;
// }

//编写函数用起泡法对实型数组元素进行由大到小排序，并用主函数调用它。
// #include <iostream>
// using namespace std;
// void bubble_sort(int arr[], int n)
// {
// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		for (int j = 0; j < n - 1 - i; j++)
// 		{
// 			if (arr[j] < arr[j + 1])
// 			{
// 				int temp = arr[j];
// 				arr[j] = arr[j + 1];
// 				arr[j + 1] = temp;
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	const int n = 10;
// 	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	bubble_sort(arr, n);
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// 	return 0;
// }

//编写函数求一个保存在字符数组中的字符串的长度，并用主函数调用它。
// #include <iostream>
// using namespace std;
// int my_strlen(char *str)
// {
// 	int len = 0;
// 	while (*str != '\0')
// 	{
// 		len++;
// 		str++;
// 	}
// 	return len;
// }
// int main()
// {
// 	char ch[] = "hello";
// 	cout << my_strlen(ch);
// 	return 0;
// }

//编写函数求整型二维数组中最大元素及其下标，并用主函数调用它。
// #include <iostream>
// using namespace std;
// const int row = 3;
// const int column = 4;
// void max(int arr[row][column])
// {
// 	int max = arr[0][0], x, y;
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < column; j++)
// 		{
// 			if (arr[i][j] > max)
// 			{
// 				max = arr[i][j];
// 				x = i;
// 				y = j;
// 			}
// 		}
// 	}
// 	cout << max << " " << x << " " << y;
// }
// int main()
// {
// 	int arr[row][column] = {{1, 4, 7, 8}, {5, 2, 0, 3}, {6, 9, 11, 10}};
// 	max(arr);
// 	return 0;
// }

/*有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数。
编写函数实现以上功能，在主函数中输入n个整数和m，并输出调整后的n个数。*/
/*
#include <iostream>
using namespace std;
void move(int a[], int n, int m)
{
	int b[100], i;
	for (i = 0; i < m; i++)
	{
		b[i] = a[n - m + i];
	}
	for (i = n - 1; i >= m; i--)
	{
		a[i] = a[i - m];
	}
	for (i = 0; i < m; i++)
	{
		a[i] = b[i];
	}
}
int main()
{
	int a[100], n, m, i;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	move(a, n, m);
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}

#include <iostream>
using namespace std;
void move(int a[], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		int temp = a[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = temp;
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	move(a, n, m);
	for (int j = 0; j < n; j++)
	{
		cout << a[j] << " ";
	}
	return 0;
}
*/

//将数组中n个数后移m位
/*
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	while (m-- != 0)
	{ //向后移动 每一位和最后一位交换
		for (int i = 0; i < n; i++)
		{
			int t = arr[n - 1];
			arr[n - 1] = arr[i];
			arr[i] = t;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
*/

/*
//交换两个数的三种方式
//传值调用
#include <iostream>
using namespace std;
void swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main()
{
	int a = 3, b = 5;
	swap(a, b);
	cout << a << " " << b;
	return 0;
}
//传址调用
#include <iostream>
using namespace std;
void swap(int *q1, int *q2)
{
	int t;
	t = *q1;
	*q1 = *q2;
	*q2 = t;
}
int main()
{
	int a = 3, b = 5;
	swap(&a, &b);
	cout << a << " " << b;
	return 0;
}
//引用调用
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main()
{
	int a = 3, b = 5;
	swap(a, b);
	cout << a << " " << b;
	return 0;
}
*/

/*
//分析下面程序的输出结果。
#include <iostream>
using namespace std;
void fun(int &x, int *y, int z)
{
	int t = 3;
	x = t * x;
	*y = *y % t;
	z = z / t;
}
int main()
{
	int a = 3, b = 5, c = 7;
	fun(a, &b, c);
	cout << a << "," << b << "," << c << endl;
	return 0;
}
9,2,7
*/

/*
//结构体应用
#include <iostream>
#include <string>
using namespace std;
struct student
{
	int num;
	string name;
	char sex;
	double height;
};
int main()
{
	student s1;
	s1.num = 666;
	s1.name = "lx";
	s1.sex = 'M';
	s1.height = 1.75;
	cout << "学号" << s1.num << endl;
	cout << "姓名" << s1.name << endl;
	cout << "性别" << s1.sex << endl;
	cout << "身高" << s1.height << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
struct scoreList
{
	string name;
	int num;
	double chineseScore;
	double mathScore;
	double englishScore;
};
int main()
{
	scoreList s1;
	s1.name = "李明";
	s1.num = 123;
	s1.chineseScore = 80.5;
	s1.mathScore = 90;
	s1.englishScore = 95;
	cout << "姓名:" << s1.name << endl;
	cout << "学号:" << s1.num << endl;
	cout << "语文成绩:" << s1.chineseScore << endl;
	cout << "数学成绩:" << s1.mathScore << endl;
	cout << "英语成绩:" << s1.englishScore << endl;
	return 0;
}
*/

/*
//设有3个候选人Li、Zhang、Fan，今有10个人参加投票, 从键盘输入这10个人所投的候选人的名字，统计并输出投票结果
#include <iostream>
#include <cstring>
using namespace std;
struct Person
{
	string name;
	int count;
};
int main()
{
	Person leader[3] = {{"Li", 0}, {"Zhang", 0}, {"Fan", 0}};
	string name;
	for (int i = 0; i < 10; i++)
	{
		cin >> name;
		for (int j = 0; j < 3; j++)
		{
			if (name == leader[j].name)
			{
				leader[j].count++;
				break;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << leader[i].name << " " << leader[i].count << endl;
	}
	system("pause");
	return 0;
}
*/

/*
//计算某一日是该年的第几天，用结构体和数组相关知识
#include <iostream>
using namespace std;
struct
{
	int year;
	int month;
	int day;
} date;
int main()
{
	int num = 0;
	cin >> date.year >> date.month >> date.day;
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; i < date.month - 1; i++)
	{
		num += day[i];
	}
	if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0))
	{
		num += 1;
	}
	num += date.day;
	cout << date.year << "年" << date.month << "月" << date.day << "日是该年第" << num << "天" << endl;
	return 0;
}
*/

/*

//职工数据包括：职工号、职工姓名、性别、年龄、工龄、工资、通讯地址。
//a.定义一个结构体变量，从键盘输入个数据项的值，再显示出来。
//b.编制程序使用结构体数组从键盘输入10个职工的信息，然后写入文件“zhgxx.txt”.
//c.将文件“zhgxx.txt”中的职工信息读入，并输出工龄最长的职工的所有信息。
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct employee
{
	int num;
	string name;
	string sex;
	int age;
	int workYear;
	int salary;
	string address;
} e1, e[10];
int main()
{
	cin >> e1.num >> e1.name >> e1.sex >> e1.age >> e1.workYear >> e1.salary >> e1.address;
	cout << e1.num << " " << e1.name << " " << e1.sex << " " << e1.age << " " << e1.workYear << " " << e1.salary << " " << e1.address;
	ofstream out("zhgxx.txt");
	if (!out)
	{
		cout << "open error!" << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> e[i].num >> e[i].name >> e[i].sex >> e[i].age >> e[i].workYear >> e[i].salary >> e[i].address;
		out << e[i].num << " " << e[i].name << " " << e[i].sex << " " << e[i].age << " " << e[i].workYear << " " << e[i].salary << " " << e[i].address;
		out << endl;
	}
	out.close();
	ifstream in("zhgxx.txt");
	if (!in)
	{
		cout << "open error!" << endl;
		exit(1);
	}
	int maxWorkYear = 0, i, j;
	for (i = 0; i < 10; i++)
	{
		in >> e[i].num >> e[i].name >> e[i].sex >> e[i].age >> e[i].workYear >> e[i].salary >> e[i].address;
		if (e[i].workYear > maxWorkYear)
		{
			maxWorkYear = e[i].workYear;
			j = i;
		}
	}
	cout << e[j].num << " " << e[j].name << " " << e[j].sex << " " << e[j].age << " " << e[j].workYear << " " << e[j].salary << " " << e[j].address;
	in.close();
	return 0;
}
*/

/*
//读入文件"student.data"中所有学生的信息，每个学生包括学号、姓名、性别、年龄、三门课程成绩。
//编写函数compute,计算每个学生的总分和平均分，再定义函数sort按照平均成绩从高到低进行排序，
//定义函数fwrite将每个学生的上述信息再加上计算得到的总分和平均分按名次写入到新的文件"studentscore.data"。
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct student
{
	int num;
	string name;
	string sex;
	int age;
	int score1;
	int score2;
	int score3;
} stu[100], temp;
int compute(int a, int b, int c)
{
	int sum = a + b + c;
	return sum;
}
void sort(student *stu, int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (compute(stu[j + 1].score1, stu[j + 1].score2, stu[j + 1].score3) > compute(stu[j].score1, stu[j].score2, stu[j].score3))
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}
void fwrite(student *stu, int count, int *sum, double *ave, ofstream &out)
{
	for (int i = 0; i < count; i++)
	{
		sum[i] = compute(stu[i].score1, stu[i].score2, stu[i].score3);
		ave[i] = sum[i] / 3.0;
		out << stu[i].num << " " << stu[i].name << " " << stu[i].sex << " " << stu[i].age << " " << stu->score1 << " " << stu->score2 << " " << stu[i].score3 << " " << sum[i] << " " << ave[i] << endl;
	}
}
int main()
{
	ifstream in("student.txt");
	if (!in)
	{
		cout << "open error!" << endl;
		exit(1);
	}
	int sum[100], count = 0;
	double ave[100];
	for (int i = 0; !in.eof(); i++)
	{
		in >> stu[count].num >> stu[count].name >> stu[count].sex >> stu[count].age >> stu[count].score1 >> stu[count].score2 >> stu[count].score3;
		sum[count] = compute(stu[count].score1, stu[count].score2, stu[count].score3);
		ave[count] = sum[count] / 3.0;
		count++;
	}
	in.close();
	sort(stu, count);
	ofstream out("studentscore.data");
	if (!out)
	{
		cout << "open error!" << endl;
		exit(1);
	}
	fwrite(stu, count, sum, ave, out);
	out.close();
	return 0;
}
*/

/*
//有两个n（1≤n≤100）个元素的一维数组A和B，其中A来自输入，将其“赋值”给B（即元素一一复制到B中），输出B数组下标为奇数的元素。
#include <iostream>
using namespace std;
int main()
{
	int a[100], b[100];
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	for (i = 1; i < n; i += 2)
	{
		cout << b[i] << " ";
	}
	return 0;
}
*/

/*
//输出一个nxn（1≤n≤100）二维数组A左上角的元素（元素值不超过9）
#include <iostream>
using namespace std;
int main()
{
	int a[100][100];
	int n, i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
*/

/*
//计算一个NxM（1≤N、M≤100）二维数组A所有边沿元素的和s1，所有内芯元素的和s2，输出s1-s2
#include <iostream>
using namespace std;
int main()
{
	int a[100][100];
	int n, m, i, j, s1 = 0, s2 = 0;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
			{
				s1 += a[i][j];
			}
			else
			{
				s2 += a[i][j];
			}
		}
	}
	cout << s1 - s2;
	return 0;
}
*/

/*
//编写一个函数double avg(int A[],int s,int e)，计算一个N（1≤N≤100）个元素的一维数组A，
//从第s个（以0为开始，下同），到第e个元素的平均值，其中0≤s＜e＜N。在主函数输入输出，调用函数avg计算。
#include <iostream>
#include <iomanip>
using namespace std;
double average(int A[], int s, int e)
{
	double sum = 0;
	int i;
	for (i = s; i <= e; i++)
	{
		sum += A[i];
	}
	return sum / (e - s + 1);
}
int main()
{
	int a[100];
	int n, s, e, i;
	double avg;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> s >> e;
	avg = average(a, s, e);
	cout << fixed << setprecision(6) << avg;
	return 0;
}
*/

/*
//编写一个函数void BubbleSort(int A[],int s,int m)，能够从数组A第s个（以0为开始）元素起始，
//连续m个元素使用冒泡法降序排序。数组A最多有N（1≤N≤100）个元素，0≤s＜N，且s+m≤N。在主函数输入输出，调用函数BubbleSort求解。
#include <iostream>
using namespace std;
void BubbleSort(int arr[], int s, int m)
{
	int i, j;
	for (int i = s; i < s+m-1; i++)
	{
		for (int j = s; j < s+m-1; j++)
		{
			if (arr[j+1]>arr[j])
			{
				int t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
		}
	}
}
int main()
{
	int a[100];
	int n, s, m, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> s >> m;
	BubbleSort(a, s, m);
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
*/

/*
//编写一个函数void SelectionSort(int A[],int s,int m)，能够从数组A第s个（以0为开始）元素起始，
//连续m个元素使用选择法降序排序。数组A最多有N（1≤N≤100）个元素，0≤s＜N，且s+m≤N。在主函数输入输出，调用函数SelectionSort求解。
#include <iostream>
using namespace std;
void SelectionSort(int arr[], int s, int m)
{
	int i, j, min;
	for (i = s; i < s+m-1; i++)
	{
		min = i;
		for (j = i+1; j < s + m; j++)
		{
			if (arr[j] > arr[min])
				min = j;
		}
			int t = arr[i];
			arr[i] = arr[min];
			arr[min] = t;
	}
}
int main()
{

	int a[100], n, s, m, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> s >> m;
	SelectionSort(a, s, m);
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
*/

/*
//题目内容：比基堡海滩有一个有n个触手的恐怖水母，蟹老板希望雇佣一些海绵宝宝把它杀死（即砍掉所有触手）。现在有m个海绵宝宝可以雇佣，
//一个能力值为x的海绵宝宝可以砍掉恐怖水母一只直径不超过x的触手，且需要支付x个金币。如何雇佣海绵宝宝才能杀死水母，
//并且支付的金币最少？需要注意一个海绵宝宝只能砍掉一只触手，并且不能被雇佣两次。
//输入格式：第1行为正整数n和m，第2行为水母n只触手的直径，第3行为m个海绵宝宝的能力值，所有数据用空格间隔。
//输出格式：输出最少金币数。如果无解，输出NULL
#include <iostream>
using namespace std;
void BubbleSort(int A[], int s)
{
	int i, j, t;
	for (i = 0; i < s - 1; i++)
	{
		for (j = 0; j < s - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
		}
	}
}
int main()
{
	int a[5], b[10], n, m, k, i, j, s = 0;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (j = 0; j < m; j++)
		cin >> b[j];
	BubbleSort(a, n);
	BubbleSort(b, m);
	for (i = 0; i < n; i++)
	{
		for (j = i; j < m; j++)
		{
			if (a[i] <= b[j])
			{
				s = s + b[j];
				break;
			}
		}
	}
	if (a[0] > b[m - 1])
		cout << "NULL" << endl;
	else
		cout << s << endl;
	return 0;
}
*/

/*
//山迪要出席一个周末表演晚会，他在会上要表演卡片魔术。他有n（0＜n≤100）张卡片，每张卡片上都标明了1～1000之间的某个数字，
//这n张卡片本来是有序的，可是山迪的助手不小心把卡片打乱了。这可急坏了山迪，忙令助手迅速通过一些操作把这些卡片变回有序的，
//而山迪的助手是个思想简单的人，他能做的操作只有一种：交换任意两张卡片的位置。
//现在，山迪想知道助手最少交换几次可以达到目的，以便尽快决定是否替换这个魔术表演，聪明的你能帮助他么？
#include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, j, count = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{

				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
*/

/*
//有一个N（1≤N≤100）个元素的数组A，按由小到大顺序存放。请编写程序，输入一个数m，用二分查找法找出该数在数组中的位置
//（即数组的下标）。如果该数不在数组中，则输出null。
#include <iostream>
using namespace std;
int main()
{
	int n, a[100], m, i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	int l = n - 1, left = 0, right = l - 1, mid;
	cin >> m;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] < m)
		{
			left = mid + 1;
		}
		else if (a[mid] > m)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}
	if (left > right)
		cout << "null";
	else
		cout << mid << endl;
}
*/

/*
//某商店经销一种货物，货物成箱购进，成箱卖出，购进和卖出时以重量为单位，各箱的重量不一样，
//因此，商店需要记录下目前库存的货物的总重量，现在要求用C++语言来模拟商店货物购进和卖出的情况。
#include <iostream>
using namespace std;
class Goods
{
public:
	Goods(int w);
	~Goods();
	int Weight();
	static int TotalWeight();

private:
	int weight;
	static int totalWeight;
};
Goods::Goods(int w)
{
	weight = w;
	totalWeight += w;
}
Goods::~Goods()
{
	totalWeight -= weight;
}
int Goods::Weight()
{
	return weight;
}
int Goods::TotalWeight()
{
	return totalWeight;
}
int Goods::totalWeight = 0;
int main()
{
	int w;
	cin >> w;
	Goods g1(w);
	cin >> w;
	Goods g2(w);
	cout << Goods::TotalWeight() << endl;
	return 0;
}
*/

/*
//计算两个时刻相差的秒数
#include <iostream>
#include <cmath>
using namespace std;
class Time
{
public:
	Time(int x, int y, int z) : hour(x), min(y), sec(z) {}
	friend int operator-(Time &, Time &);
	void ShowTime();

private:
	int hour, min, sec;
};
int operator-(Time &t1, Time &t2)
{
	int s1 = 0, s2 = 0;
	s1 = t1.hour * 3600 + t1.min * 60 + t1.sec;
	s2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
	return abs(s1 - s2);
}
void Time::ShowTime()
{
	cout << hour << ":" << min << ":" << sec << endl;
}
int main()
{
	Time t1(10, 30, 40), t2(9, 40, 50);
	int s = t1 - t2;
	t1.ShowTime();
	t2.ShowTime();
	cout << "两个时刻的时间差为：" << s << "秒" << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
class Time
{
public:
	Time(int x, int y, int z) : hour(x), min(y), sec(z) {}
	friend int operator-(Time &, Time &);
	void ShowTime();

private:
	int hour, min, sec;
};
int operator-(Time &t1, Time &t2)
{
	int s = 0;
	if (t1.sec > t2.sec)
	{
		s += (t1.sec - t2.sec);
	}
	else
	{
		s += (60 - t2.sec) + t1.sec;
		t1.min--;
	}
	if (t1.min > t2.min)
	{
		s += (t1.min - t2.min) * 60;
	}
	else
	{
		s += ((60 - t2.min) + t1.min) * 60;
		t1.hour--;
	}
	s += (t1.hour - t2.hour) * 60 * 60;
	return abs(s);
}
void Time::ShowTime()
{
	cout << hour << ":" << min << ":" << sec << endl;
}
int main()
{
	Time t1(9, 40, 50), t2(10, 30, 40);
	int s = t1 - t2;
	t1.ShowTime();
	t2.ShowTime();
	cout << "两个时刻的时间差为：" << s << "秒" << endl;
	return 0;
}
*/

/*
//对时间的秒进行++
#include <iostream>
using namespace std;
class Time
{
public:
	Time(int x, int y, int z) : hour(x), min(y), sec(z) {}
	void showTime()
	{
		cout << hour << ":" << min << ":" << sec << endl;
	}
	Time operator++()
	{
		++sec;
		if (sec == 60)
		{
			++min;
			sec = 0;
		}
		if (min == 60)
		{
			++hour;
			min = 0;
		}
		if (hour == 24)
		{
			hour = 0;
		}
		return Time(hour, min, sec);
	}
	Time operator++(int)
	{
		Time T(hour, min, sec);
		++sec;
		if (sec == 60)
		{
			++min;
			sec = 0;
		}
		if (min == 60)
		{
			++hour;
			min = 0;
		}
		if (hour == 24)
		{
			hour = 0;
		}
		return T;
	}

private:
	int hour, min, sec;
};
int main()
{
	Time T1(11, 59, 59), T2(23, 59, 59);
	++T1;
	T1.showTime();
	T1++;
	T1.showTime();
	++T2;
	T2.showTime();
	T2++;
	T2.showTime();
	return 0;
}
*/