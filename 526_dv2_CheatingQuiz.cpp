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

class CheatingQuiz {
public:
	vector <int> howMany(string);
};

vector <int> CheatingQuiz::howMany(string answers) {

	int answer[3] = 0;

	for(int i = 0; i<answers.size(); i++) {
		if(answers[i] == 'A') ans
	}
	
	
	
}


double test0() {
	string p0 = "AAAAA";
	CheatingQuiz * obj = new CheatingQuiz();
	clock_t start = clock();
	vector <int> my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {1, 1, 1, 1, 1 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string p0 = "AAABBB";
	CheatingQuiz * obj = new CheatingQuiz();
	clock_t start = clock();
	vector <int> my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {2, 2, 2, 1, 1, 1 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string p0 = "CAAAAAC";
	CheatingQuiz * obj = new CheatingQuiz();
	clock_t start = clock();
	vector <int> my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {2, 2, 2, 2, 2, 2, 1 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string p0 = "BBCA";
	CheatingQuiz * obj = new CheatingQuiz();
	clock_t start = clock();
	vector <int> my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {3, 3, 2, 1 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string p0 = "BACACABCBBBBCAAAAACCCABBCAA";
	CheatingQuiz * obj = new CheatingQuiz();
	clock_t start = clock();
	vector <int> my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 1 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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
