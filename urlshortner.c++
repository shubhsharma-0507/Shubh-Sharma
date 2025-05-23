#include <iostream> 
#include <unordered_map> 
using namespace std; 
 
unordered_map<string, string> urlMap; // To store the shortened URL -> long URL mapping 
 
// Function to shorten the URL 
string shortenURL(string longURL) { 
    // Create a short URL by appending the next available index (size of the map + 1) 
    string shortURL = "short.ly/" + to_string(urlMap.size() + 1); 
    urlMap[shortURL] = longURL; // Store the mapping in the unordered_map 
    return shortURL; 
} 
 
int main() { 
    string longURL; 
 
    // Get the long URL from the user 
    cout << "Enter the long URL: \n"; 
    cin >> longURL; 
 
    // Shorten the URL 
    string shortURL = shortenURL(longURL); 
 
    // Output the shortened URL 
    cout << "Shortened URL: " << shortURL << endl; 
 
    return 0; 
}
