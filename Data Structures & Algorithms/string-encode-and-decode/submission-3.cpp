class Solution {
public:

    string encode(vector<string>& strs) {
        string sep;

        for (string s : strs) {
            sep += to_string(s.size()) + "#" + s;
        }

        return sep;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while (i < s.size()) {
            int j = s.find('#', i);

            int len = stoi(s.substr(i, j - i));

            i = j + 1;

            decoded.push_back(s.substr(i, len));

            i += len;
        }

        return decoded;
    }
};