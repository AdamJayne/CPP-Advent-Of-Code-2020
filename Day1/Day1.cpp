#include <iostream>
#include <vector>

#include "tools/parsing.h"
#include "tools/sorting.h"

using namespace std;

int main()
{
    int to_find = 2020;
    vector<int> puzzle = bubble_sort(parse_puzzle("Day1.txt"));

    for(int i = 0; i < puzzle.size(); i++)
    {
        for(int j = i + 1; j < puzzle.size(); j++)
        {
            if (i != j and puzzle.at(i) + puzzle.at(j) == to_find)
            {
                cout << puzzle.at(i) * puzzle.at(j) << endl;
            }
        }
    }

    cout << puzzle.size() << endl;
}
