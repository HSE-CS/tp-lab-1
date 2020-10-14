#include <iostream>
#include "task5.h"
#define BUF 5000

using namespace std;

int main() {
	char buf[BUF] = "vrtvrtvr jshafl sdlf hdsufhdhd vgtrvtvhtyvhty vtrevhrtvhvtr vr vrevr tvt rv grv t";
	int mount = 0;
	char **result = 0;
	split(&result, &mount, buf, 0);
}