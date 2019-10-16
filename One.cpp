#include"stdafx.h"
#include <iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
string name() {
	string name;
	cout << "enter your name\n";
	getline(cin, name);
	return name;}
int One() {
	int x, y;
	cout << "enter the x value";
	cin >> x;
	y = x + 9;
	return y;}
int  Two() {
	int a, b, c;
	cout << "enter the b and c value";
	cin >> b >> c;
	a = (2 * b) + (2 * c);
	return a;}
double Three() {
	double x, y;
	cout << "enter the value of x";
	cin >> x;
	y = (pow(x, 3));
	return y;}
void Four() {
	int y, x = 0, z = 0;
	cout << "enter the value of x and z";
	cin >> x >> z;
	if (x > 0 && z > 0) {
		y = (x / (z*z)) + 2;
		cout << "x:" << x << "\ny:" << z;}}
void Five() {
	double y, x;
	cout << "enter the value of x and y";
  cin >> x >> y;
  y = (x*x) / (y*y);}
int main()
{cout << name() << endl;
	four();
 return 0;}
