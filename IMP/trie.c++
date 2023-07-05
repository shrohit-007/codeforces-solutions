class Node
{
public:
    char ch;
    map<char,Node*>mp;
    bool isterminal;
    Node()
    {
        isterminal=false;
    }
};
class Trie
{
public:
    Node* root;
    Trie()
    {
        Node *newnode=new Node();
        newnode->ch='*';
        this->root=newnode;
    }
    void insert(string word)
    {
        Node* curr=root;
        for(int i=0;i<word.length();i++)
        {
            char c=word[i];
            if(curr->mp.find(c)!=curr->mp.end())
            {
                curr=curr->mp[c];
            }
            else
            {
                Node *newnode=new Node();
                newnode->ch=c;
                curr->mp[c]=newnode;
                curr=newnode;
            }
        }
        curr->isterminal=true;
    }
    bool search(string word)
    {
        Node *curr=root;
        for(int i=0;i<word.length();i++)
        {
            if(curr->mp.find(word[i])!=curr->mp.end())
            {
                curr=curr->mp[word[i]];
            }
            else
            {
                return false;
            }
        }
        return curr->isterminal;
    }
    bool startwith(string word)
    {
        Node *curr=root;
        for(int i=0;i<word.length();i++)
        {
            if(curr->mp.find(word[i])!=curr->mp.end())
            {
                curr=curr->mp[word[i]];
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
