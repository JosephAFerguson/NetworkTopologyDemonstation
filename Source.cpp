#include <iostream>
#include <string>
#include "LL.h"
#include "Conn.h"
#include "Network.h"

int main() {
	LL<Conn> test;
	Conn add1("blue");
	Conn add2("red");
	test.add(add1);
	test.add(add2);
	int len = test.getLen();
	int i = 0;
	Conn* arr = test.toArr();
	while (i < len){
		std::cout << " , " << std::string(arr[i]);
		i++;
	}
	return 0;
}