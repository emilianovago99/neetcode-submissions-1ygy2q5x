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
    bool hasCycle(ListNode* head) {
        unordered_map<string,int>mapa;
        ListNode* aux;
        while(head != nullptr)
        {
            aux = head;
            ostringstream ss;
            ss << aux; 
            string ref = ss.str();
            if(mapa[ref] != 0)
                return 1;
            else
                {
                    
                    mapa[ref]++;
                }
            head = head->next;
        }

        return 0;
    }
};
