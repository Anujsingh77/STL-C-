#include<bits/stdc++.h>
using namespace std;
void explainpair() {
    pair<int, int>pr1 = make_pair(2, 8);
    cout << pr1.first<< " " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(2, 'b');
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{4, 'h'}, 8};
    cout << pr3.first.second << endl;
}
void explainVector() {
    vector<int> vec = {7, 8, 8, 6, 7};
    vec.insert(vec.begin() + 2, 4);

    for(auto it : vec) {
        cout << it << " ";
    }
}
void explainList() {
    list<int> ls = {6, 7};
    ls.push_front(1);
    for(auto it : ls) {
        cout << it << " ";
    }
}
void explainStack() {
    //LIFO
    stack<int> st;
    st.push(1);
    st.push(7);
     st.push(71);
      st.push(73);
       st.push(17);    st.push(27);

    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
    }
} 
void explainQueue() {
// FIFO
    queue<int> q;
    q.push(2);
    q.push(22);
    q.push(23);
    q.push(24);
    while(q.empty() == false) {
        cout << q.front() << " ";
        q.pop();
    }
} 
void explainPQ() {
    // stores the highest element at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    while(pq.empty() == false) {
        cout << pq.top () << " ";
        pq.pop();
        cout << endl;
    }
}
void explainSet() {
    /// stores only unique elements
    // and in ascending order


    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(12);
    st.insert(211);
    st.insert(213);
    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;
    


    auto it = st.upper_bound(18);
    cout << *it;
    
}
void explainMultiSet() {
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);

    cout << ms.count(1);
}
void explainUnorderedSet() {
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);

    auto it = st.find(11);
}
void explainMap() {
    map<int, string> mpp;
    mpp.insert({4, "Raj"});
    mpp[1] = "abc";
    mpp[1] = "vik";
    mpp[2] = "bcd";
    mpp[3] = "cat";

    auto it = mpp.find(5);
    if(it==mpp.end()) {
        cout << "not found" ;
    }
}
void explainUnorederedMap() {
    unordered_map<int, string> mpp;
    mpp.insert({4, "Raj"});
    mpp[1] = "abc";
    mpp[1] = "vik";
    mpp[2] = "bcd";
    mpp[3] = "cat";

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }
}
void explainMultiMap() {
    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});
    auto it = mpp.equal_range(2);
    for(auto i = it.first; i != it.second; i++) {
        cout << (*i).first << "->" << (*i).second << endl;
    }
}
void explainSort() {
    int arr[5] = {6, 2, 1, 7, 8};
    sort(arr + 1, arr + 4);
    for(int i = 0;i<5;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    vector<int> vec = {5, 7, 1, 0, 1};
    sort(vec.begin() + 1, vec.begin() + 4);
    for(auto it : vec) {
        cout << it << " ";
    }
}
void explainAccumulate(){
    int arr[5] = {6, 2, 1, 7, 0};
    cout << accumulate(arr + 4, arr + 5, 5);
}
void explainCount() {
    int arr[5] = {6, 2, 1, 1, 0};
    int num = 7;
    cout << count(arr, arr + 5, num);
}
void explainFind() {
    int arr[5] = {6, 2, 1, 1, 0};
    auto it = find (arr, arr+5, 8);
    if(it== (arr + 5)) {
        cout << "not found";
    }
}
void explainNextPermutation() {
    string str = "cba";
    do {
        cout << str << endl;
    }while(next_permutation(str.begin(), str.begin() + 3));
}
void explainPrevPermutation() {
    string str = "cab";
    do {
        cout << str << endl;
    }while(prev_permutation(str.begin(), str.begin() + 3));
}
void explainMaxElement() {
    int arr[] = {7, 6, 5, 10, 9};
    auto it = max_element(arr, arr +5);
    cout << *it;
}
void explainReverse() {
    int arr[] = {7, 6, 5, 10, 9};
    reverse(arr, arr + 5);
    for(int i = 0;i<5;i++) {
        cout << arr[i] << " ";
    }
}
// el1, el2
// tells true if el1 is before el2
// tells false if el1 has to be after el2
bool internalComparator(pair<int, int> el1, pair<int, int> el2) {
    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;
    if(el1.first < el2.first) return true;
    return false;
}
void explainComparator() {
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    // sort it according to
    // the second element 
    // {2, 9}, {3, 9}, {1, 6}, {2, 6}, {1, 5}
    sort(arr, arr+5, internalComparator);
    for(int i = 0;i<5;i++) {
        cout << "{" << arr[i].first << "," << arr[i].second << "} ";
    }
}
int main (){
    explainComparator();
    return 0;
  }