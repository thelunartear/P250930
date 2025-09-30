#include <iostream>
#include <vector>
using namespace std;

vector<long long> vec;
vector<long long> arr;

int main()
{
	long long n;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		vec.push_back(x);
	}
	
	// ���ҿ� ���ų� ū 2�� ������ ���ؼ� array �迭�� �����ϱ�
	for (long long v : vec)
	{
		long long tmp = v;

		// tmp�� 2�� �������� ��쵵 ���
		tmp--;

		tmp |= tmp >> 1;
		tmp |= tmp >> 2;
		tmp |= tmp >> 4;
		tmp |= tmp >> 8;
		tmp |= tmp >> 16;
		tmp |= tmp >> 32;

		long long ans = tmp + 1;
		arr.push_back(ans);
	}

	// ���ҵ��� XOR�� ���ϱ�
	long long answer = 0;
	for (long long a : arr)
	{
		answer ^= a;
	}
	cout << answer << "\n";
}