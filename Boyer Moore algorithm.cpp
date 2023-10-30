#include <bits/stdc++.h>
using namespace std;
#define CHARACTERS 256

void badCharactertable(string s, int n,int badmatch[CHARACTERS]) {

   for (int i = 0; i < CHARACTERS; i++){
      badmatch[i] = -1;
   }

   for (int i = 0; i < n; i++){
      badmatch[(int)s[i]] = i;
   }
}

void BoyerMoore(string text, string pattern) {

   int m = pattern.size();
   int n = text.size();
   int badmatch[CHARACTERS];
   badCharactertable(pattern, m, badmatch);
   int s = 0;
   while (s <= (n - m)){
      int j = m - 1;
      while (j >= 0 && pattern[j] == text[s + j])
         j--;

      if (j < 0) {
         cout << "Pattern found";
         break;
      }
      else{
         s = s + j - badmatch[text[s + j]];
      }
   }
}

int main() {
   string text = "TRUSTHARDTOOTHBRUSH";
   string pattern = "HARDTOOTH";

   BoyerMoore(text, pattern);

   return 0;
}

