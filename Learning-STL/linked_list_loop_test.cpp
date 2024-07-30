Node *temp = head;
        Node *pre = head;
        map<int,int>m;
        m[temp]++;
        while(ture){
            pre = temp;
            temp = temp->next;
            m[temp]++;
            for(int i = 0; i < m.size(); i++){
                if(m.second>1){
                    pre->next = NULL;
                }
            }
        }