#include "vote.h"
using namespace std;

vote::vote(const vector<candidate>& preferences):preferences( preferences) {}

vote::~vote(){}

bool vote::spent() const {
	if (preferences.size() == 0) {
		return true;
	}
	else {
		return false;
	};
};

candidate vote::first_preference() const {

	candidate first = 0;
	if (vote::spent() == false) {
		first = preferences[0];
	}
	return first;
};


void vote::discard(candidate c) {
	auto p = preferences.cbegin();
	while (p != preferences.cend())
		if (*p == c) {
			p = preferences.erase(p);
			return;
		}
		else
			++p;
}