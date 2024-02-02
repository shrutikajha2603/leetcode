class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        while(columnNumber>0){
            columnNumber--;
            char rem = columnNumber % 26 + 'A'; 
            s = rem + s;
            columnNumber/=26;
        }
        return s;
    }
};