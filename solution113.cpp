#include <iostream>
using namespace std;

int main() {
    int n, demand, stock = 0, not_served = 0;
    // m表示每天开始时的药品总量，n表示这一天取药的人数，
    // demand表示病人请求的药品数量，stock表示当时的库存量，
    // not_served表示没有取上药品的病人数量

    cin >> stock >> n; // 输入stock和n

    for (int i = 0; i < n; i++) { // 循环处理每个病人的请求
        cin >> demand;
        if (demand <= stock) { // 如果库存够用
            stock -= demand; // 减少库存
        } else { // 否则
            not_served++; // 计数器加1
        }
    }

    cout << not_served << endl; // 输出结果

    return 0;
}
