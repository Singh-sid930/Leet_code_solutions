
#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

struct Node {
  unsigned int data;
  struct Node *next;
  struct Node *previous;
 
};

unsigned int fibNum(unsigned int ind){

  struct Node* start = NULL;
  struct Node* pre = NULL;
 
 
  start = (struct Node*)malloc(sizeof(struct Node));
  pre = (struct Node*)malloc(sizeof(struct Node));
 
 
  start->data = 1;
  start->next = (struct Node*)malloc(sizeof(struct Node));
  start->previous = (struct Node*)malloc(sizeof(struct Node));
  pre = start->previous;
  pre->data = 1;
 
 
  for (int i = 1; i <=ind; i++){
   
    int cur_data = start->data;
   
    cout<<cur_data;
    cout<<"||";
   
    start->next = (struct Node*)malloc(sizeof(struct Node));
    start = start->next;
   
    start->data = cur_data + pre->data;
   
    start->previous = (struct Node*)malloc(sizeof(struct Node));
    pre = start->previous;
   
   
    pre->data = cur_data;
   
   
   
   
   
  }
 
  return pre->data;
 
 

}

int main()
{
    const uint32_t fibVal = fibNum(10u);
  std::cout << "Fib value of 10 is " << fibVal << std::endl;
}

/*
Your previous Plain Text content is preserved below:

 */
