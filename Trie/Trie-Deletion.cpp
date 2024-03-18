// Trie Delete Operation


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
    // Helper function for deletion
    bool isEmpty(TrieNode *node)
    {
        for (auto &child : node->children)
        {
            if (child.second != nullptr)
                return false;
        }
        return true;
    }

    TrieNode *remove(TrieNode *node, string key, int depth = 0)
    {
        if (!node)
            return nullptr;

        if (depth == key.length())
        {
            if (node->isEndOfWord)
                node->isEndOfWord = false;
            if (isEmpty(node))
            {
                delete (node);
                node = nullptr;
            }
            return node;
        }

        char ch = key[depth];
        node->children[ch] = remove(node->children[ch], key, depth + 1);

        if (isEmpty(node) && !node->isEndOfWord)
        {
            delete (node);
            node = nullptr;
        }

        return node;
    }

    void remove(string key)
    {
        root = remove(root, key);
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

    // Delete a word
    trie.remove("apple");

    return 0;
}
