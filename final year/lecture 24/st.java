import java.util.ArrayList;

class Stack {
    public ArrayList<Integer> arr;

    Stack() {
        arr = new ArrayList<>();
    }

    void push(int x) {
        arr.add(x);
    }

    void pop() {
        if (!arr.isEmpty()) {
            int top = arr.get(arr.size() - 1);
            arr.remove(arr.size() - 1);
            // return top;
        }
    }

    int top() {
        if (!arr.isEmpty()) {
            return arr.get(arr.size() - 1);
        }
        return -1; // or throw an exception
    }

    boolean empty() {
        return arr.isEmpty();
    }
}

public class Main {
    public static void main(String[] args) {

        Stack s = new Stack();

        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);

        while (!s.empty()) {
            System.out.print(s.top() + " ");
            s.pop();
        }
    }
}