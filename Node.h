#pragma once
template <class T>
class Node
{private:
	T val;
	Node* right = nullptr;
public:
	Node(T v);
	~Node()
	{
		// затереть последующие элементы.
	}
	
	T getVal();
	
	void setVal(T v);

	Node* getRight() {
		return this->right;
	}

	void setRight(Node<T>* el) {
		this->right = el;
	}

};

template<class T>
inline Node<T>::Node(T v)
{
	this->val = v;
}
