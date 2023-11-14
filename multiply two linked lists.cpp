long long  multiplyTwoLists (Node* l1, Node* l2)
{
 long long sum1=0;
 long long sum2=0;

     while(l1!=NULL){
         sum1=sum1*10+l1->data;
         sum1=sum1%1000000007;
         l1=l1->next;
     }
     while(l2!=NULL){
         sum2=sum2*10+l2->data;
         sum2=sum2%1000000007;
         l2=l2->next;
     
 }
 return (sum1*sum2)%1000000007;
 
}
