    #include<bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:
        int data;
        Node* next;
        
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

        ~Node()
        {
            int value = this->data;
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
            cout << "Memory is freed at node having data " << value << endl;
        }
    };

    void insertnode(Node* &tail, int element, int d)
    {
        if(tail == NULL)
        {
            // If the list is empty, create a new node and point it to itself
            Node* temp = new Node(d);
            tail = temp;
            temp->next = temp;
        }
        else
        {
            // Non-empty list
            Node* curr = tail;
            
            // Find the node with the value 'element'
            while(curr->data != element)
            {
                curr = curr->next;
                // Edge case: element not found, consider handling it
            }
            
            // Element found, now insert the new node
            Node* temp = new Node(d);
            temp->next = curr->next;
            curr->next = temp;
            
            
        }
    }

    void print(Node* &tail)
    {
    
        
        Node* temp = tail;
        
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } 
        while(tail != temp);
        cout<<endl;
    }
    void deletenode(Node* &tail, int element)
    {
        if(tail == NULL)
        {
            cout<<"the list is empty "<<endl;
            return;
        }
        else
        {
            
            Node* prev=tail;
            Node* curr = prev->next;
            while(curr->data!=element)
            {
                prev= curr;
                curr=curr->next;
            }
            // single node ll
            if(curr==prev)
            {
                tail=NULL;
            }
            // >=2 node 
            else if(tail==curr)
            {
                tail=prev;
            }
            prev->next= curr->next;
            curr->next = NULL;
            delete curr;

        }



    }

    int main()
    {
        Node* tail = NULL;
        insertnode(tail,5,3);
        print(tail); 
        insertnode(tail,3,5); 
        insertnode(tail,5,7);
        insertnode(tail,7,9);
        insertnode(tail,9,11);
        print(tail); 
        deletenode(tail,3);
        print(tail); 
        cout<<"tail - "<<tail->data<<endl;

    
        return 0;
    }
