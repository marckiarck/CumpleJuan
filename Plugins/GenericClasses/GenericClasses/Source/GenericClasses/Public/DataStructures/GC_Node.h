// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define GENERATE_NODE_BODY(NODE_CLASS, TYPENAME_TEMPLATE) \
\
public: \
	NODE_CLASS(TYPENAME_TEMPLATE* newStoredObject) : storedObject(newStoredObject) \
	{ \
	 \
	}; \
	\
	~NODE_CLASS() \
	{ \
		if (previousNode) \
		{ \
			previousNode->nextNode = nextNode; \
		} \
			 \
		if (nextNode) \
		{ \
			nextNode->previousNode = previousNode; \
		} \
			\
	}; \
	 \
private: \
	TYPENAME_TEMPLATE* storedObject = nullptr; \
			\
public: \
	NODE_CLASS<TYPENAME_TEMPLATE>* previousNode = nullptr; \
	NODE_CLASS<TYPENAME_TEMPLATE>* nextNode = nullptr; \
			\
public: \
	TYPENAME_TEMPLATE* Get() \
	{ \
		return storedObject; \
	}; \
			\
private: \

//template <typename T>
//GC_Node<T>::GC_Node(T* newStoredObject) : storedObject(newStoredObject)
//{
//
//}

//template <typename T>
//GC_Node<T>::~GC_Node()
//{
//	if (previousNode)
//	{
//		previousNode->nextNode = nextNode;
//	}
//	
//	if (nextNode)
//	{
//		nextNode->previousNode = previousNode;
//	}
//	
//}

//template <typename T>
//T* GC_Node<T>::Get()
//{
//	return storedObject;
//}