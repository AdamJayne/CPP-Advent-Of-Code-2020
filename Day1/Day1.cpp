#include <iostream>
#include <vector>

#include "../tools/parsing.h"
#include "../tools/sorting.h"

using namespace std;

int part1(vector<int> puzzle, int to_find)
{
    for(int i = 0; i < puzzle.size(); i++)
    {
        for (int j = i + 1; j < puzzle.size(); j++)
        {
            if((i != j) && (puzzle.at(i) + puzzle.at(j) == to_find))
            {
                return puzzle.at(i) * puzzle.at(j);
            }
        }
    }
    return 0;
}

int part2(vector<int> puzzle, int to_find)
{
    for(int i = 0; i < puzzle.size(); i++)
    {
        for (int j = i + 1; j < puzzle.size(); j++)
        {
            for (int k = j + 1; k < puzzle.size(); k++)
            {

                if(puzzle.at(i) + puzzle.at(j) + puzzle.at(k) == to_find)
                {
                    return puzzle.at(i) * puzzle.at(j) * puzzle.at(k);
                }
            }
        }
    }
    return 0;
}

void solve_day1(string puzzle_name, int to_find)
{
    vector<int> puzzle = bubble_sort(parse_puzzle(puzzle_name));

    cout << "Day 1" << endl;
    cout << "Part 1: " << part1(puzzle, to_find) << endl;
    cout << "Part 2: " << part2(puzzle, to_find) << endl;
}
