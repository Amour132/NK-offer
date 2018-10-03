class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		if (stack1.empty() && stack2.empty())
		{
			return 0;
		}
		int temp = 0;
		if (stack2.size() >0)
		{
			temp = stack2.top();
			stack2.pop();
			return temp;
		}
		else
		{
			while (stack1.size() >0)
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
			temp = stack2.top();
			stack2.pop();
			return temp;
		}
		return 0;

	}

private:
	stack<int> stack1;
	stack<int> stack2;
};