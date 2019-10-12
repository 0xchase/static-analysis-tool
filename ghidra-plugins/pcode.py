#TODO write a description for this script
#@author 
#@category PCode
#@keybinding 
#@menupath 
#@toolbar 


#TODO Add User Code Here

from  ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.pcode import PcodeSyntaxTree
from ghidra.app.decompiler import DecompileResults

print("="*50)
program = currentProgram
decompinterface = DecompInterface()
decompinterface.openProgram(program);
functions = program.getFunctionManager().getFunctions(True)
for function in list(functions):
    #print(function)
    if "main" in str(function) and not "start" in str(function):
    ## decompile each function
    	tokengrp = decompinterface.decompileFunction(function, 0, ConsoleTaskMonitor())
	print("-"*10 + " Decompiled Function " + "-"*10)
    	print(tokengrp.getDecompiledFunction().getC())
	
	print("-"*10 + " High Function " + "-"*10)
	hf = DecompileResults.getHighFunction(tokengrp)
	highOps = hf.getPcodeOps()
	for op in highOps:
		print(op)
		print("")
	
	#ops = PcodeSyntaxTree.getPcodeOps(function)

	print("-"*10 + " Pcode " + "-"*10)
	
print("DONE WITH IT")


