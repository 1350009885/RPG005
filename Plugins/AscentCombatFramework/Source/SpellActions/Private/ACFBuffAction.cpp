// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2021. All Rights Reserved. 


#include "ACFBuffAction.h"
#include "Actions/ACFBaseAction.h"
#include "Game/ACFFunctionLibrary.h"

void UACFBuffAction::OnNotablePointReached_Implementation()
{
	Super::OnNotablePointReached_Implementation();
	if (CharacterOwner && CharacterOwner->GetStatisticsComponent()) {
		CharacterOwner->GetStatisticsComponent()->AddTimedAttributeSetModifier(BuffToApply.modifier, BuffToApply.duration);
		UACFFunctionLibrary::PlayActionEffectLocally(ActionConfig.ActionEffect, CharacterOwner, this);
	}    	
}
