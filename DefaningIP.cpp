class Solution {
public:
   
    string defangIPaddr(string address) {
         string String = "";
        for (char c : address)
        (c == '.') ? String += "[.]" :
                     String += c;
        return String;
        }
    };
