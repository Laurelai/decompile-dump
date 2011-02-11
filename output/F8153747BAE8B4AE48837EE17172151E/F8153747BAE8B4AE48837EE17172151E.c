int global29 = 0;
char ZwQuerySystemInformation[0] = "\xffffff8aE";
char global30 = 1;
char memcpy[0] = "$F";
char ZwOpenFile[0] = "VC";
char PsGetVersion[0] = "\xffffff9aC";
void ExFreePoolWithTag;
char _stricmp[0] = "~E";
void RtlInitUnicodeString;
int global11 = 0;
char global12 = 1;
char global22[0] = "\xffffffb8w";
char memset[0] = ".F";
int global9 = 0;
int global8 = 0;
char global39[0] = "";
char RtlInitializeGenericTable[0] = "nD";
int global43 = 0;
int global42 = 0;
int global41 = 0;
char global40 = 0;
char ZwQueryValueKey[0] = ".E";
short global16 = 92;
void KeGetCurrentIrql;
char ZwClose[0] = "LC";
int global1 = 0;
short global0 = 0x724e;
char global5 = 1;
char global4 = 0;
int global3 = 0;
char ExAllocatePool[0] = ",C";
char global10[0] = "";
char PsSetLoadImageNotifyRoutine[0] = "\xffffffaaC";
char ZwQueryInformationFile[0] = "dC";
char ZwReadFile[0] = ">C";
char global26[0] = "h\x04\x01";
char ZwAllocateVirtualMemory[0] = "\xffffffc2D";
char global24[1];
char global23[1];
char global34 = 1;
char global33 = 0;
int global32 = 0;
int global31 = 0;
char ZwOpenKey[0] = "@E";
int global28 = 0;
int global27 = 0;
char global46 = 1;
int global45 = 0;
char IoRegisterDriverReinitialization[0] = "\xfffffff0B";

proc1(int param5, int param1, int param2, int param3, int param4);
proc2(int param2, int param3, int param1, int param9, int param4, int param8, int param5);
proc3(int param6, int param3, int param4, int param2, int param1, int param5);
VOID proc4(PDRIVER_OBJECT DriverObject, PVOID Context, ULONG Count);
proc5(int param3, int param2, int param4, int param1, int param5, int param6);
proc6();
void proc7(int param5, int param6, int param8, int param9, int param2, int param10, int param1, int param3, int param4);
proc8(int param4, int param8, int param5, int param6, int param1, int param2, int param3, int param7);
proc9(int param5, int param6, int param8, int param9, int param1, int param10, int param11, int param4, int param2, int param3);
void proc10(int param1);
proc11(int param5, int param4, int param1, int param2, int param3);
proc12(int param1, int param2);
proc13(int param2, int param3, int param5, int param1, int param4);
proc14(int param9, int param5, int param7, int param8, int param2, int param1, int param3, int param4);
void proc15();
proc16(int param1, int param2);
proc17(int param6, int param5, int param4, int param2, int param1, int param3, int param7);
proc18(int param7, int param5, int param2, int param1, int param3, int param4);
proc19(int param1);
proc20(int param2, int param1, int param3, int param4);
proc21(int param4, int param5, int param1, int param2, int param3, int param6);
proc22(int param3, int param2, int param1);
proc23(int param9, int param3, int param4, int param5, int param1, int param6, int param7, int param10, int param2, int param8);
proc24(int param7, int param5, int param6, int param2, int param1, int param3, int param4);
proc25(int param5, int param4, int param1, int param2, int param3);
proc26(int param5, int param4, int param1, int param2, int param6, int param3, int param7);
proc27(int param2, int param1, int param3, int param4);
proc28(int param4, int param1, int param3, int param2);
proc29(int param1);
__imp_memset(int param1, int param2, int param3);
proc31(int param4, int param1, int param2, int param3);
__imp_memcpy();
proc33(int param2, int param1);
proc34(int param9, int param2, int param3, int param11, int param4, int param1, int param5, int param6, int param10, int param7, int param12);
__imp_ZwQuerySystemInformation();
proc36(int param2, int param1, int param3);
proc37(int param1, int param2, int param3);

// address: 0x103aa
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    int local0; 		// r28{131}
    int local1; 		// r28{108}
    int local10; 		// r28{170}
    int local11; 		// m[r28 - 4]{278}
    int local12; 		// m[r28 - 4]{281}
    int local13; 		// m[r29 - 4]{284}
    int local14; 		// m[r29 - 28]{285}
    int local15; 		// global1{176}
    int local16; 		// global3{175}
    char local17; 		// global4{177}
    int local18; 		// tmpb{180}
    int local19; 		// r28{21}
    int local2; 		// r28{235}
    int local20; 		// m[r28 - 4]{1}
    int local21; 		// m[r28 - 8]{3}
    int local22; 		// m[r28 - 12]{6}
    int local23; 		// m[r28 - 4]{14}
    int local24; 		// m[r28 - 8]{16}
    int local25; 		// m[r28 - 12]{19}
    int local26; 		// m[r29 - 4]{12}
    int local27; 		// m[r29 - 28]{30}
    int local28; 		// global1{13}
    int local29; 		// global3{22}
    int local3; 		// r28{68}
    char local30; 		// global4{29}
    int local31; 		// tmpb{44}
    char local32[0]; 		// %pc{20}
    void *local33; 		// %pc{44}
    int local34; 		// r28{192}
    int local35; 		// m[r28 - 4]{286}
    int local36; 		// m[r28 - 8]{287}
    int local37; 		// m[r28 - 12]{288}
    int local38; 		// m[r28 - 4]{289}
    int local39; 		// m[r28 - 8]{290}
    int local4; 		// r28{8}
    int local40; 		// m[r28 - 12]{291}
    int local41; 		// m[r29 - 4]{292}
    int local42; 		// m[r29 - 28]{293}
    int local43; 		// global1{198}
    int local44; 		// global3{197}
    char local45; 		// global4{199}
    int local46; 		// tmpb{202}
    void *local47; 		// %pc{203}
    int local48; 		// m[r29 - 28]{46}
    int local49; 		// r28{44}
    int local5; 		// m[r28 - 8]{279}
    int local50; 		// local10{170}
    int local51; 		// local16{175}
    int local52; 		// local15{176}
    char local53; 		// local17{177}
    int local54; 		// local18{180}
    void *local55; 		// local9{181}
    int local56; 		// local11{278}
    int local57; 		// local5{279}
    int local58; 		// local6{280}
    int local59; 		// local12{281}
    int local6; 		// m[r28 - 12]{280}
    int local60; 		// local7{282}
    int local61; 		// local8{283}
    int local62; 		// local13{284}
    int local63; 		// local14{285}
    int local64; 		// local34{192}
    int local65; 		// local44{197}
    int local66; 		// local43{198}
    char local67; 		// local45{199}
    int local68; 		// local46{202}
    void *local69; 		// local47{203}
    int local7; 		// m[r28 - 8]{282}
    int local70; 		// local35{286}
    int local71; 		// local36{287}
    int local72; 		// local37{288}
    int local73; 		// local38{289}
    int local74; 		// local39{290}
    int local75; 		// local40{291}
    int local76; 		// local41{292}
    int local77; 		// local42{293}
    int local78; 		// r28{214}
    int local79; 		// global3{219}
    int local8; 		// m[r28 - 12]{283}
    int local80; 		// global1{220}
    char local81; 		// global4{221}
    char local82[0]; 		// %pc{225}
    int local83; 		// r28{270}
    int local84; 		// r0
    int local85; 		// r8
    int local86; 		// r10
    int local87; 		// r11
    int local88; 		// r24
    int local89; 		// r25
    char local9[0]; 		// %pc{181}
    int local90; 		// r26
    int local91; 		// r27
    int local92; 		// r28
    int local93; 		// r29
    int local94; 		// r30
    int local95; 		// r31
    char local96; 		// tmpb

    local81 = global4;
    local54 = local96;
    local20 = 24;
    local21 = 0x13e28;
    local4 = proc1(0x13e28, 24, local91, local94, local95); /* Warning: also results in local93 */
    local56 = local20;
    local57 = local21;
    local58 = local22;
    local91 = 0;
    local87 = 0;
    local26 = 0;
    local28 = 128;
    local23 = 512;
    local24 = 0;
    local32 = ExAllocatePool;
    ExAllocatePool();
    local50 = local19;
    local52 = local28;
    local55 = local32;
    local59 = local23;
    local60 = local24;
    local61 = local25;
    local62 = local26;
    local78 = local19;
    local80 = local28;
    local82 = local32;
    local29 = local88;
    local51 = local29;
    local79 = local29;
    if (local88 != 0) {
        local30 = 1;
        local27 = 0x13e80;
        local53 = local30;
        local63 = local27;
        local10 = local50;
        local16 = local51;
        local15 = local52;
        local17 = local53;
        local18 = local54;
        local9 = local55;
        local11 = local56;
        local5 = local57;
        local6 = local58;
        local12 = local59;
        local7 = local60;
        local8 = local61;
        local13 = local62;
        local14 = local63;
        local64 = local10;
        local65 = local16;
        local66 = local15;
        local67 = local17;
        local68 = local18;
        local69 = local9;
        local70 = local11;
        local71 = local5;
        local72 = local6;
        local73 = local12;
        local74 = local7;
        local75 = local8;
        local76 = local13;
        local77 = local14;
        local78 = local10;
        local79 = local16;
        local80 = local15;
        local81 = local17;
        local82 = local9;
        while ((unsigned)*(int*)(local93 - 28) < 0x13e84) {
            local88 = *(int*)*(int*)(local93 - 28);
            if (local88 != local91) {
                *(int*)(local10 - 4) = local9;
                (**(int*)*(int*)(local93 - 28))(local8, local6, local7, local5, 512, 24, local9, local84, (unsigned char) local88, local86, local87, local88, local89, local90, local91, local93, local94, local95, 0, 0x13e80, <all>, global5[0], SUBFLAGS32(local88, local91, local88 - local91), (unsigned)local88 < (unsigned)local91);
                local64 = local49;
                local65 = global3;
                local66 = global1;
                local67 = global4;
                local68 = local31;
                local69 = local33;
                local70 = *(int*)(local92 - 4);
                local71 = *(int*)(local92 - 8);
                local72 = *(int*)(local92 - 12);
                local73 = *(int*)(local4 - 4);
                local74 = *(int*)(local4 - 8);
                local75 = *(int*)(local4 - 12);
                local76 = *(int*)(local93 - 4);
                local77 = *(int*)(local93 - 28);
            }
            local34 = local64;
            local44 = local65;
            local43 = local66;
            local45 = local67;
            local46 = local68;
            local47 = local69;
            local35 = local70;
            local36 = local71;
            local37 = local72;
            local38 = local73;
            local39 = local74;
            local40 = local75;
            local41 = local76;
            local42 = local77;
            local48 = *(int*)(local93 - 28) + 4;
            local50 = local34;
            local51 = local44;
            local52 = local43;
            local53 = local45;
            local54 = local46;
            local55 = local47;
            local56 = local35;
            local57 = local36;
            local58 = local37;
            local59 = local38;
            local60 = local39;
            local61 = local40;
            local62 = local41;
            local63 = local42;
            local10 = local50;
            local16 = local51;
            local15 = local52;
            local17 = local53;
            local18 = local54;
            local9 = local55;
            local11 = local56;
            local5 = local57;
            local6 = local58;
            local12 = local59;
            local7 = local60;
            local8 = local61;
            local13 = local62;
            local14 = local63;
            local64 = local10;
            local65 = local16;
            local66 = local15;
            local67 = local17;
            local68 = local18;
            local69 = local9;
            local70 = local11;
            local71 = local5;
            local72 = local6;
            local73 = local12;
            local74 = local7;
            local75 = local8;
            local76 = local13;
            local77 = local14;
            local78 = local10;
            local79 = local16;
            local80 = local15;
            local81 = local17;
            local82 = local9;
        }
        local88 = 0;
    } else {
        local88 = 0xc0000001;
    }
    local92 = local78;
    global3 = local79;
    global1 = local80;
    global4 = local81;
    local83 = local92;
    if (local88 == local91) {
        if (*(int*)0x13e98 != 0) {
            local84 = proc2(local84, local87, 0, 0x13e99, local91, 632, local95); /* Warning: also results in local86, local87, local90 */
            global5 = local87;
        }
        local2 = local92;
        local83 = local2;
        if (((unsigned char) *(int*)0x13e99 & 0x1) == 0) {
L10:
            if (((unsigned char) *(int*)0x13e99 & 0x2) == 0) {
L7:
                local88 = 0;
            } else {
                if (*(int*)*(int*)0x123ac != local87) {
L8:
                    local88 = 0xc0000001;
                } else {
                    goto L7;
                }
            }
        } else {
            if (*(int*)*(int*)0x123b0 == local91) {
                goto L10;
            } else {
                goto L8;
            }
        }
        if (local88 == local91) {
            *(int*)(local92 - 4) = 0x14049;
            *(int*)(local92 - 8) = local93 - 40;
            RtlInitUnicodeString(local93 - 40, &global0);
            *(int*)(local92 - 12) = local93 - 32;
            *(int*)(local92 - 16) = local91;
            *(int*)(local92 - 20) = 256;
            *(int*)(local92 - 24) = 34;
            *(int*)(local92 - 28) = local93 - 40;
            *(int*)(local92 - 32) = local91;
            *(int*)(local92 - 36) = *(int*)(local93 + 8);
            *(int*)(local92 - 40) = *(int*)0x123d8;
            local88 = IoCreateDevice(*(int*)(local93 + 8), local91, local93 - 40, 34, 256, local91, local93 - 32);
            local83 = local0;
            if (local88 == local91) {
                *(int*)(*(int*)(local93 + 8) + 56) = 0x109e8;
                *(int*)(*(int*)(local93 + 8) + 64) = 0x109e8;
                *(int*)(*(int*)(local93 + 8) + 112) = 0x10a04;
                *(int*)(local92 - 40) = local91;
                *(int*)(local92 - 44) = 0x1034c;
                *(int*)(local92 - 48) = *(int*)(local93 + 8);
                *(int*)(local92 - 52) = *(int*)0x123b8;
                IoRegisterDriverReinitialization(*(int*)(local93 + 8), proc4, local91);
                local83 = local92;
            }
        }
    }
    local92 = local83;
    *(int*)(local93 - 4) = *(int*)(local93 - 4) | -1;
    local94 = proc3(DriverObject, RegistryPath, local93, *(int*)(local93 - 16), *(int*)local92, *(int*)local93); /* Warning: also results in local89, local91, local93, local95 */
    return 0;
}

// address: 0x12200
proc1(int param5, int param1, int param2, int param3, int param4) {
    int local0; 		// r28

    *(int*)(local0 - 4) = 0x121ee;
    *(int*)(local0 - 8) = *(int*)0;
    *(int*)(local0 - param1 - 12) = param2;
    *(int*)(local0 - param1 - 16) = param3;
    *(int*)(local0 - param1 - 20) = param4;
    *(int*)(local0 - 16) = local0 - param1 - 20;
    *(int*)(local0 - param1 - 24) = *(int*)local0;
    *(int*)local0 = param5;
    *(int*)0 = local0 - 8;
    return local0 + 8;
}

// address: 0x11c42
proc2(int param2, int param3, int param1, int param9, int param4, int param8, int param5) {
    int local10; 		// r26{132}
    int local11; 		// r24{50}
    int local12; 		// r24{42}
    int local13; 		// r24{131}
    int local14; 		// r24{37}
    int local15; 		// r27{121}
    int local16; 		// r24{33}
    int local17; 		// r24{119}
    int local18; 		// r24{12}
    int local19; 		// m[r24 + r25]{76}
    int local20; 		// m[r26 + r25]{52}
    int local21; 		// r24{167}
    int local22; 		// m[r24 + r25]{91}
    int local23; 		// r24{85}
    int local24; 		// r24{94}
    int local25; 		// r24{79}
    int local26; 		// r24{61}
    int local27; 		// local17{119}
    int local28; 		// local15{121}
    int local29; 		// local13{131}
    int local30; 		// local7{144}
    int local31; 		// local8{152}
    int local32; 		// local21{167}
    int local33; 		// r10
    int local34; 		// r26
    int local35; 		// r28
    int local5; 		// m[r28 - 12]
    int local7; 		// r27{144}
    int local8; 		// r24{152}
    int local9; 		// r27{40}

    local28 = param4;
    local18 = param1 ^ 0xa36ecd00;
    local5 = 4;
    local27 = local18;
    do {
        local17 = local27;
        local15 = local28;
        local34 = 0;
        local33 = 0;
        local30 = local15;
        if ((unsigned)param8 > 0) {
            local16 = local17 >> 8 & 0xffffff | (param1 ^ 0xa36ecd00);
            local14 = local16 >> 16 & 0xffff | ((unsigned char) local16);
            param3 = param1 ^ 0xa36ecd00;
            local9 = local15 >> 8 & 0xffffff | (param1 ^ 0xa36ecd00);
            local29 = local14;
            local30 = local9;
            do {
                local13 = local29;
                local10 = local34;
                local12 = local13 >> 8 & 0xffffff | (param1 ^ 0xd4114896);
                param7 = (param1 ^ 0xd4114896) * local33;
                param2 = (unsigned char) local12;
                param6 = param1 ^ 0xd4114896;
                local11 = (local12 >> 16 & 0xffff | ((unsigned char) local12)) >> 8 & 0xffffff | (((param1 ^ 0xd4114896) + (param1 ^ 0xa36ecd00)));
                local20 = *(int*)(local10 + param9) ^ ((param1 ^ 0xd4114896) + (param1 ^ 0xa36ecd00));
                local34 = local10 + 1;
                local33 = (unsigned char) local10 + 1;
                local29 = local11;
            } while ((unsigned)(local10 + 1) < (unsigned)param8);
        }
        local7 = local30;
        local26 = 0;
        local28 = local7;
        local31 = local26;
        if ((unsigned)(param8 / 2) > 0) {
            local34 = (param8 + 1) / 2;
            param5 = (param8 + 1) / 2 + param9;
            do {
                local8 = local31;
                local33 = *(int*)((param8 + 1) / 2 + param9 + local8);
                local34 = local34 >> 8 & 0xffffff | (local33);
                local19 = *(int*)(local8 + param9) ^ local33;
                local25 = local8 + 1;
                local31 = local25;
            } while ((unsigned)(local8 + 1) < (unsigned)(param8 / 2));
        }
        local23 = param8 - 1;
        local32 = local23;
L3:
        local21 = local32;
        local27 = local21;
        if ((unsigned)local21 >= 1) {
            local33 = *(int*)(local21 + param9 - 1);
            local34 = local34 >> 8 & 0xffffff | (local33);
            param6 = *(int*)(local21 + param9);
            local22 = local21 - local33 - 1;
            local24 = local21 - 1;
            local32 = local24;
            goto L3;
        }
        local5 = local5 - 1;
    } while (local5 >= 0);
    return param2; /* WARNING: Also returning: local33, (unsigned char) param4, local34 */
}

// address: 0x1223b
proc3(int param6, int param3, int param4, int param2, int param1, int param5) {
    int local0; 		// m[r29]{14}
    int local3; 		// r28

    *(int*)0 = param1;
    local0 = *(int*)local3;
    return param3; /* WARNING: Also returning: *(int*)local3, param4, param5, param6 */
}

// address: 0x1034c
VOID proc4(PDRIVER_OBJECT DriverObject, PVOID Context, ULONG Count) {
    int local1; 		// r28{14}
    VOID local11; 		// r24
    int local12; 		// r25
    int local14; 		// r27
    int local15; 		// r28
    int local16; 		// r29
    int local17; 		// r30
    int local18; 		// r31
    int local2; 		// r28{71}
    int local3; 		// r0
    int local4; 		// r1
    int local7; 		// r7
    int local8; 		// r8
    int local9; 		// r10

    *(int*)(local15 - 4) = 8;
    *(int*)(local15 - 8) = 0x13e18;
    local16 = proc1(0x13e18, 8, local14, local17, local18);
    *(int*)(local16 - 4) = 0;
    KeGetCurrentIrql();
    local2 = local1;
    local2 = local1;
    if (local8 == 0) {
        if ((unsigned)*(int*)(local16 + 16) <= 101) {
            *(int*)(local15 - 4) = KeGetCurrentIrql;
            local11 = proc5(local3, local12, local14, local16, local17, local18); /* Warning: also results in local3, local16 */
            local2 = local15;
            if (local11 == 0) {
                *(int*)(local15 - 4) = KeGetCurrentIrql + 537;
                local17 = proc6(); /* Warning: also results in local8, local12, local14, local18 */
                if (local8 != 0) {
                    *(int*)(local15 - 4) = KeGetCurrentIrql + 425;
                    local11 = proc7(local3, local4, local7, local9, local12, local14, local16, local17, local18); /* Warning: also results in local16 */
                    local2 = local15;
                } else {
                    *(int*)(local15 - 4) = 0;
                    *(int*)(local15 - 8) = 0x1034c;
                    *(int*)(local15 - 12) = *(int*)(local16 + 8);
                    *(int*)(local15 - 16) = KeGetCurrentIrql + 425;
                    IoRegisterDriverReinitialization(*(int*)(local16 + 8), proc4, 0);
                    local2 = local15;
                }
            }
        }
    }
    local15 = local2;
    *(int*)(local16 - 4) = *(int*)(local16 - 4) | -1;
    proc3(DriverObject, Context, local16, *(int*)(local16 - 16), *(int*)local15, *(int*)local16);
    return local11;
}

// address: 0x10580
proc5(int param3, int param2, int param4, int param1, int param5, int param6) {
    int local0; 		// r8
    int local1; 		// r24
    int local2; 		// r26
    int local3; 		// r28

    *(int*)(local3 - 4) = param1;
    *(int*)(local3 - 8) = param2;
    *(int*)(local3 - 12) = local3 - 5;
    *(char*)(local3 - 5) = 0;
    local1 = proc8(local3 - 5, param3, (unsigned char) local3 - 5, param4, local3 - 4, param5, param6, <all>); /* Warning: also results in param3, param1 */
    if (local1 == 0) {
        local1 = 0 - (0 < (unsigned)*(int*)(param1 - 1));
        local1 = (local1 & 0x3fffffff) - 0x3fffffff;
    }
    return local1; /* WARNING: Also returning: param3, *(int*)param1 */
}

