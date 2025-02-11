/*Scenario:
An e-commerce platform processes thousands of customer orders daily. 
Each order has a priority (e.g., high, medium, low), and the system must always process high-priority orders first. 
Orders also have timestamps, and if two orders have the same priority, the older order should be processed first.
Task:
Design a system to efficiently process incoming orders using C++ and STL. 
The system should support the following operations:
Adding a new order (order_id, priority, timestamp).
Retrieving and processing the highest-priority order.
Removing processed orders.
Hint:
Use a priority queue (std::priority_queue) with a custom comparator to maintain order priority while ensuring that
 orders with the same priority are processed based on timestamps.*/
 #include <iostream>
#include <queue>
#include <vector>
struct Order {
    int order_id;
    int priority;
    long long timestamp;
    Order(int id, int prio, long long time) : order_id(id), priority(prio), timestamp(time) {}
};

struct CompareOrder {
    bool operator()(const Order& o1, const Order& o2) {
        if (o1.priority == o2.priority) {
            return o1.timestamp > o2.timestamp;
        }
        return o1.priority < o2.priority;
    }
};

class OrderProcessingSystem {
private:
    std::priority_queue<Order, std::vector<Order>, CompareOrder> orderQueue;

public:
    void addOrder(int order_id, int priority, long long timestamp) {
        orderQueue.emplace(order_id, priority, timestamp);
    }

    void processOrder() {
        if (orderQueue.empty()) {
            std::cout << "No orders to process.\n";
            return;
        }
        Order topOrder = orderQueue.top();
        orderQueue.pop();
        std::cout << "Processing Order ID: " << topOrder.order_id << " with Priority: " << topOrder.priority << "\n";
    }
};

int main() {
    OrderProcessingSystem ops;
    
    ops.addOrder(101, 2, 1707571234);
    ops.addOrder(102, 1, 1707571200);
    ops.addOrder(103, 3, 1707571300);
    ops.addOrder(104, 3, 1707571100);
    
    ops.processOrder();
    ops.processOrder();
    ops.processOrder();
    ops.processOrder();
    ops.processOrder();
    
    return 0;
}
