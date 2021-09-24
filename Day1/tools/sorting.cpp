#include <vector>

using namespace std;

vector<int> bubble_sort(vector<int> to_sort)
{
    bool swapped = false;
    int last_sorted = to_sort.size() - 1;
    do {
        swapped = false;
        for (int i = 0; i < last_sorted; i++) {
            if(i == last_sorted) break;
            if (to_sort[i] > to_sort[i+1]) {
                int left = to_sort[i];
                int right = to_sort[i+1];
                to_sort[i] = right;
                to_sort[i+1] = left;
                swapped = true;
            }
        }
        last_sorted--;
    } while (swapped);

    return to_sort;
}
