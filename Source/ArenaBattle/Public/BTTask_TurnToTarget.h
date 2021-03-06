// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_TurnToTarget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UBTTask_TurnToTarget : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_TurnToTarget();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& _rOwnerComp, uint8* _pNodeMemory) override;

};
