#include "../include/Solution.h"
#include "show_array.h"
#include <algorithm>
#include <iostream>

using std::vector;

int Solution::findContentChildren(std::vector<int>& g, std::vector<int>& s){
// https://leetcode.com/problems/assign-cookies/

    // What is the idea of the solution?
    // 0. Sort both of the arrays
    // 1. Give a satisfying cookie to the least greedy child 
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int children_index = 0;
        int cookies_index = 0;

        // vector<int> g = {7,7,9,10,11,12};
        // vector<int> f = {4,7,8,9};

        while(children_index < g.size() && cookies_index < s.size()){
          if(s[cookies_index] >= g[children_index]){
            children_index++;
          }
          cookies_index++;
        }
        return children_index;
    }

int Solution::candy(std::vector<int>& ratings){
  // https://leetcode.com/problems/candy/
  int candies_numbers = ratings.size();
  vector<int> candies(ratings.size(), 1);

  for(int i = 1; i < ratings.size(); i++){
    if(ratings[i-1] < ratings[i]){
      candies[i] = candies[i-1] + 1;
      candies_numbers++;
    }
      
    show_array(ratings);
    show_array(candies);
  }
  return candies_numbers;
}