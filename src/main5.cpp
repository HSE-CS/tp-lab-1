#include"task5.h"

int main()
{
	char buf[50] = "Hello,new,worlds,!";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++)
	cout<< result[i]<<endl;
	cout << N;

	//another task
	//cout << sumPrime(2*1000*1000);

}