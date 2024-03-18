#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool isEndOfWord;
    TrieNode()
    {
        isEndOfWord = false;
    }
};
class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            if (current->children.find(ch) == current->children.end())
            {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true;
    }

    bool search(string word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            if (current->children.find(ch) == current->children.end())
            {
                return false;
            }
            current = current->children[ch];
        }
        return current->isEndOfWord;
    }

    // Function to print Trie structure
    void printTrie(TrieNode *node, string indent = "")
    {
        if (node == nullptr)
            return;

        for (auto &pair : node->children)
        {
            cout << indent << "|--" << pair.first << endl;
            printTrie(pair.second, indent + "   ");
        }
        if (node->isEndOfWord)
            cout << indent << "|--"
                 << "(end)" << endl;
    }

    // Function to initiate Trie printing
    void print()
    {
        printTrie(root);
    }
};
int main()
{
    Trie trie;

    // Insert some words
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("app");
    trie.insert("hello");

    // Search for words
    cout << "Search Results:" << endl;
    cout << "apple: " << (trie.search("apple") ? "Found" : "Not Found") << endl;
    cout << "app: " << (trie.search("app") ? "Found" : "Not Found") << endl;
    cout << "orange: " << (trie.search("orange") ? "Found" : "Not Found") << endl;

    // Print the Trie structure
    cout << "\nTrie Structure:" << endl;
    trie.print();

    return 0;
}