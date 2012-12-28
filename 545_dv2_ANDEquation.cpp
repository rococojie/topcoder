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

class ANDEquation {
public:
	int restoreY(vector <int>);
};

int ANDEquation::restoreY(vector <int> A) {

	sort(A.rbegin(), A.rend());
	int result = A[0];
	int length = A.size();

	for(int i = 1; i<length - 1; i++ ) {	
		result &= A[i];	
	}

	if(result == A[length - 1]) return A[length - 1];
	else return -1 ;
}


double test0() {
	int t0[] = {1, 3, 5}
;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {31, 7}
;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {31, 7, 7}
;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 7;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,
 0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {191411,256951,191411,191411,191411,256951,195507,191411,192435,191411,
 191411,195511,191419,191411,256947,191415,191475,195579,191415,191411,
 191483,191411,191419,191475,256947,191411,191411,191411,191419,256947,
 191411,191411,191411};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 191411;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {1362,1066,1659,2010,1912,1720,1851,1593,1799,1805,1139,1493,1141,1163,1211};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	int t0[] = {2, 3, 7, 19};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	ANDEquation * obj = new ANDEquation();
	clock_t start = clock();
	int my_answer = obj->restoreY(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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

	time = test6();
	if (time < 0)
	errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
