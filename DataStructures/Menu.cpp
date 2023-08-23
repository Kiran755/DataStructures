#include <iostream>
#include "Stack.h"
#include "Queue.h"
int main()
{
    bool Exit = false;
    int option = 0;
    Queue st(5);

    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(9);
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(14);
    st.insert(15);
    st.insert(15);
    st.insert(15);
    st.insert(15);
    st.pop();
    st.display();
    st.pop();
    
}