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

class TheBrickTowerEasyDivTwo {
public:
	int find(int, int, int, int);
};

int TheBrickTowerEasyDivTwo::find(int redCount, int redHeight, int blueCount, int blueHeight) {
	set<int> result;
	int gap = 0;

	int minNum = min(redCount, blueCount);
	int minHeight = (minNum == redCount)?redHeight:blueHeight;
	int maxHeight = (minHeight == redHeight)?blueHeight: redHeight;

	result.insert(redHeight);
	result.insert(blueHeight);
	
	if (redCount != blueCount) gap = 1;

	for(int i=1; i<=minNum+gap; i++) {
		for (int j= i-1; j<=i+1 && j<=minNum ; j++)  
			result.insert(i*maxHeight + j* minHeight);
	}
	
	return result.size();
}


double test0() {
	int p0 = 1;
	int p1 = 2;
	int p2 = 3;
	int p3 = 4;
	TheBrickTowerEasyDivTwo * obj = new TheBrickTowerEasyDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
	int p1 = 4;
	int p2 = 4;
	int p3 = 7;
	TheBrickTowerEasyDivTwo * obj = new TheBrickTowerEasyDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 12;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 7;
	int p1 = 7;
	int p2 = 4;
	int p3 = 4;
	TheBrickTowerEasyDivTwo * obj = new TheBrickTowerEasyDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 13;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 47;
	int p1 = 47;
	int p2 = 47;
	int p3 = 47;
	TheBrickTowerEasyDivTwo * obj = new TheBrickTowerEasyDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 94;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
