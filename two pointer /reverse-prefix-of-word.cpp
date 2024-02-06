class Solution {
public:
    string reversePrefix(string word, char ch) {
       int n = -1;
      for(int i=0;i<word.length();i++)
      {
          if(word[i]==ch)
          {
               n=i;
              break;
          }
      } 
      if(n==-1){
          return word;
      }
      reverse (word.begin(),word.begin()+n+1);
      return word;
    }
};