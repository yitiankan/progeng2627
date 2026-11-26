#include <iostream>
#include <string>
#include <vector>

// Check whether word starts at (row, col) and reads from left to right.
// If it does, write it into solution and return true.
bool verify_row(
    const std::vector<std::string>& grid,
    const std::string& word,
    std::vector<std::string>& solution,
    std::size_t row,
    std::size_t col
){
    if (col + word.size() > grid[row].size()){
        return false;
    }

    std::string candidate;
    for (std::size_t offset = 0; offset < word.size(); offset++){
        candidate.push_back(grid[row][col + offset]);
    }

    if (candidate == word){
        for (std::size_t offset = 0; offset < word.size(); offset++){
            solution[row][col + offset] = word[offset];
        }
        return true;
    }
    return false;
}

// Check whether word starts at (row, col) and reads from top to bottom.
// If it does, write it into solution and return true.
bool verify_col(
    const std::vector<std::string>& grid,
    const std::string& word,
    std::vector<std::string>& solution,
    std::size_t row,
    std::size_t col
){
    if (row + word.size() > grid.size()){
        return false;
    }

    std::string candidate;
    for (std::size_t offset = 0; offset < word.size(); offset++){
        candidate.push_back(grid[row + offset][col]);
    }

    if (candidate == word){
        for (std::size_t offset = 0; offset < word.size(); offset++){
            solution[row + offset][col] = word[offset];
        }
        return true;
    }
    return false;
}

// Search the whole grid for each word. Found words are written into solution,
// and the others are added to not_found.
void find_words(
    const std::vector<std::string>& grid,
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    for (std::size_t index = 0; index < words.size(); index++){
        bool found = false;

        for (std::size_t row = 0; row < grid.size(); row++){
            for (std::size_t col = 0; col < grid[row].size(); col++){
                if (grid[row][col] == words[index][0]){
                    if (verify_row(grid, words[index], solution, row, col)){
                        found = true;
                    }
                    if (verify_col(grid, words[index], solution, row, col)){
                        found = true;
                    }
                }
            }
        }

        if (!found){
            not_found.push_back(words[index]);
        }
    }
}

int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution(grid.size(), std::string(grid[0].size(), '#'));
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found);

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if ((solution == expected_solution) && (not_found == expected_not_found)){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for (std::size_t i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for (std::size_t i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }
}
