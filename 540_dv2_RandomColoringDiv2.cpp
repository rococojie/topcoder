#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomColoringDiv2 {
public:
	int getCount(int, int, int, int, int, int, int, int);
};

int RandomColoringDiv2::getCount(int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2) {
	int result = 0;

	for(int red = 0; red < maxR; red++ ) {
		for (int green = 0; green < maxG; green++){
			for(int blue = 0; blue < maxB; blue++) {
				if(abs(red - startR) >= d1 || abs(green - startG) >= d1 || abs(blue - startB) >=d1 ) {
					if(abs(red - startR) <= d2 && abs(green - startG) <=d2 && abs(blue - startB) <= d2) {
						result++;
					}
				}
			}
		}
	}
	
	return result;
}


double test0() {
	int p0 = 5;
	int p1 = 1;
	int p2 = 1;
	int p3 = 2;
	int p4 = 0;
	int p5 = 0;
	int p6 = 0;
	int p7 = 1;
	RandomColoringDiv2 * obj = new RandomColoringDiv2();
	clock_t start = clock();
	int my_answer = obj->getCount(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p8 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 4;
	int p1 = 2;
	int p2 = 2;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;
	int p6 = 3;
	int p7 = 3;
	RandomColoringDiv2 * obj = new RandomColoringDiv2();
	clock_t start = clock();
	int my_answer = obj->getCount(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p8 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 4;
	int p1 = 2;
	int p2 = 2;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;
	int p6 = 5;
	int p7 = 5;
	RandomColoringDiv2 * obj = new RandomColoringDiv2();
	clock_t start = clock();
	int my_answer = obj->getCount(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p8 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 6;
	int p1 = 9;
	int p2 = 10;
	int p3 = 1;
	int p4 = 2;
	int p5 = 3;
	int p6 = 0;
	int p7 = 10;
	RandomColoringDiv2 * obj = new RandomColoringDiv2();
	clock_t start = clock();
	int my_answer = obj->getCount(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p8 = 540;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 6;
	int p1 = 9;
	int p2 = 10;
	int p3 = 1;
	int p4 = 2;
	int p5 = 3;
	int p6 = 4;
	int p7 = 10;
	RandomColoringDiv2 * obj = new RandomColoringDiv2();
	clock_t start = clock();
	int my_answer = obj->getCount(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p8 = 330;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 49;
	int p1 = 59;
	int p2 = 53;
	int p3 = 12;
	int p4 = 23;
	int p5 = 13;
	int p6 = 11;
	int p7 = 22;
	RandomColoringDiv2 * obj = new RandomColoringDiv2();
	clock_t start = clock();
	int my_answer = obj->getCount(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p8 = 47439;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
