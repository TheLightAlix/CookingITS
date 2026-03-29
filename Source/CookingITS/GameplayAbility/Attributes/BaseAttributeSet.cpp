// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttributeSet.h"
#include "Net/UnrealNetwork.h"


UBaseAttributeSet::UBaseAttributeSet(){
    Health=100.f;
    maxHealth=100.f;
    Stamina=100.f;
    maxStamina=100.f;
}

void UBaseAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth){
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Health, OldHealth);
}

void UBaseAttributeSet::OnRep_maxHealth(const FGameplayAttributeData& OldMaxHealth){
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, maxHealth, OldMaxHealth);
}

void UBaseAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina){
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Stamina, OldStamina);
}

void UBaseAttributeSet::OnRep_maxStamina(const FGameplayAttributeData& OldMaxStamina){
    GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, maxStamina, OldMaxStamina);
}

void UBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Health, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, maxHealth, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, maxStamina, COND_None, REPNOTIFY_Always);
}
