#pragma once
#include "stdafx.h"

template<typename T>
class BinaryTreeNode
{
public:
	T data;
	BinaryTreeNode<typename T>* lchild;
	BinaryTreeNode<typename T>* rchild;

	BinaryTreeNode(const T &_data)
	{
		data = _data;
		lchild = rchild = NULL;
	}
};

template<typename T, typename K = T>
class BinaryTreeInterface
{
public:
	virtual ~BinaryTreeInterface() {};

	virtual void insert() = 0;
	virtual void remove() = 0;
	virtual void bft() = 0;
	virtual void preDft() = 0;
	virtual void inDft() = 0;
	virtual void postDft() = 0;
	virtual void doAtSearch() = 0;
	virtual void leftRotation() = 0;
	virtual void rightRotation() = 0;

protected:
private:
};

