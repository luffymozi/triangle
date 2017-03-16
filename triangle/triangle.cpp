// triangle.cpp : �������̨Ӧ�ó������ڵ㡣
//

// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include <iomanip>
#define N 10
using namespace std;
void printTriangle(int n);
void printEmptyTriangle(int n, int m);
int main() {

	printEmptyTriangle(25, 10);
	system("pause");
	return 0;
}

void printTriangle(int n) {
	for (int i = 0; i<n; i++) {
		cout << setw((n - i) ) << "*";
		for (int j = 0; j<i * 2; j++)
			cout << " *";
		cout << endl;
	}
	cout << endl;
}

void printEmptyTriangle(int n, int m) {
	for (int i = 0; i<m; i++) {
		cout << setw((n - i) * 2) << "*";
		for (int j = 0; j<i * 2; j++)
			cout << " *";
		cout << endl;
	}
	for (int i = m; i<n - m; i++) {
		cout << setw((n - i) * 2) << "*";
		if (i>1)
			for (int j = 0; j<m - 1 ; j++)
				cout << " *";
		if (i>0) {
			cout << setw((2 * i - m + 2 - m) * 2) << " *";
			for (int j = 0; j<m - 1 ; j++)
				cout << " *";
		}
		cout << endl;
	}
	for (int i = n - m; i<n; i++) {
		cout << setw((n - i) * 2) << "*";
		for (int j = 0; j<i * 2; j++)
			cout << " *";
		cout << endl;
	}
}