#pragma once

#include <msclr/marshal_cppstd.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <random>		// std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <algorithm>    // std::shuffle
#include <array>

struct Question {
	std::string question;
	std::string answer;
	std::string option1;
	std::string option2;
	std::string option3;
};

class Quiz
{
private:
	static int score;
	std::string filename;
	std::vector<Question> questions;

public:
	Quiz();
	Quiz(std::string filename);
	void setScore(int point);
	int getScore();
	void incrementScore();
	void shuffleQuestions(std::vector<Question>& vec);
	void readFile();
	std::vector<Question> getQuestions();
	void setQuestions(std::vector<Question>& vec);
};


