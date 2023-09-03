class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isterminal;
    int childcount;
    TrieNode(char c){
        data=c;
        for(int i=0;i<26;i++)
            children[i]=NULL;
        isterminal=false;
        childcount=0;
    }
};


class Solution {
public:
    void insert(TrieNode* root,string str){
        if(str.length()==0){
            root->isterminal=true;
            return ;
        }
        TrieNode* child;
        char c=str[0];
        
        int index=c-'a';
        if(root->children[index]!=NULL)
            child=root->children[index];
        else{
            child=new TrieNode(c);
            root->childcount++;
            root->children[index]=child;
        }
        insert(child,str.substr(1));
    }      

    void findLCP(TrieNode* root,string first,string &ans){
         if(root->isterminal) {
                    return;
            }
        for(int i =0;i<first.length();i++){
            char ch=first[i];
            if(root->childcount==1){
                ans.push_back(ch);
                int index=ch-'a';
                root=root->children[index];
            }
            else{
                break;
            }
            if(root->isterminal) break;
        }
    }
    string longestCommonPrefix(vector<string>& str) {
        TrieNode* root=new TrieNode('-');
        for(int i=0;i<str.size();i++){
            insert(root,str[i]);
        }
        string first=str[0];
        string ans="";
        findLCP(root,first,ans);
        return ans;
    }
};