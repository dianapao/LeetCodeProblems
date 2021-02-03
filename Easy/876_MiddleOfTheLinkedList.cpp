/*Given a non-empty, singly linked list with head node head, return a middle node of linked list.
  If there are two middle nodes, return the second middle node.
Example: Input: [1,2,3,4,5]
		  Output: Node 3 from this list (Serialization: [3,4,5])
		  The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *it = head;
        short int tot=0;	//count the total of elements
        while(it != nullptr){
            tot++;
            it = it->next;
        }
        
        tot = tot/2;	//now we get the middle of the L.L
        it = head;
        while(tot--){	//until the middle
            it->val = head->next->val;		//we reemplace the current node with the next to delete this current.
            it->next = head->next->next;	/*as we have the next node in the current. current and next are the same so
            								   we ignore the next node y it->next will be the next of the next.
            								It is like erase first node until the middle.*/
            head = it;		//now the start of the L.L is the current node after erase.
        }
        return head;
    }
};

/*in the second while we can replace all content of this by only it = it->next y finally return it. It is more easy*/