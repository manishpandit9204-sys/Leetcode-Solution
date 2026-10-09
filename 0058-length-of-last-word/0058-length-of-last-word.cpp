class Solution {
public:
    int lengthOfLastWord(string s) {

        int count=0;
        int size= s.size()-1;

        while(s[size]==' ')
        {
            size--;
        }

        while(size >=0 && s[size]!=' ')
        {
            count++;
            size--;
        }
        return count;
        
    }
};