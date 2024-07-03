//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};




class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
         Node* temp = head;       
      
                     
    Node* prev = nullptr;

                   
    while (temp != NULL && temp->next != NULL) {  
        if (temp->data != temp->next->data) {          
            prev = temp;                                           
            temp = temp->next;                            
            continue;
        }

        while (temp->next != NULL && temp->data == temp->next->data) {     
         
            Node* toDel = temp->next;                                            
            temp->next = temp->next->next;                                       
            delete toDel;                                                                            
        }
        Node* toDel = temp;        
 
        if (temp == head) {                    
             
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        temp = temp->next; 
        delete toDel;           
    return head;
    }
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}
