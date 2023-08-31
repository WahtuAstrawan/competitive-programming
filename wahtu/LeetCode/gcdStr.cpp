class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
         if (str1 + str2 != str2 + str1) {
            return "";
        }

        unsigned short int lenS1 = str1.length();
        unsigned short int lenS2 = str2.length();
        unsigned short int gcdLength = findGCD(lenS1, lenS2);

        string x = str1.substr(0, gcdLength);

        return x;
    }

    int findGCD(int a, int b){
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    } 
};
