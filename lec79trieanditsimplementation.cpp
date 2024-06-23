#include<iostream>
#include<string>
using namespace std;

class trienode {
public:
    char data;
    trienode* children[26];
    bool isterminal;

    trienode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isterminal = false;
    }
};

class trie {
public:
    trienode* root;

    trie() {
        root = new trienode('\0'); // Initialize the root with a null character
    }

    void insertutil(trienode* root, string word) {
        // Base case
        if (word.length() == 0) {
            root->isterminal = true;
            return;
        }

        int index = word[0] - 'A';
        trienode* child;
        if (root->children[index] != NULL) {
            // If present
            child = root->children[index];
        }
        else {
            // If absent
            child = new trienode(word[0]);
            root->children[index] = child;
        }

        // Recursion
        insertutil(child, word.substr(1));
    }

    void insertword(string word) {
        insertutil(root, word);
    }

    bool searchutil(trienode* root, string word) {
        if (word.length() == 0) {
            return root->isterminal;
        }

        int index = word[0] - 'A';
        trienode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return false;
        }

        return searchutil(child, word.substr(1));
    }

    bool search(string word) {
        return searchutil(root, word);
    }
};

int main() {
    trie* t = new trie();
    t->insertword("ABCD");

    cout << "Present or not: " << t->search("ABCD") << endl;
    
    delete t; // Deallocate memory

    return 0;
}
