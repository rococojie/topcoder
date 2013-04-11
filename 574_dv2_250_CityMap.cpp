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

class CityMap {
public:
	string getLegend(vector <string>, vector <int>);
};

map<char, int> getEachMapsNum(vector<string> cityMap) {
	map<char, int> result;
	for(int i=0; i<int(cityMap.size()); i++) {
		for(int j=0; j<int(cityMap[0].size()); j++) {
			if(cityMap[i][j] <= 'Z' && cityMap[i][j] >= 'A')
				result[cityMap[i][j]]++;
		}
	}
	
	return result;
}

string getListOfMaps(map<char, int> numOfMaps, vector<int> POIs) {
	string maps = "";
		for(int i=0; i<int(POIs.size()); i++) {
		for(map<char, int>::iterator imap = numOfMaps.begin(); imap != numOfMaps.end(); imap++) {
			if(imap->second == POIs[i]) {
				maps.push_back(imap->first);
				break;
			}
		}
	}
	
	return maps;
}
string CityMap::getLegend(vector <string> cityMap, vector <int> POIs) {
	map<char, int> nums;
	string maps = "";
	
	nums = getEachMapsNum(cityMap);
	maps = getListOfMaps(nums, POIs);
	
	return maps;
}


double test0() {
	string t0[] = {"M....M",
 "...R.M",
 "R..R.R"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {3, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CityMap * obj = new CityMap();
	clock_t start = clock();
	string my_answer = obj->getLegend(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "MR";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"XXXXXXXZXYYY"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {1, 8, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CityMap * obj = new CityMap();
	clock_t start = clock();
	string my_answer = obj->getLegend(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "ZXY";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"...........",
 "...........",
 "...........",
 "..........T"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CityMap * obj = new CityMap();
	clock_t start = clock();
	string my_answer = obj->getLegend(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "T";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"AIAAARRI.......GOAI.",
 ".O..AIIGI.OAAAGI.A.I",
 ".A.IAAAARI..AI.AAGR.",
 "....IAI..AOIGA.GAIA.",
 "I.AIIIAG...GAR.IIAGA",
 "IA.AOA....I....I.GAA",
 "IOIGRAAAO.AI.AA.RAAA",
 "AI.AAA.AIR.AGRIAAG..",
 "AAAAIAAAI...AAG.RGRA",
 ".J.IA...G.A.AA.II.AA"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {16,7,1,35,11,66}
;
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CityMap * obj = new CityMap();
	clock_t start = clock();
	string my_answer = obj->getLegend(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "GOJIRA";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
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
