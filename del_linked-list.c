delfirst(struct node*head)
{
    struct node *ptr;
    if(head == NULL)
    printf("list is already empty");
    else{
        ptr = head ;
        head = head->next;
        free(ptr);
    }
    return head;
}