// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class COOKINGITS_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	public:

	UBaseAttributeSet();

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_maxHealth)
	FGameplayAttributeData maxHealth;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, maxHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Stamina)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_maxStamina)
	FGameplayAttributeData maxStamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, maxStamina)

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_maxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);

	UFUNCTION()
	virtual void OnRep_maxStamina(const FGameplayAttributeData& OldMaxStamina);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
