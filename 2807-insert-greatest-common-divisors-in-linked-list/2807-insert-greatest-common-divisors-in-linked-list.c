int GCD(int a, int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
   if(head==NULL || head->next==NULL) {
    return head;
   }
   struct ListNode* ptr=head;

   while(ptr!=NULL && ptr->next!=NULL){
    int gcdVAL= GCD(ptr->val, ptr->next->val);

    struct ListNode* newNode= (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val=gcdVAL;

    newNode->next=ptr->next;
    ptr->next= newNode;
    ptr=newNode->next;
   }
   return head;
}