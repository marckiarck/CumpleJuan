// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GenericClasses/Public/DataStructures/GC_Node.h"


template <typename T>
class GENERICCLASSES_API GC_TimedNode 
{
	GENERATE_NODE_BODY(GC_TimedNode, T);

public:
	GC_TimedNode(T* nodeObject, float popTime);

public:
	float popTime = 0.f;

};

template <typename T>
GC_TimedNode<T>::GC_TimedNode(T* nodeObject, float popTime) : GC_Node(nodeObject), popTime(popTime)
{

}


template <typename T>
class GENERICCLASSES_API TGC_TimedQueue
{
	
private:
	GC_TimedNode<T>* firstNode = nullptr;
	GC_TimedNode<T>* lastNode = nullptr;

public:
	void Enqueue(T* queuedObject, float popTime = 0.f);
	void Dequeue(float timeStep, TArray<T*>& returnArray);
};

template <typename T>
void TGC_TimedQueue<T>::Enqueue(T* queuedObject, float popTime)
{
	if (queuedObject == nullptr)
	{
		return;
	}

	GC_TimedNode<T>* queuedNode = new GC_TimedNode<T>(queuedObject, popTime);

	if (firstNode == nullptr)
	{
		firstNode = queuedNode;
		lastNode = queuedNode;
	}
	else
	{
		if (lastNode->popTime < popTime)
		{
			lastNode->nextNode = queuedNode;
			queuedNode->previousNode = lastNode;

			if (lastNode == firstNode)
			{
				firstNode = queuedNode;
			}
			lastNode = queuedNode;
		}
		else
		{
			GC_TimedNode<T>* currentNode = firstNode;
			while (currentNode != nullptr)
			{
				if (currentNode->popTime > popTime)
				{
					if (GC_TimedNode<T>* previousNode = currentNode->previousNode)
					{
						previousNode->nextNode = queuedNode;
						queuedNode->previousNode = previousNode;
					}
					else
					{
						firstNode = queuedNode;
					}

					queuedNode->nextNode = currentNode;
					currentNode->previousNode = queuedNode;
				}
			}
		}
	}
}

template <typename T>
void TGC_TimedQueue<T>::Dequeue(float timeStep, TArray<T*>& returnArray)
{
	returnArray.Empty();

	GC_TimedNode<T>* currentNode = firstNode;
	GC_TimedNode<T>* deletedNode = nullptr;
	while (currentNode)
	{
		if (currentNode->popTime < timeStep)
		{
			returnArray.Add(currentNode->Get());
			deletedNode = currentNode;
			currentNode = currentNode->nextNode;

			delete deletedNode;
		}
		else
		{
			currentNode->popTime -= timeStep;
		}
	}
}