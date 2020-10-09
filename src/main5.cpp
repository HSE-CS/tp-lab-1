#include "task5.h"

using namespace std;

int main() {

	int N = 0;
	char** result = nullptr;
	char buffer[] = "12342 asd wq 132";
	
	split(&result, &N, buffer, ' ');

	cout << "N = " << N << endl;
	cout << "Elements:" << endl;

	for (int i = 0; i < N; i++) {
		cout << result[i] << endl;
	}
	return 0;
}