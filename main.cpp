#include "vote.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main() {
	std::vector <candidate> c;

	
	fstream in("input4.txt");

	

	map<string, int> count;

	string w;
	while (cin >> w)
		++count[w];
	
	for(auto p = count.cbegin(); p != count.cend(); ++p){
		const auto& e = *p;
		cout << p->first << ' ' << p->second << '\n';
	

	}
	
	return 0;

	
}

