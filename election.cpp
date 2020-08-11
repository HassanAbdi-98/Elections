#include "election.h"
#include <sstream>
#include <algorithm>

#include <iostream>
#include <string>
#include <map>


using namespace std;

election::election() {}
election::~election() {}

std::vector<vote> votes;
election read_votes(istream& in);

void election::add_vote(const vote& v) { 
	votes.push_back(v);
} 

void write_vector(ostream& out, const vector<double>& v) {
	out << "vector:";
	for (auto p = v.cbegin(); p != v.cend(); ++p)
		out << ' ' << *p;
	out << '\n';
}






int election::vote_count() const { return votes.size(); }

void election::eliminate(candidate c) {

	for (auto& votes : votes) {
		votes.discard(c);
	}

};
bool compare(std::pair<candidate, int>p1, std::pair<candidate, int>p2) {
	return p1.second > p2.second;
}

vector<pair<candidate, int>> election::ranked_candidates() const {


	map<candidate, int> collection;
	candidate c;
	for (const vote& v : votes) {
		c = v.first_preference();
		collection[c]++;


	}


}

election read_votes(istream& in) {
	string s;
	while (getline(in, s)) {
		stringstream str(s);
		string t;
		while (getline(str, t, ' '))
		{
			int newInt = stoi(t);
		}
		
	}
	
};