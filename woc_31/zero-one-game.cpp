/*
Original link: https://www.hackerrank.com/contests/w31/challenges/zero-one-game
*/

#include <set>
#include <iostream>
#include <string>
using namespace std;

set<string> set_1 = {"0001","0101","1010","1000"};
set<string> set_2 = {"0000","0100","0010"};

int main() {
    int n_query;
    cin >> n_query;
    while(n_query--){
      int n_seq;
      char seq_el;
      string str{};
      cin >> n_seq;
      for (int i = 0; i < n_seq; i++){
        cin >> seq_el;
        str += seq_el;
      }

      if (n_seq < 3) 
        cout << "Bob" << '\n';
      else if (n_seq == 3){
        if (str == "010" || str == "000")
          cout << "Alice" << '\n';
        else
          cout << "Bob" << '\n';
      }
        
      else{
          int j = 1;
          int erased{};
          while (j < str.size()-1){
              if (str[j-1] == '0' && str[j+1] == '0'){
                  str.erase(j,1);
                  erased++;
              }
              
              else
                  j++;
          }
          
          j = 1;
          while (j < str.size()-1){
              if (str[j-1] == '0' && str[j+1] == '0'){
                  str.erase(j,1);
                  erased++;
              }
              
              else
                  j++;
          }
      
        bool is_in_1 = set_1.find(str) != set_1.end();
        bool is_in_2 = set_2.find(str) != set_2.end();
      
        if (is_in_1) 
          erased += 1;
        if (is_in_2) 
          erased += 2;
          
        if (erased % 2 == 0)
          cout << "Bob" << '\n';
        else
          cout << "Alice" << '\n';
        }
        
    }
    
    return 0;
}
