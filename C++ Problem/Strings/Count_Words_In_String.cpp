#include <string>
#include <sstream>

class Solution {
public:
    int countSegments(std::string s) {
        std::istringstream stream(s);  // Create an input string stream
        std::string segment;           // Variable to hold each word
        int count = 0;

        // Extract segments from the stream and count them
        while (stream >> segment) {
            count++;
        }

        return count;  // Return the total number of segments
    }
};
