// 離散事件模擬作業.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

void excercise1();
void excercise2(int seed1, int seed2);
void excercise3(int seed);
void excercise4();

int main()
{
	excercise4();
}

void excercise1()
{
	int seed = 11;
	long long x = 0;
	long long pre_x = 0;
	int m = pow(2, 31) - 1;
	int a = pow(7, 5);

	pre_x = seed;
	for (int i = 0;i < 100;i++)
	{
		x = ( a * pre_x) % m;
		pre_x = x;

		cout << x << endl;
	}
}

void excercise2(int seed1, int seed2)
{
	long long x1;
	long long x2;
	long long pre_x1;
	long long pre_x2;
	double x;
	double result = 0;

	pre_x1 = seed1;
	pre_x2 = seed2;
	for (int i = 0;i < 100;i++)
	{
		x1 = 40014 * pre_x1 % 2147483563;
		x2 = 40692 * pre_x2 % 2147483399;

		x = ((x1 - x2) + 2147483562)% 2147483562;

		if (x > 0)
			result = x / 2147483563;
		if (x == 0)
			result = 2147483562 / 2147483563;
		
		cout << result << endl;

		pre_x1 = x1;
		pre_x2 = x2;
		
	}
}

void excercise3(int seed)
{
	vector<long long>seed_vector;

	long long x = 0;
	long long pre_x = 0;
	int m = pow(2, 31) - 1;
	int a = pow(7, 5);
	int b = pow(10, 7);
	pre_x = seed;
	for (int i = 0;;i++)
	{
		x = ( a * pre_x) % m;
		pre_x = x;
		if (i % b == 0)
		{
			cout << x << endl;
			seed_vector.push_back(x);
			if (seed_vector.size() == 100)
				break;
		}
	}
}

void excercise4()
{
	vector<long long>num_vector;
	double x = 0;
	long long pre_x = 0;
	long m = pow(2, 31) - 1;
	long a = pow(7, 5);
	double b = pow(10, 7);
	pre_x = 11;
	for (int i = 0;i<100;i++)
	{
		x = ((a * pre_x) % m );
		pre_x = x;
		cout << x << endl;
		num_vector.push_back(x);
		
	}
	sort(num_vector.begin(), num_vector.end());
	
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
