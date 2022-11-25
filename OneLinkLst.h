#pragma once
#include "Node.h"
template <class U>
class OneLinkLst
{
private:
	Node<U>* begin = nullptr;
public:
	OneLinkLst();
	~OneLinkLst()
	{

	};
	
	void append(U nd);
	void appstart(U nd);
	void lstPrint();
	void delNode(U nd);
	bool isEmpty();

};

template<class U>
inline OneLinkLst<U>::OneLinkLst()
{
}



template<class U>
inline void OneLinkLst<U>::append(U nd)
{
	Node<U>* el = new Node<U>(nd);
	if (this->isEmpty()) {
		this->begin = el;
	}
	else
	{
		Node<U>* iter = this->begin;
		while (iter->getRight() != 0)
		{
			iter = iter->getRight();
		}
		iter->setRight(el);
	}
}

template<class U>
inline bool OneLinkLst<U>::isEmpty()
{
	return ! (bool) this->begin;
}
