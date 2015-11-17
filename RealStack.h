//
// Stack of real numbers
//
#ifndef REAL_STACK_H
#define REAL_STACK_H

const int STACK_MAXSIIZE = 1024;

class StackException {
	public:
		const char *reason;
		StackException():
			reason("")
			{}

		StackException(const char *cause):
			reason(cause)
			{}
};

class RealStack {
	private:
		double* stack;
		int max_size;
		int size;
	public:
		RealStack();
		RealStack(int maxSize);
		~RealStack();
		void push(double) throw (StackException);
		double pop() throw (StackException);
		double top() const throw (StackException);
		int depth() const;
		void init();
		bool empty() const;
		double elementAt(int i) const;
};

#endif
