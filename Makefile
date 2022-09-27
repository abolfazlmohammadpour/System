.DEFAULT_GOAL := CreateAndRunExecutableOutput

CCompiler = gcc
CPlusPlusCompiler = g++

DirectoryOfSourceFile = Source
DirectoryOfOutputFile = Output

NameOfSourceFile = main.cpp
NameOfOutputFile = System.exe

CreateAndRunExecutableOutput:
	@${CPlusPlusCompiler} .\${DirectoryOfSourceFile}\${NameOfSourceFile} -o .\${DirectoryOfOutputFile}\${NameOfOutputFile}
	@.\${DirectoryOfOutputFile}\${NameOfOutputFile}

CreateExecutableOutput:
	@${CPlusPlusCompiler} .\${DirectoryOfSourceFile}\${NameOfSourceFile} -o .\${DirectoryOfOutputFile}\${NameOfOutputFile}

DeleteExecutableOutput:
	@DEL .\${DirectoryOfOutputFile}\${NameOfOutputFile}

RunExecutableOutput:
	@.\${DirectoryOfOutputFile}\${NameOfOutputFile}
