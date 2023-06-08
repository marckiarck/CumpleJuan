// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Core/Datatables/BaseDataTable.h"

FDatatbleDropdown::FDatatbleDropdown() : rowName("None")
{

}


bool FDatatbleDropdown::operator==(FDatatbleDropdown const& Other) const
{
	return rows == Other.rows && rowName == Other.rowName;
}

bool FDatatbleDropdown::operator!=(FDatatbleDropdown const& Other) const
{
	return rows != Other.rows || rowName != Other.rowName;
}