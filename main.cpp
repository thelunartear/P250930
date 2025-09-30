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
	
	// 원소와 같거나 큰 2의 제곱수 구해서 array 배열에 삽입하기
	for (long long v : vec)
	{
		long long tmp = v;

		// tmp가 2의 제곱수일 경우도 고려
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

	// 원소들을 XOR로 비교하기
	long long answer = 0;
	for (long long a : arr)
	{
		answer ^= a;
	}
	cout << answer << "\n";
}