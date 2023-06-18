#include "Quiz.h"

int Quiz::score;

Quiz::Quiz() {};

Quiz::Quiz(std::string filename) {
	this->filename = filename;
	readFile();
}

void Quiz::setScore(int point) {
	score = point;
}

int Quiz::getScore() {
	return score;
}

void Quiz::incrementScore() {
	score++;
}

void Quiz::shuffleQuestions(std::vector<Question>& vec) {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(vec.begin(), vec.end(), std::default_random_engine(seed));
}


void Quiz::readFile() {
	std::ifstream inputFile(filename); // Open the input file

	std::string line, substr;
	while (getline(inputFile, line)) {
		std::vector<std::string> v;

		std::stringstream ss(line);

		while (getline(ss, substr, ',')) {
			v.push_back(substr);
		}

		Question newQuestion;

		if (filename == "kungfupandaMCQquestions.txt") // McqQuestion
		{
			newQuestion.question = v[0];
			newQuestion.option1 = v[1];
			newQuestion.option2 = v[2];
			newQuestion.option3 = v[3];
			newQuestion.answer = v[4];
		}
		else // TnfQuestion
		{
			newQuestion.question = v[0];
			newQuestion.answer = v[1];
		}

		questions.push_back(newQuestion);

	}
	inputFile.close(); // Close the input file
}

std::vector<Question> Quiz::getQuestions() {
	return this->questions;
}

void Quiz::setQuestions(std::vector<Question>& vec) {
	this->questions = vec;
}