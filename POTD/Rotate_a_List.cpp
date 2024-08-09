//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
   Node* reverse(Node* h){
        Node* curr= h, *prev = nullptr, *nxt;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        int len = 0;
        Node* curr = head;
        while(curr){
            len++;
            curr = curr->next;
        }
        if(len == k){
            return head;
        }
        
        head = reverse(head);
        
        curr = head;
        
        int diff = len - k;
        Node* val;
        while(curr && diff>1){
            curr = curr->next;
            diff--;
        }
        val = curr->next;
        curr->next = NULL;
        Node* h1 = reverse(head);
        Node* h2 = reverse(val);
        
        curr = h1;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = h2;
        return h1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends