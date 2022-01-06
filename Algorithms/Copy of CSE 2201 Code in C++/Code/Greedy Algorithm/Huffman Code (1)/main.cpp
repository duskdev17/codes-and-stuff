//geeksforgeeks

#include <bits/stdc++.h>

using namespace std;

map<char, string> code;
map<char, int> freq;

void frequencyCount(string str)
{
    for(int i=0; i<str.size(); i++)
        freq[str[i]]++;
}

struct node{
    char s; //symbol
    int f;  //data

    node *leftChild, *rightChild;
    node(char data, int freq)
    {
        leftChild = rightChild = NULL;
        s = data;
        f = freq;
    }
};

struct compare
{
    bool operator()(node *left, node *right)
    {
        return (left->f > right->f);
    }
};

priority_queue<node*, vector<node*>, compare> Q;

void storeCodes(struct node* root, string str)
{
    if(root == NULL)
        return;
    if(root->s != '#')
        code[root->s] = str;
    storeCodes(root->leftChild, str + "0");
    storeCodes(root->rightChild, str + "1");
}

void HuffmanCode(int n)
{
    struct node *top, *left, *right;

    map<char, int> :: iterator it;
    for(it=freq.begin(); it!=freq.end(); it++)
        Q.push(new node(it->first, it->second));

    while(Q.size() != 1)
    {
        left = Q.top();
        Q.pop();
        right = Q.top();
        Q.pop();

        top = new node('#', left->f + right->f);
        top->leftChild = left;
        top->rightChild = right;

        Q.push(top);
    }
    storeCodes(Q.top(), "");
}

string decoder(struct node* root, string str)
{
    string ans = "";
    struct node* curr = root;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '0')
            curr = curr->leftChild;
        else
            curr = curr->rightChild;

        if(curr->leftChild == NULL && curr->rightChild == NULL)
        {
            ans += curr->s;
            curr = root;
        }
    }

    return ans+'\0';
}

int main()
{
    string str, encoded, decoded;
    cout << "Enter your sentence: ";
    getline(cin, str);

    frequencyCount(str);
    map<char, int> :: iterator it;
    for (it=freq.begin(); it!=freq.end(); it++)
    {
        cout << it->first <<' ' << it->second << endl;
    }

    HuffmanCode(str.length());
    cout << endl << "Huffman Code\n";
    map<char, string> :: iterator itr;
    for (itr=code.begin(); itr!=code.end(); itr++)
    {
        cout << itr->first <<' ' << itr->second << endl;
    }

    //Encoding
    for(int i=0; i<str.size(); i++)
    {
        encoded += code[str[i]];
    }
    cout << "\nEncoded data: " << encoded << endl;

    //Decoding
    decoded = decoder(Q.top(), encoded);
    cout << "Original data: " << decoded << endl;

    return 0;
}
