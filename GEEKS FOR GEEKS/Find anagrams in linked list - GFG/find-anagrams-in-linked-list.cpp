//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        if(!head) return {};
        
        vector<Node *> ans;
        int n = s.size();
        vector<int> a(26), b(26);
        
        for(int i = 0; i < n; i++) a[s[i] - 'a']++;
        
        Node *curr = head, *prev = head;
        int len = 0;
        while(curr != NULL) {
            b[curr->data - 'a']++;
            len++;
            
            if(a == b) {
                ans.push_back(prev);
                prev = curr->next;
                curr->next = NULL;
                curr = prev;
                for(int i = 0; i < 26; i++) b[i] = 0;
                len = 0;
            } else {
                curr = curr->next;
                if(len >= n) {
                    b[prev->data - 'a']--;
                    prev = prev->next;
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends