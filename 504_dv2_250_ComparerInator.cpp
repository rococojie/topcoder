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

class ComparerInator {
public:
	int makeProgram(vector <int>, vector <int>, vector <int>);
};
void initResult(int A, int B, int wanted, bool result[]) {
	if(A == wanted) result[0] = true;
	if(B == wanted) result[1] = true;
	if((A<B?A:B) == wanted) result[2] = true;
	if((A<B?B:A) == wanted) result[3] = true;
} 

bool isAvailableResult(int a, int b, int wanted, int j) {
	if(j == 0) 
		return a == wanted;
	else if(j == 1)
		return b == wanted;
	else if(j == 2)
		return (a<b?a:b) == wanted;
	else if(j == 3)
		return (a<b?b:a) == wanted;
}
int ComparerInator::makeProgram(vector <int> A, vector <int> B, vector <int> wanted) {
	bool result[4] = {false, false, false, false};
	
	initResult(A[0],B[0], wanted[0], result);
	for(int i=1; i<int(A.size()); i++) {
		for(int j=0; j<4; j++) {
			if(!result[j]) continue;
			
			result[j] = isAvailableResult(A[i], B[i],wanted[i], j);
		}
	}
	if(result[0] || result[1]) return 1;
	else if(result[2] || result[3]) return  7;
	else return -1;
	
}


double test0() {
	int t0[] = {1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,1,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,1,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,3,5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {1,2,3,4,5,6,7,8,9,10,11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,4,7,8,3,1,1,2,3,4,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,3,1,1,2,3,4,6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {1,5,6,7,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,5,6,7,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,5,6,7,8};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
