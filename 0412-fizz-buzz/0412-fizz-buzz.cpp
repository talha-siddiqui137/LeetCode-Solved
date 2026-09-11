class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for(int i = 1; i <= n; i++) {
            switch ((i % 3 == 0) * 2 + (i % 5 == 0)) {
                case 3:
                    result.push_back("FizzBuzz");
                    break;
                case 2:
                    result.push_back("Fizz");
                    break;
                case 1:
                    result.push_back("Buzz");
                    break;
                default:
                    result.push_back(to_string(i));
            }
        }

        return result;
    }
};