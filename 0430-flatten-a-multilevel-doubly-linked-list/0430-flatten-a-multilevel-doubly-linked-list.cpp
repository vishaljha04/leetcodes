class Solution {
public:
    Node* flatten(Node* head) {
        flattenDFS(head);
        return head;
    }

    Node* flattenDFS(Node* head) {
        Node* curr = head;
        Node* last = head;

        while (curr) {
            Node* next = curr->next;

            if (curr->child) {
                Node* childHead = curr->child;
                Node* childTail = flattenDFS(childHead);

                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                if (next) {
                    childTail->next = next;
                    next->prev = childTail;
                }

                last = childTail;
            } else {
                last = curr;
            }

            curr = next;
        }

        return last;
    }
};