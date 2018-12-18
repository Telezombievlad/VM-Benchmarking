DEF_LOAD("IntArithmLogic",          1000000, IntArithmLogic,          "LOGICx5 LDRx6 STRx1 CYCLEx1")
DEF_LOAD("IntArithmLogicInlineAsm", 1000000, IntArithmLogicInlineAsm, "ADDx1 SUBx1 XORx1 ANDx1 ORx1 CYCLEx1")
DEF_LOAD("IntArithmMul",            1000000, IntArithmMul,            "MULx5 LDRx6 STRx1 CYCLEx1")
DEF_LOAD("IntArithmMulInlineAsm",   1000000, IntArithmMulInlineAsm,   "MULx5 CYCLEx1")
DEF_LOAD("IntArithmDiv",            1000000, IntArithmDiv,            "DIVx5 LDRx6 STRx1 CYCLEx1")
DEF_LOAD("IntArithmDivInlineAsm",   1000000, IntArithmDivInlineAsm,   "DIVx5 CYCLEx1")
DEF_LOAD("FloatArithmAdd",          1000000, FloatArithmAdd,          "ADDx5 LDRx6 STRx1 CYCLEx1")
DEF_LOAD("FloatArithmAddInlineAsm", 1000000, FloatArithmAddInlineAsm, "ADDx5 CYCLEx1")
DEF_LOAD("FloatArithmMul",          1000000, FloatArithmMul,          "MULx5 LDRx6 STRx1 CYCLEx1")
DEF_LOAD("FloatArithmMulInlineAsm", 1000000, FloatArithmMulInlineAsm, "MULx5 CYCLEx1")
DEF_LOAD("BranchingLocalHistory",   1000000, BranchingLocalHistory,   "ALUx12, BRANCHx6")
DEF_LOAD("BranchingGlobalHistory",  1000000, BranchingGlobalHistory,  "ALUx3, BRANCHx3")
DEF_LOAD("MemoryAccessArrayWalk",    100000, MemoryAccessArrayWalk,   "LINKED LIST TRAVERSAL")
DEF_LOAD("FunctionCall",            1000000, FunctionCall,            "CALLx5")
DEF_LOAD("SystemCall",              1000000, SystemCallGetSetUserId,  "GETUIDx1 SETUIDx1")
DEF_LOAD("Cycle",                    100000, Cycle,                   "BRANCHx1 ARITHMx2")
