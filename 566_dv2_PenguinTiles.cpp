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

class PenguinTiles {
public:
	int minMoves(vector <string>);
};

int PenguinTiles::minMoves(vector <string> tiles) {
	int rowPos = 0;
	int colPos = 0;
	int tilesRow = tiles.size() - 1;
	int tilesCol = tiles[0].size() - 1;
	
	for(int i=0; i<=tilesRow; i++) {
		if(string::npos !=(colPos = tiles[i].find('.',0))) {
			rowPos = i;
			break;
		}
	}
	
	if(rowPos != tilesRow && colPos != tilesCol  ) {
		return 2;
	}else if(rowPos == tilesRow && colPos == tilesCol  ) {
		return 0;
	}else {
		return 1;
	}
	
}


double test0() {
	string t0[] = {"PP",
 "P."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
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
double test1() {
	string t0[] = {"PPPPPPPP",
 ".PPPPPPP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
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
double test2() {
	string t0[] = {"PPP",
 "P.P",
 "PPP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
	string t0[] = {"P.",
 "PP",
 "PP",
 "PP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
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
double test4() {
	string t0[] = {".PPP",
 "PPPP",
 "PPPP",
 "PPPP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	PenguinTiles * obj = new PenguinTiles();
	clock_t start = clock();
	int my_answer = obj->minMoves(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
}

//Powered by [KawigiEdit] 2.0!
