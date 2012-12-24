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

class XorBoardDivTwo {
public:
	int theMax(vector <string>);
};

int getTheNumOfOne(vector<string> str) {
	int result = 0;

	for (int i = 0; i< str.size(); i++) {
		for (int j = 0; j<str[0].size(); j++) {
			if ('1' == str[i][j]) result++;
		
		}
	}
	
	return result;
}
int XorBoardDivTwo::theMax(vector <string> board) {

	int tempMax = getTheNumOfOne(board);
	int resultMax = 0;

	int rows = board.size();
	int columns = board[0].size();

	for(int i =0; i<board.size(); i++) {
		vector<string> newString(board.begin(), board.end());
		int tempRow = 0;
		for(int j = 0; j<columns; j++) {
			if ('1' == newString[i][j]) {  tempRow--; newString[i][j] = '0';}
			else {  tempRow++; newString[i][j] = '1';}

		}

		for (int j = 0; j<columns; j++){
			int tempColumn = 0;
			for (int k = 0; k<rows; k++){

				if ('1' == newString[k][j]) {  tempColumn--; newString[k][j] = '0';}
				else {  tempColumn++; newString[k][j] = '1';}
			}

			if ( (tempRow + tempColumn + tempMax) > resultMax ) resultMax = tempRow + tempColumn + tempMax;

		}
	}

	return resultMax;
}


double test0() {
	string t0[] = {"101",
 "010",
 "101"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XorBoardDivTwo * obj = new XorBoardDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMax(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 9;
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
	string t0[] = {"111",
 "111",
 "111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XorBoardDivTwo * obj = new XorBoardDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMax(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
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
	string t0[] = {"0101001",
 "1101011"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XorBoardDivTwo * obj = new XorBoardDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMax(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 9;
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
	string t0[] = {"000",
 "001",
 "010",
 "011",
 "100",
 "101",
 "110",
 "111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XorBoardDivTwo * obj = new XorBoardDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMax(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 15;
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
	string t0[] = {"000000000000000000000000",
 "011111100111111001111110",
 "010000000100000001000000",
 "010000000100000001000000",
 "010000000100000001000000",
 "011111100111111001111110",
 "000000100000001000000010",
 "000000100000001000000010",
 "000000100000001000000010",
 "011111100111111001111110",
 "000000000000000000000000"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XorBoardDivTwo * obj = new XorBoardDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMax(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 105;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;

	getchar();
	getchar();
}

//Powered by [KawigiEdit] 2.0!
