// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int process_response(string answer, string answer_key) {
    int counter{0};
    for (size_t i=0; i<answer.length(); ++i) {
        if (answer[i] == answer_key[i])
            ++counter;
            
    }
    return counter;
    }
    
void display_line(string name, int score) {
    std::cout << std::setw(15) << std::left << name << std::setw(10) << score << endl;
}


int main() {
    
    
    std::cout << std::setw(15) << std::left << "Student" << std::setw(10) << "Score" << std::endl << "--------------------" << std::endl;
    
    std::ifstream in_file;
    in_file.open("//Users//hamraj//Downloads//Section19//Challenge_2//responses.txt");
    if (!in_file) {
        std::cerr << "Problem to open file" << endl;
        return 1;
    }
    
    int score{0};
    string answer_key{};
    string name{};
    string answer{};
    string line{};
    double total_tests{0};
    double total{0};
    
    
    in_file >> answer_key;
    
    
    while (in_file >> name >> answer) {
        ++total_tests;
        score = process_response(answer, answer_key);
        display_line(name, score);
        total += score;
    }
    
    double average = (total)/total_tests;
    std::cout << "--------------------" << std::endl;
    display_line("Average score", average);
    
    
    return 0;
}

