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

class PlatypusDuckAndBeaver {
public:
	int minimumAnimals(int, int, int);
};

int PlatypusDuckAndBeaver::minimumAnimals(int webbedFeet, int duckBills, int beaverTails) {
	int result = 0;
	bool success = false;

	for ( int ducks = 0; ducks<=min(duckBills, webbedFeet/2);ducks++){ 
		for(int beavers = 0;beavers <= min(beaverTails, webbedFeet/4) ;beavers++) {
			for (int platypus = 0;platypus <= min(webbedFeet/4, max(duckBills, beaverTails)); platypus++){
				if( (duckBills == ducks + platypus)&&(webbedFeet == 2*ducks + 4*beavers + 4*platypus) && (beaverTails == beavers + platypus) ) {
					success = true;
					result = ducks + beavers + platypus;
					break;
				}
			}

			if(success) break;
		}
			if(success) break;
	}
	
	return result;
}


double test0() {
	int p0 = 4;
	int p1 = 1;
	int p2 = 1;
	PlatypusDuckAndBeaver * obj = new PlatypusDuckAndBeaver();
	clock_t start = clock();
	int my_answer = obj->minimumAnimals(p0, p1, p2);
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
	int p0 = 0;
	int p1 = 0;
	int p2 = 0;
	PlatypusDuckAndBeaver * obj = new PlatypusDuckAndBeaver();
	clock_t start = clock();
	int my_answer = obj->minimumAnimals(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
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
	int p0 = 10;
	int p1 = 2;
	int p2 = 2;
	PlatypusDuckAndBeaver * obj = new PlatypusDuckAndBeaver();
	clock_t start = clock();
	int my_answer = obj->minimumAnimals(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3;
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
	int p0 = 60;
	int p1 = 10;
	int p2 = 10;
	PlatypusDuckAndBeaver * obj = new PlatypusDuckAndBeaver();
	clock_t start = clock();
	int my_answer = obj->minimumAnimals(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 20;
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
	int p0 = 1000;
	int p1 = 200;
	int p2 = 200;
	PlatypusDuckAndBeaver * obj = new PlatypusDuckAndBeaver();
	clock_t start = clock();
	int my_answer = obj->minimumAnimals(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 300;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
