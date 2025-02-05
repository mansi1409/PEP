/*Create a C++ program that reads a list of URLS and flags ones containing common phishing patterns like @,
multiple, characters, or suspicious keywords
phinshing Patterns Checked: @ symbol(used to obscure URLs) 
-Multiple . characters(attempts to mimic trusted domains)
-Suspicious keywords like "login", "secure", "update", "verify"*/

/*#include<iostream>
#include<fstream>
#include<vector>
#include<regex>
using namespace std;
bool isPhishingURL(const string&url){
    regex atSymbolPattern("@");
    regex multipleDotsPatterns("\\..*\\..*\\..*");
    vector<string> suspiciousKeywords;
    suspiciousKeywords.push_back("login");
    suspiciousKeywords.push_back("secure");
    suspiciousKeywords.push_back("update");
    suspiciousKeywords.push_back("verify");
    if (regex_search(url, atSymbolPattern)) {
        cout<< "[ALERT] URL contain '@': " <<url<<endl;
        return true;
    }
    if (regex_search(url, multipleDotsPattern)) {
        cout<< "[ALERT] URL contain multiple dots: " <<url<<endl;
        return true;

}
for (size_t i=0; i<suspiciousKeywords.size)
}

int main(){
    
}*/

#include<iostream>
#include<fstream>
#include<vector>
#include<regex>
using namespace std;

bool isPhishingURL(const string& url) {
    regex atSymbolPattern("@");
    regex multipleDotsPattern("\\..*\\..*\\..*");
    
    vector<string> suspiciousKeywords = {"login", "secure", "update", "verify"};
    
    if (regex_search(url, atSymbolPattern)) {
        cout << "[ALERT] URL contains '@': " << url << endl;
        return true;
    }
    
    if (regex_search(url, multipleDotsPattern)) {
        cout << "[ALERT] URL contains multiple dots: " << url << endl;
        return true;
    }
    
    for (const string& keyword : suspiciousKeywords) {
        if (url.find(keyword) != string::npos) {
            cout << "[ALERT] URL contains suspicious keyword '" << keyword << "': " << url << endl;
            return true;
        }
    }
    return false;
}
int main() {
    ifstream file("urls.txt");
    string url;
    
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while (getline(file, url)) {
        if (isPhishingURL(url)) {
            cout << "[WARNING] Phishing URL detected: " << url << endl;
        } else {
            cout << "[SAFE] URL is safe: " << url << endl;
        }
    }
        file.close();
    return 0;
}
