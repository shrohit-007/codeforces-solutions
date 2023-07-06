class Node{
    public:
    Node *zero,*one;
};
class Trie{
    public:
    Node *root;
    Trie()
    {
        Node *newnode=new Node();
        root=newnode;
    }
    void insert(Node *root,int val)
    {
        Node * curr=root;
        for(int i=31;i>=0;i--)
        {
            if((1LL<<i)&val)
            {
                if(curr->one)
                {
                    curr=curr->one;
                }
                else
                {
                    Node* newnode=new Node();
                    curr->one=newnode;
                    curr=curr->one;
                }
            }
            else
            {
                if(curr->zero)
                {
                    curr=curr->zero;
                }
                else
                {
                    Node* newnode=new Node();
                    curr->zero=newnode;
                    curr=curr->zero;
                }
            }
        }
    }
    int maxxor(Node *root, int val)
    {
        int num=0;
        Node* curr=root;
        for(int i=31;i>=0;i--)
        {
            int bit=((1LL<<i)&val);
            if(bit)
            {
                if(curr->zero)
                {
                    num+=(1<<i);
                    curr=curr->zero;
                }
                else
                {
                    curr=curr->one;
                }
            }
            else
            {
                if(curr->one)
                {
                    num+=(1<<i);
                    curr=curr->one;
                }
                else
                {
                    curr=curr->zero;
                }
            }
            
        }
        return num;
    }
    Node *getroot()
    {
        return root;
    }
};
