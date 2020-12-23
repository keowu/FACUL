#pragma warning (disable: 4100)

#include "helloworld.h"
#include "output.h"

/*
	Author: João Ferreira
	Desenvolvido para demonstração na apresentação :)
	Versão 1.0
*/

//Essa função vai ser ocorrer quando nosso driver for carregado pelo software e executar, semelhante ao main do c++
NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath) {
	pDriverObject->DriverUnload = UnloadDriver;
	//KdPrintEx é igual o do cout do c++, porem essa saída só é visualizada pelo windbg
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "Olá mundo, sou um kernel Driver !!!!\n"));
	return STATUS_SUCCESS;
}

//Essa função vai ser ocorrer quando nosso driver for parado pelo software
NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject) {
	//KdPrintEx é igual o do cout do c++, porem essa saída só é visualizada pelo windbg
	KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "Estou fora, agora não estou mais ativo :(\n"));
	return STATUS_SUCCESS;
}