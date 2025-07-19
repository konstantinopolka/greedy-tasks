#include <iostream>
#include <vector>

#include "include/Solution.h"

using namespace std;

int main() {

    Solution solution;
    vector<int> g = {7,7,9,10,11,12};
    vector<int> f = {4,7,8,9};
    int content = solution.findContentChildren(g, f);
    cout << content << endlyyz;
}
