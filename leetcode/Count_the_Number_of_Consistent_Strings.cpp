class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        set<char> s;
        for(int i=0; i<allowed.length(); i++)
            s.insert(allowed[i]);
        for(int j=0; j<words.size(); j++)
        {
            int check =0;
            for(int i = 0; i<words[j].length(); i++)
            {
                if(s.find(words[j][i]) == s.end())
                {
                    check=1;
                    break;
                }
            }
            if(check==0)
                cnt++;
        }
        return cnt;
    }
};
