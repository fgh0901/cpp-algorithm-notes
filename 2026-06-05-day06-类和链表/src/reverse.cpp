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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;//创建结构体指针指向头指针
        ListNode* pre = nullptr;//创建上一个指针初始化指向空
        while(cur!= nullptr)//当当前指针不为空时
        {
            ListNode* temp = cur->next;//创建临时指针保存当前节点的下一个节点的地址
            cur->next = pre;//将当前节点的下一个节点地址赋值为pre
            pre = cur;//pre指针迁移到当前指针
            cur = temp;//当前指针迁移到之前保存的下一个节点
        }
        return pre;
    }
};