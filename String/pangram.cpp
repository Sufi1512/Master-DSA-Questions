
class Solution {
    public:
        bool checkIfPangram(string sentence) {
            vector<int> arr(26,0);
            for(char &ch:sentence)
            {
                int ind = ch-'a';
                arr[ind]++;
            }
            for(int i=0;i<26;i++)
             {
            if(arr[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};
// Time Complexity: O(n)