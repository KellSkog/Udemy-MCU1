Stack_Size  EQU         0x00000400
AREA        STACK,      NOINIT,     READWRITE,  ALIGN=3
Stack_Mem   SPACE       Stack_Size
AREA        RESET,      DATA,       READONLY
DCD         __initial_sp
DCD         Reset_Handler
AREA        |.text|,    CODE,       READONLY
IMPORT      SystemInit
IMPORT      __main
LDR         R0, =SystemInit
NMI_Handler PROC
            EXPORT      NMI_Handler [WEAK]
            B           .
            ALIGN
            ENDP