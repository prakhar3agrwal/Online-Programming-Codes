
MinStack::MinStack() {
    size = 0;
    s.clear();
}

void MinStack::push(int x) {
    int mine = x;
    if(size>0){
        pair <int,int>temp = s[size-1];
        mine = min(mine,temp.second);
    }
    s.push_back(make_pair(x, mine));
    size++;
}

void MinStack::pop() {
    if(size <1)
    return ;
    else
    s.pop_back();
    size--;
}

int MinStack::top() {
    if(size <1 )
    return -1;
    return s[size-1].first;
}

int MinStack::getMin() {
    if(size<1)
    return -1;
    else
    return s[size-1].second;
}


