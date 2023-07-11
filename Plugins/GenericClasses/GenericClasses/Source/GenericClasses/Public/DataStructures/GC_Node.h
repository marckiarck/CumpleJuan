// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


template <typename T>
class GENERICCLASSES_API GC_Node
{
public:
	GC_Node(T* newStoredObject);
	~GC_Node();

private:
	T* storedObject = nullptr;

public:
	GC_Node<T>* previousNode = nullptr;
	GC_Node<T>* nextNode = nullptr;

public:
	T* Get();
};

template <typename T>
GC_Node<T>::GC_Node(T* newStoredObject) : storedObject(newStoredObject)
{

}

template <typename T>
GC_Node<T>::~GC_Node()
{
	if (previousNode)
	{
		previousNode->nextNode = nextNode;
	}
	
	if (nextNode)
	{
		nextNode->previousNode = previousNode;
	}
	
}

template <typename T>
T* GC_Node<T>::Get()
{
	return storedObject;
}