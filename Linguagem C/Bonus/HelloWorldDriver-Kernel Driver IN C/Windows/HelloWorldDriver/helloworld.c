#pragma warning (disable: 4100)

#include "helloworld.h"
#include "output.h"

/*
	Author: Jo�o Ferreira
	Desenvolvido para demonstra��o na apresenta��o :)
	Vers�o 1.0
*/

//Essa fun��o vai ser ocorrer quando nosso driver for carregado pelo software e executar, semelhante ao main do c++
NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath) {
	pDriverObject->DriverUnload = UnloadDriver;
	//KdPrintEx � igual o do cout do c++, porem essa sa�da s� � visualizada pelo windbg
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "Ol� mundo, sou um kernel Driver !!!!\n"));
	return STATUS_SUCCESS;
}

//Essa fun��o vai ser ocorrer quando nosso driver for parado pelo software
NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject) {
	//KdPrintEx � igual o do cout do c++, porem essa sa�da s� � visualizada pelo windbg
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "Estou fora, agora n�o estou mais ativo :(\n"));
	return STATUS_SUCCESS;
}