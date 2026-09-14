// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true
// Problem     Attribute Parser
// Difficulty  Medium
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-14, 10:12 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

int main() {
    int n, q;
    if (!(cin >> n >> q)) return 0;
    cin.ignore(); // Consume the newline character after reading N and Q

    unordered_map<string, string> attributes;
    vector<string> tag_stack;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        // Check if it's a closing tag </tag>
        if (line.substr(0, 2) == "</") {
            if (!tag_stack.empty()) {
                tag_stack.pop_back();
            }
        } 
        // Opening tag <tag attr1 = "val1" ...>
        else {
            // Remove '<' at start and '>' at end
            line = line.substr(1, line.length() - 2);

            stringstream ss(line);
            string tag_name;
            ss >> tag_name;

            // Build current tag path (e.g., "tag1.tag2")
            string current_path = "";
            if (!tag_stack.empty()) {
                for (const string& parent : tag_stack) {
                    current_path += parent + ".";
                }
            }
            current_path += tag_name;
            tag_stack.push_back(tag_name);

            // Parse attributes
            string attr_name, eq, attr_value;
            while (ss >> attr_name >> eq >> attr_value) {
                // Strip quotes around attribute value: "value" -> value
                if (attr_value.front() == '"') {
                    attr_value = attr_value.substr(1, attr_value.length() - 2);
                }
                
                // Key format: "tag1.tag2~attr_name"
                string key = current_path + "~" + attr_name;
                attributes[key] = attr_value;
            }
        }
    }

    // Process queries
    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);

        auto it = attributes.find(query);
        if (it != attributes.end()) {
            cout << it->second << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
