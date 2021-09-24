#include <fstream>
#include <vector>

using namespace std;


vector<int> parse_puzzle(string filename)
{
    ifstream puzzle(filename);
    vector<int> parsed_puzzle;

    if (puzzle.is_open())
    {
        string line;
        while (getline(puzzle, line))
        {
            parsed_puzzle.push_back(stoi(line));
        }
        puzzle.close();
    }

    return parsed_puzzle;
}