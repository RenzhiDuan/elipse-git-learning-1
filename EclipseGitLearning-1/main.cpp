/*
 * main.cpp
 *
 *  Created on: Apr 24, 2017
 *      Author: renzhi
 */

#include <cstdio>

//this function is added in v0.1
int add(int a, int b){
	return a+b;
}

//this function is added in v0.1
bool lt(int a, int b){
	return a>b;
}

int main(){
	printf("Eclipse Git Learning 1");

	int a,b;
	scanf("%d %d", &a, &b);
	printf("Sum: %d\n", add(a,b));

}


