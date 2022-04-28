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

//从键盘读入10个字符串，使用选择法对它们进行由小到大排序，并输出排序结果。（用指针的方法实现）
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
// void reverse(int *p, int n)
// {
//     int *q = n-p - 1;
//     while (p < q)
//     {
//         int t = *p;
//         *p = *q;
//         *q = t;
//         p++;
//         q--;
//     }
// }
// int main()
// {
//     const int n = 10;
//     int a[n], i;
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[n];
//     }
//     reverse(a, n);
//     for (i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     system("pause");
//     return 0;
// }

#include <iostream>
using namespace std;
void restre(int *p, int n)
{
    int *q = p + n - 1;
    for (; p < q; p++, q--)
    {
        int t = *p;
        *p = *q;
        *q = t;
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    restre(a, 5);
    for (i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}