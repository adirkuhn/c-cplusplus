/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    if (head != NULL) {
        Node* temp = head;
    
        while (temp->next != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
        //print node last item
        cout << temp->data << endl;
    }
}