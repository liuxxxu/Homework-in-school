// �õݹ鷨��һ����������n�����������������483�����384��
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

// ��д���������n��Ԫ����ȡm��Ԫ�ص������C(m,n) ���޽����wrong
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
// }              ������

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

// ��֪f(x)=1/(1+x*x)����д���������η�����f(x)������[a,b]�Ļ��֡� ���� 0.5 1  ��� 0.321751
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

// /*��֪ack��������m��0��n��0�ж��壺ack(0, n) = n + 1��ack(m, 0) = ack(m - 1, 1)��
// ack(m, n) = ack(m - 1, ack(m, n - 1))������m��n�����ack������*/
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

// /*ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵġ�
// ���ܺ������£�ÿλ���ֶ�����5��Ȼ���ó���10��������������֣��ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������*/
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

// ��д����fceil(x) �����ش��ڵ���x����С����������fceil(2.8) Ϊ3��fceil(-2.8) Ϊ - 2��
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

// /*����ĳ��˾�����ʵ����ڣ����񲿵�С������ڿ���һ�����⣺���ÿ��Ա���Ĺ��ʶ֪����
// ������Ҫ׼������������ң������ڸ�ÿλԱ�������ʵ�ʱ�򶼲���Ա�������أ�
// �������Ա���Ĺ��ʶ�������������λԪ�������һ����100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ���֡�
// �����һ������int salary(n)������Ϊĳ��Ա���Ĺ��ʣ�����ֵΪ���ٷ��ŵ������������*/
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

// /*���һ������sum������ʱ����ӵĽ��A+B��A��B������3��������ɣ��ֱ��ʾʱ���֡��롣
// ���磬����AΪ34 45 56���ͱ�ʾA����ʾ��ʱ����34Сʱ45����56�롣
// �����ʽ����������ÿ����6������AH��AM��AS��BH��BM��BS���ֱ��ʾʱ��A��B����Ӧ��ʱ���롣
// �����ʽ�����A+B��ÿ��������Ҳ����ʱ����3������ɣ�ͬʱҲҪ����ʱ��Ĺ��򣨼��ֺ����ȡֵ��Χ��0~59����
// ÿ�����ռһ�У��������еĲ��ֶ�������32λ������ʾ��
// ���� 1 2 3 4 5 6 ��� 5 7 9*/
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

//ð�������10���������������
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

//ð�������10�����������������m.txt�ļ���
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

//��ָ�뽫���������������С˳�����
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

//��ָ�������������������ɴ�С��˳�����
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

//��ָ���������Ԫ��
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

//��ָ���������Ԫ��
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

//�Ӽ��̶���10���ַ�����ʹ��ѡ�񷨶����ǽ�����С�������򣬲������������
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

// //��ѡ�񷨶����������Ԫ�ؽ�������ĺ������������������������� ��
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

//��ָ��ʵ����������
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

//����ʵ��ѡ������
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

//ָ��ʵ��ѡ������
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

//��3*4������Ԫ�ص����ֵ
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

//����һ���ַ����鲢���
// #include <iostream>
// using namespace std;
// int main()
// {
// 	char str[] = "I love CHINA!";
// 	cout << str << endl;
// 	return 0;
// }

//����һ���ַ������������
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
// 	string str = "I love CHINA!";
// 	cout << str << endl;
// 	return 0;
// }

//����һ���ַ�ָ������������ָ����ַ���
// #include <iostream>
// using namespace std;
// int main()
// {
// 	char *str = "I love CHINA!";
// 	cout << str << endl;
// 	cout << str + 2; //love CHINA!
// 	return 0;
// }

//��д���������ݷ���ʵ������Ԫ�ؽ����ɴ�С���򣬲�����������������
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

//��д������һ���������ַ������е��ַ����ĳ��ȣ�������������������
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

//��д���������Ͷ�ά���������Ԫ�ؼ����±꣬������������������
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

/*��n��������ʹǰ�����˳�������m��λ�ã����m���������ǰ��m������
��д����ʵ�����Ϲ��ܣ���������������n��������m��������������n������*/
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

//��������n��������mλ
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
	{ //����ƶ� ÿһλ�����һλ����
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
//���������������ַ�ʽ
//��ֵ����
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
//��ַ����
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
//���õ���
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
//��������������������
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
//�ṹ��Ӧ��
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
	cout << "ѧ��" << s1.num << endl;
	cout << "����" << s1.name << endl;
	cout << "�Ա�" << s1.sex << endl;
	cout << "���" << s1.height << endl;
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
	s1.name = "����";
	s1.num = 123;
	s1.chineseScore = 80.5;
	s1.mathScore = 90;
	s1.englishScore = 95;
	cout << "����:" << s1.name << endl;
	cout << "ѧ��:" << s1.num << endl;
	cout << "���ĳɼ�:" << s1.chineseScore << endl;
	cout << "��ѧ�ɼ�:" << s1.mathScore << endl;
	cout << "Ӣ��ɼ�:" << s1.englishScore << endl;
	return 0;
}
*/

/*
//����3����ѡ��Li��Zhang��Fan������10���˲μ�ͶƱ, �Ӽ���������10������Ͷ�ĺ�ѡ�˵����֣�ͳ�Ʋ����ͶƱ���
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
//����ĳһ���Ǹ���ĵڼ��죬�ýṹ����������֪ʶ
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
	cout << date.year << "��" << date.month << "��" << date.day << "���Ǹ����" << num << "��" << endl;
	return 0;
}
*/

/*

//ְ�����ݰ�����ְ���š�ְ���������Ա����䡢���䡢���ʡ�ͨѶ��ַ��
//a.����һ���ṹ��������Ӽ���������������ֵ������ʾ������
//b.���Ƴ���ʹ�ýṹ������Ӽ�������10��ְ������Ϣ��Ȼ��д���ļ���zhgxx.txt��.
//c.���ļ���zhgxx.txt���е�ְ����Ϣ���룬������������ְ����������Ϣ��
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
//�����ļ�"student.data"������ѧ������Ϣ��ÿ��ѧ������ѧ�š��������Ա����䡢���ſγ̳ɼ���
//��д����compute,����ÿ��ѧ�����ֺܷ�ƽ���֣��ٶ��庯��sort����ƽ���ɼ��Ӹߵ��ͽ�������
//���庯��fwrite��ÿ��ѧ����������Ϣ�ټ��ϼ���õ����ֺܷ�ƽ���ְ�����д�뵽�µ��ļ�"studentscore.data"��
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
//������n��1��n��100����Ԫ�ص�һά����A��B������A�������룬���䡰��ֵ����B����Ԫ��һһ���Ƶ�B�У������B�����±�Ϊ������Ԫ�ء�
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
//���һ��nxn��1��n��100����ά����A���Ͻǵ�Ԫ�أ�Ԫ��ֵ������9��
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
//����һ��NxM��1��N��M��100����ά����A���б���Ԫ�صĺ�s1��������оԪ�صĺ�s2�����s1-s2
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
//��дһ������double avg(int A[],int s,int e)������һ��N��1��N��100����Ԫ�ص�һά����A��
//�ӵ�s������0Ϊ��ʼ����ͬ��������e��Ԫ�ص�ƽ��ֵ������0��s��e��N����������������������ú���avg���㡣
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
//��дһ������void BubbleSort(int A[],int s,int m)���ܹ�������A��s������0Ϊ��ʼ��Ԫ����ʼ��
//����m��Ԫ��ʹ��ð�ݷ�������������A�����N��1��N��100����Ԫ�أ�0��s��N����s+m��N����������������������ú���BubbleSort��⡣
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
//��дһ������void SelectionSort(int A[],int s,int m)���ܹ�������A��s������0Ϊ��ʼ��Ԫ����ʼ��
//����m��Ԫ��ʹ��ѡ�񷨽�����������A�����N��1��N��100����Ԫ�أ�0��s��N����s+m��N����������������������ú���SelectionSort��⡣
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
//��Ŀ���ݣ��Ȼ�����̲��һ����n�����ֵĿֲ�ˮĸ��з�ϰ�ϣ����ӶһЩ���౦������ɱ�������������д��֣���������m�����౦�����Թ�Ӷ��
//һ������ֵΪx�ĺ��౦�����Կ����ֲ�ˮĸһֱֻ��������x�Ĵ��֣�����Ҫ֧��x����ҡ���ι�Ӷ���౦������ɱ��ˮĸ��
//����֧���Ľ�����٣���Ҫע��һ�����౦��ֻ�ܿ���һֻ���֣����Ҳ��ܱ���Ӷ���Ρ�
//�����ʽ����1��Ϊ������n��m����2��Ϊˮĸnֻ���ֵ�ֱ������3��Ϊm�����౦��������ֵ�����������ÿո�����
//�����ʽ��������ٽ����������޽⣬���NULL
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
//ɽ��Ҫ��ϯһ����ĩ������ᣬ���ڻ���Ҫ���ݿ�Ƭħ��������n��0��n��100���ſ�Ƭ��ÿ�ſ�Ƭ�϶�������1��1000֮���ĳ�����֣�
//��n�ſ�Ƭ����������ģ�����ɽ�ϵ����ֲ�С�İѿ�Ƭ�����ˡ���ɼ�����ɽ�ϣ�æ������Ѹ��ͨ��һЩ��������Щ��Ƭ�������ģ�
//��ɽ�ϵ������Ǹ�˼��򵥵��ˣ��������Ĳ���ֻ��һ�֣������������ſ�Ƭ��λ�á�
//���ڣ�ɽ����֪���������ٽ������ο��ԴﵽĿ�ģ��Ա㾡������Ƿ��滻���ħ�����ݣ����������ܰ�����ô��
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
//��һ��N��1��N��100����Ԫ�ص�����A������С����˳���š����д��������һ����m���ö��ֲ��ҷ��ҳ������������е�λ��
//����������±꣩������������������У������null��
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
//ĳ�̵꾭��һ�ֻ��������乺������������������������ʱ������Ϊ��λ�������������һ����
//��ˣ��̵���Ҫ��¼��Ŀǰ���Ļ����������������Ҫ����C++������ģ���̵���ﹺ���������������
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
//��������ʱ����������
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
	cout << "����ʱ�̵�ʱ���Ϊ��" << s << "��" << endl;
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
	cout << "����ʱ�̵�ʱ���Ϊ��" << s << "��" << endl;
	return 0;
}
*/

/*
//��ʱ��������++
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