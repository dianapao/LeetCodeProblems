/*Given head which is a reference node to a singly-linked list. 
The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number
Return the decimal value of the number in the linked list.
Example: Input: head = [1,0,1]
         Output: 5
*/
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* current=head;
        string numBinary = "";      //here we are going to concatenate each element from the linked list
        
        if(head == nullptr) return 0;   
        
        while(current != nullptr){
            string aux = to_string(current->val);   //cast to string the value of the node
            numBinary += aux;       //we concatenate the value to the string numBinary
            current = current->next;    
        }
        
        short int position=numBinary.size()-1;  //position will be the power to which the i-th position will be raised 
        int decimalNum = 0;
        for(short int i=0; i<numBinary.size(); i++){
            decimalNum += ( (numBinary[i]-'0')*pow(2,position) );  //cast to int each element in numBinary and we raise
            position--;
        }
        return decimalNum;
    }
};