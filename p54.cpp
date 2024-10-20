#include<iostream>
#include<set>

using namespace std;

int main(){

    int n = 0;
    cin >> n;
    //创建set数据类型
    // set自动去重排序
    set<int> st;

    while (n--)
    {
        int x;
        cin >> x;
        //向set中插入数据
        st.insert(x);
    }

    for(auto &i : st){
        cout << i << ' ';
    }
    
    return 0;
}