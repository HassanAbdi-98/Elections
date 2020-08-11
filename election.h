#pragma once

#include "vote.h"
#include <vector>


class election
{
public:

	election();
	~election();

	void add_vote(const vote& v);
	int vote_count() const;
	void eliminate(candidate c);
	std::vector<std::pair<candidate, int>> ranked_candidates() const;



private:
	std::vector<vote> votes;


		election read_votes(istream& in);
	

	
		
		
	

};
