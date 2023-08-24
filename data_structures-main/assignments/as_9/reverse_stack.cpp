#include <iostream>
#include <stack>
#include <deque>
#include <queue>
using namespace std;


int main()
  {
    stack <int> my_stack;
    stack <int> other_stack_1;
    stack <int> other_stack_2;
    cout<<"Reversal One: "<<endl;
    cout<<"my_stack contains:"<<endl;

    for(int i=0;i<10;i++)
      {
        my_stack.push(i);
        //cout<<my_stack.top()<<endl;
      }

    for(int i=0;i<10;i++ )
      {
          other_stack_1.push(my_stack.top());

          my_stack.pop();
      }

    for(int i=0;i<10;i++)
      {
          other_stack_2.push(other_stack_1.top());
          other_stack_1.pop();
      }
    for(int i=0;i<10;i++)
      {
          my_stack.push(other_stack_2.top());
          other_stack_2.pop();
      //    cout<<my_stack.top()<<endl;
      }
      for(int i=0;i<10;i++)
        {
          cout<<my_stack.top()<<endl;
          my_stack.pop();

        }

    cout<<endl;
    cout<<"Reversal Two: "<<endl;
    cout<<"my_stack contains:"<<endl;
    queue<int> my_queue;

    for(int i=9;i>=0;i--)
      {
        my_stack.push(i);
        //cout<<my_stack.top()<<endl;
      }


    for(int i=0;i<10;i++)
      {
        my_queue.push(my_stack.top());
        my_stack.pop();

      }
      for(int i=0;i<10;i++)
        {
          my_stack.push(my_queue.front());
          my_queue.pop();
        }

        for(int i=0;i<10;i++)
          {
            cout<<my_stack.top()<<endl;
            my_stack.pop();

          }


// ---------------------------------------------------
      cout<<"Reversal Three: "<<endl;
      cout<<"my_stack contains:"<<endl;
      int my_var;

      for(int i=0;i<10;i++)
        {
          my_stack.push(i);

        }

for(int iter=0;iter<my_stack.size();iter++)
  {

    my_var=my_stack.top();
    my_stack.pop();

    for(int i=my_stack.size(); i > iter; i--)
      {
        other_stack_1.push(my_stack.top());
        my_stack.pop();
      }

    my_stack.push(my_var);

    for(int i= other_stack_1.size(); other_stack_1.empty()==0;i--)
      {
          my_stack.push(other_stack_1.top());
          other_stack_1.pop();
      }
  }

  for(int i=my_stack.size(); my_stack.empty()==0;i--)
    {
      cout<<my_stack.top()<<endl;
      my_stack.pop();

    }

return 0;
}
