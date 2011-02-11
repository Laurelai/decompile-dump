char GetCurrentThreadId[0] = "x5";
char GetTickCount[0] = "(4";
char lstrcpyW[0] = "\xfffffffc4";
char lstrlenW[0] = "\xffffffa44";
char GetModuleHandleW[0] = "d5";
char wsprintfW[0] = "&5";
void global26;
void GetCurrentProcess;
int global24 = 1;
char global27[0] = "";
int global17 = 0;
int global16 = 0;
int global15 = 0;
int global19 = 0;
int global18 = 0;
int global22 = 0;
int global21 = 0;
int global20 = 0;
int global23 = 0;
char GetProcAddress[0] = "\xffffffb04";
char VirtualProtect[0] = ">5";
int global10 = 0;
int global9 = 0;
int global8 = 0;
int global12 = 0;
int global11 = 0;
int global14 = 0;
int global13 = 0;

proc1(int param2, int param1, int param5, int param3, int param4);
proc2(int param4, int param1, int param2, int param3);
proc3(int param4, int param2, int param3, int param1, int param5);
proc4(int param2, int param1, int param3);
proc5(int param2, int param3, int param1, int param4);
proc6(int param1, int param2);
proc7(int param1, int param2, int param3, int param4);
proc8(int param1, int param2, int param3, int param4);
proc9(int param1, int param2, int param3, int param5, int param4);
proc10(int param2, int param3, int param1);
void proc11(int param5, int param3, int param6, int param4, int param2, int param1);
void proc12(int param1, int param2, int param3);
proc13(int param4, int param2, int param3, int param5, int param6, int param1, int param7);
proc14(int param2, int param3, int param1, int param4);
proc15();
proc16();
proc17();
proc18();
proc19(int param1, int param4, int param2, int param3, int param5);
proc20(int param1, int param2, int param3);
void proc21(int param1, int param3, int param2);
proc22(int param1, int param2);
proc23(int param1, int param2, int param3);

// address: 0x10001ba9
int main(int argc, char **argv, char **envp) {
    int local0; 		// r24{65}
    int local1; 		// r24{59}
    int local10; 		// m[r28 + 20]{181}
    int local11; 		// m[r28 + 24]{182}
    int local12; 		// m[r28 + 28]{183}
    int local13; 		// m[r29 - 132]{184}
    int local14; 		// m[m[r29 + 20]]{185}
    int local15; 		// m[r28 + 4]{130}
    int local16; 		// r28{115}
    int local17; 		// m[r28 + 8]{127}
    int local18; 		// r24{123}
    int local19; 		// m[m[r29 + 20]]{126}
    int local2; 		// r24{15}
    int local20; 		// m[m[r29 + 20]]{132}
    int local21; 		// m[r29 - 132]{119}
    int local22; 		// r28{154}
    int local23; 		// m[r28 - 4]{106}
    int local24; 		// r28{95}
    int local25; 		// m[r28 + 12]{91}
    int local26; 		// m[r28 + 16]{88}
    int local27; 		// m[r28 + 20]{82}
    int local28; 		// m[r28 + 24]{80}
    int local29; 		// m[r28 + 28]{78}
    int local3; 		// r24{161}
    int local30; 		// m[r29 - 132]{97}
    int local31; 		// global24{103}
    int local32; 		// r28{93}
    int local33; 		// r29{65}
    int local34; 		// r28{87}
    int local35; 		// m[r28 + 16]{85}
    int local36; 		// r28{67}
    int local37; 		// m[r28 + 12]{132}
    int local38; 		// m[r28 + 16]{132}
    int local39; 		// m[r28 + 20]{132}
    int local4; 		// r28{65}
    int local40; 		// m[r28 + 24]{132}
    int local41; 		// m[r28 + 28]{132}
    int local42; 		// m[r29 - 132]{132}
    int local43; 		// global24{132}
    int local44; 		// m[r29 - 132]{69}
    int local45; 		// m[r28 - 172]{63}
    int local46; 		// m[r28 - 168]{60}
    int local47; 		// r28{59}
    int local48; 		// m[r28 - 168]{57}
    int local49; 		// m[r28 - 164]{54}
    int local5; 		// r29{115}
    char **local50; 		// m[r28 - 160]{51}
    char **local51; 		// m[r28 - 156]{49}
    int local52; 		// m[r28 - 152]{47}
    int local53; 		// m[r28 - 148]{45}
    int local54; 		// m[r28 - 144]{43}
    int local55; 		// m[r28 - 140]{41}
    int local56; 		// m[r28 - 140]{30}
    int local57; 		// r28{32}
    int local58; 		// m[r28 - 140]{7}
    int local59; 		// %pc{14}
    int local6; 		// r29{93}
    int local60; 		// m[r28 - 136]{20}
    int local61; 		// r28{15}
    int local62; 		// m[r28 - 148]{13}
    int local63; 		// m[r28 - 144]{10}
    int local64; 		// r29{3}
    int local65; 		// m[r28 - 4]{1}
    int local66; 		// %pc{148}
    int local67; 		// local22{154}
    int local68; 		// local7{155}
    int local69; 		// global24{156}
    int local7; 		// r29{155}
    int local70; 		// local8{179}
    int local71; 		// local9{180}
    int local72; 		// local10{181}
    int local73; 		// local11{182}
    int local74; 		// local12{183}
    int local75; 		// local13{184}
    int local76; 		// local3{161}
    int local77; 		// local14{185}
    int local78; 		// r29{171}
    int local79; 		// global24{172}
    int local8; 		// m[r28 + 12]{179}
    int local80; 		// r0
    int local81; 		// r1
    int local82; 		// r2
    int local83; 		// r7
    int local84; 		// r10
    int local85; 		// r24
    int local86; 		// r25
    int local87; 		// r26
    int local88; 		// r28
    int local89; 		// r29
    int local9; 		// m[r28 + 16]{180}

    local79 = global24;
    local79 = global24;
    local79 = global24;
    local79 = global24;
    local77 = *(int*)*(int*)(local5 + 20);
    local75 = *(int*)(local6 - 132);
    local74 = *(int*)(local4 + 28);
    local73 = *(int*)(local4 + 24);
    local72 = *(int*)(local4 + 20);
    local71 = *(int*)(local4 + 16);
    local70 = *(int*)(local4 + 12);
    local69 = global24;
    local65 = local89;
    local64 = local88 - 4;
    local58 = argc;
    local63 = local88 - 132;
    local2 = proc1(local88 - 132, argc, local80, local82, local83); /* Warning: also results in local80, local82, local87 */
    local66 = local59;
    local78 = local64;
    local78 = local64;
    local86 = argc;
    local60 = local2;
    if (local2 == 0) {
        if (global24 == 0) {
L15:
            local55 = 0x10004014;
            local54 = 0;
            local53 = 0;
            local52 = -1;
            local51 = envp;
            local50 = argv;
            local49 = local88 - 132;
            GetCurrentProcess();
            local46 = local1;
            local45 = GetCurrentProcess;
            local0 = proc3(local1, envp, 0, local88 - 4, <all>); /* Warning: also results in local86, local87, local4, local33 */
            local68 = local33;
            local78 = local33;
            local36 = local4 + 32;
            local44 = local0;
            local67 = local36;
            if (local0 == 0) {
                if (global24 == 0) {
L5:
                    local22 = local67;
                    local7 = local68;
                    global24 = local69;
                    local8 = local70;
                    local9 = local71;
                    local10 = local72;
                    local11 = local73;
                    local12 = local74;
                    local13 = local75;
                    local23 = local7 - 128;
                    *(int*)(local22 - 8) = global26;
                    *(int*)(local22 - 12) = global27;
                    local85 = proc5(*(int*)(local22 - 4), local81, local7, <all>); /* Warning: also results in local81, local86, local16, local5 */
                    local76 = local85;
                    local21 = local85;
                    if (local85 == 0) {
                        local18 = *(int*)(local5 + 20);
                        local86 = *(int*)(global26 + 128);
                        local19 = *(int*)(global26 + 128);
                        local76 = local18;
                        local77 = local19;
                    }
                    local3 = local76;
                    local14 = local77;
                    local17 = global26;
                    (*global14)(GetCurrentProcess, local1, local88 - 132, argv, envp, -1, 0, 0, 0x10004014, local2, pc, *(int*)0x10004010, *(int*)0x10004014, local7 - 128, local89, pc - 926, global26, local8, local9, local10, local11, local12, local80, local81, local82, local84, local3, local86, local87, local5, local85, local13, local0, local14, SUBFLAGS32(local85, 0, local85), (unsigned)local85 < 0);
                    local78 = local89;
                    local79 = local43;
                    local85 = *(int*)(local89 - 132);
                } else {
                    local29 = 0x10004010;
                    local28 = 0x10004018;
                    local27 = global26;
                    local35 = GetCurrentProcess - 1138;
                    GetCurrentProcess();
                    local72 = local27;
                    local73 = local28;
                    local74 = local29;
                    local26 = local85;
                    local25 = GetCurrentProcess;
                    local85 = proc4(local85, local33, <all>); /* Warning: also results in local86, local87, local32, local6 */
                    local68 = local6;
                    local70 = local25;
                    local71 = local26;
                    local78 = local6;
                    local24 = local32 + 16;
                    local30 = local85;
                    local67 = local24;
                    local75 = local30;
                    if (local85 == 0) {
                        local31 = 0;
                        local69 = local31;
                        goto L5;
                    } else {
                    }
                }
            } else {
                local85 = local0;
            }
        } else {
            local85 = proc2(local80, local82, local83, local84); /* Warning: also results in local80, local82, local84, local86, local87 */
            if (local85 != 0) {
                goto L15;
            } else {
                *(int*)(local88 - 140) = -12;
                local85 = -12;
            }
        }
    } else {
        local85 = local2;
    }
    local89 = local78;
    global24 = local79;
    return local85;
}

// address: 0x100016e4
proc1(int param2, int param1, int param5, int param3, int param4) {
    int local11; 		// r24{40}
    int local16; 		// r24
    int local18; 		// r26
    int local19; 		// r28

    if (param1 == 0) {
        GetTickCount();
        GetCurrentThreadId();
        param5 = proc9(0x10003068, local19 - 92, param3, param4, local19 - 92); /* Warning: also results in param3 */
        do {
            wsprintfW();
            local16 = GetModuleHandleW(param2 + 16);
        } while (local16 != 0);
L1:
        local18 = param2;
        *param2 = param2 ^ 0xae1979dd;
        *(int*)(param2 + 4) = 0;
        *(int*)(param2 + 12) = 0x10002574;
        local16 = 0;
    } else {
        local16 = lstrlenW(param1);
        if (local16 < 31) {
            lstrcpyW(param2 + 16, param1);
            goto L1;
        } else {
            local16 = local16 | -1;
        }
    }
    return local16; /* WARNING: Also returning: param5, param3, local18 */
}

// address: 0x100014ab
proc2(int param4, int param1, int param2, int param3) {
    int local0; 		// m[r28 - 4]
    int local12; 		// m[r28 - 4]{172}
    int local14; 		// m[r28 - 4]{163}
    int local16; 		// m[r28 - 4]{154}
    int local18; 		// m[r28 - 4]{145}
    int local20; 		// m[r28 - 4]{136}
    int local22; 		// m[r28 - 4]{127}
    int local24; 		// m[r28 - 4]{118}
    int local26; 		// m[r28 - 4]{109}
    int local28; 		// m[r28 - 4]{100}
    int local30; 		// m[r28 - 4]{91}
    int local32; 		// m[r28 - 4]{82}
    int local34; 		// m[r28 - 4]{73}
    int local36; 		// m[r28 - 4]{64}
    int local38; 		// m[r28 - 4]{55}
    int local40; 		// m[r28 - 4]{46}
    char local42[0]; 		// m[r28 - 4]{42}
    int local43; 		// r24
    int local44; 		// r25
    int local45; 		// r26
    int local46; 		// r28

    VirtualProtect();
    if (local43 != 0) {
L17:
        local42 = VirtualProtect;
        local43 = proc6(param1, param2); /* Warning: also results in param1 */
        global8 = local43;
        local40 = 0x10003098;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global9 = local43;
        local38 = 0x100030ac;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global10 = local43;
        local36 = 0x100030c8;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global11 = local43;
        local34 = 0x100030e8;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global12 = local43;
        local32 = 0x10003108;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global13 = local43;
        local30 = 0x10003124;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global14 = local43;
        local28 = 0x10003144;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global15 = local43;
        local26 = 0x10003170;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global16 = local43;
        local24 = 0x1000318c;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3, local45 */
        global17 = local43;
        local22 = 0x100031a4;
        local43 = proc8(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3, local45 */
        global18 = local43;
        local20 = 0x100031c4;
        local43 = proc8(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global19 = local43;
        local18 = 0x100031ec;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global20 = local43;
        local16 = 0x10003208;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3 */
        global21 = local43;
        local14 = 0x10003230;
        local43 = proc7(0x10003098, param1, param2, param3); /* Warning: also results in param1, param3, local45 */
        global22 = local43;
        local12 = 0x10003254;
        local43 = proc8(0x10003098, param1, param2, param3); /* Warning: also results in param4, param1, param3, local45 */
        local44 = local0;
        global23 = local43;
        local43 = 1;
    } else {
        VirtualProtect();
        if (local43 != 0) {
            goto L17;
        } else {
            local43 = 0;
        }
    }
    return local43; /* WARNING: Also returning: param4, param1, param3, local44, local45 */
}

// address: 0x10001799
proc3(int param4, int param2, int param3, int param1, int param5) {
    int local0; 		// r25{124}
    int local1; 		// r28{33}
    int local10; 		// m[r28 - 16]{165}
    int local11; 		// m[r28 - 20]{165}
    int local12; 		// m[r28 - 28]{165}
    int local13; 		// m[r28 - 32]{165}
    int local14; 		// m[r28 - 52]{165}
    int local15; 		// m[r28 - 56]{165}
    int local16; 		// m[r28 - 60]{165}
    int local17; 		// m[r28 - 64]{165}
    int local18; 		// m[r28 - 68]{165}
    int local19; 		// m[r28 - 72]{165}
    int local2; 		// r29{33}
    int local20; 		// m[r28 - 4]{165}
    int local21; 		// m[r28 - 8]{165}
    int local22; 		// m[r29 - 4]{165}
    int local23; 		// m[r29 - 8]{165}
    int local24; 		// m[r29 - 20]{165}
    int local25; 		// m[r29 - 24]{171}
    int local26; 		// m[r29 - 24]{165}
    int local27; 		// m[r29 - 28]{165}
    int local28; 		// m[r29 - 32]{165}
    int local29; 		// m[r29 - 36]{165}
    int local3; 		// m[r28 + 4]{165}
    int local30; 		// m[r29 - 44]{165}
    int local31; 		// m[r28]{165}
    int local32; 		// m[m[r29 + 36]]{165}
    void *local33; 		// m[r28 - 8]{169}
    int local34; 		// r28{165}
    int local35; 		// m[r28 - 4]{166}
    int local36; 		// r24{47}
    int local37; 		// m[r28 - 20]{16}
    int local38; 		// m[r29 - 32]{195}
    int local39; 		// m[r29 - 44]{196}
    int local4; 		// m[r28 + 8]{165}
    void *local40; 		// %pc{165}
    int local41; 		// m[r28 + 12]{163}
    int local42; 		// m[r28 + 16]{160}
    int local43; 		// m[m[r29 + 36]]{159}
    int local44; 		// m[m[r29 - 24]{-} + 128]{155}
    int local45; 		// m[m[r29 - 24]{-} + 148]{153}
    int local46; 		// r28{147}
    int local47; 		// m[r28 + 4]{145}
    int local48; 		// m[r28 + 8]{142}
    int local49; 		// m[r28 + 12]{140}
    int local5; 		// m[r28 + 12]{165}
    int local50; 		// m[r28 + 16]{138}
    int local51; 		// m[r29 - 32]{126}
    int local52; 		// m[r29 - 44]{131}
    int local53; 		// m[r25 + 204]{137}
    int local54; 		// m[r25 + 204]{165}
    int local55; 		// m[r29 - 32]{171}
    int local56; 		// m[r29 - 44]{171}
    int local57; 		// m[r29 - 20]{104}
    int local58; 		// r24{99}
    int local59; 		// r28{99}
    int local6; 		// m[r28 + 16]{165}
    int local60; 		// r24{84}
    int local61; 		// m[r28 - 8]{97}
    int local62; 		// m[r28 - 4]{94}
    int local63; 		// m[r28]{91}
    int local64; 		// m[r28 + 4]{89}
    int local65; 		// m[r28 + 8]{86}
    int local66; 		// m[r28 + 12]{80}
    int local67; 		// m[r28 + 16]{78}
    int local68; 		// m[r29 - 36]{77}
    int local69; 		// r24{72}
    int local7; 		// m[m[r29 - 24]{-} + 128]{165}
    int local70; 		// r28{72}
    int local71; 		// r24{57}
    int local72; 		// m[r28 - 8]{70}
    int local73; 		// m[r28 - 4]{67}
    int local74; 		// m[r28]{64}
    int local75; 		// m[r28 + 4]{62}
    int local76; 		// m[r28 + 8]{59}
    int local77; 		// m[r28 + 12]{53}
    int local78; 		// m[r28 + 16]{51}
    int local79; 		// m[r29 - 28]{50}
    int local8; 		// m[m[r29 - 24]{-} + 148]{165}
    int local80; 		// m[r29 - 24]{49}
    int local81; 		// m[r29 - 8]{44}
    int local82; 		// m[r29 - 4]{37}
    int local83; 		// m[r28 - 72]{31}
    int local84; 		// m[r28 - 68]{28}
    int local85; 		// m[r28 - 64]{26}
    int local86; 		// m[r28 - 60]{24}
    int local87; 		// m[r28 - 56]{21}
    int local88; 		// m[r28 - 52]{18}
    int local89; 		// m[r28 - 32]{11}
    int local9;
    int local90; 		// m[r28 - 16]{9}
    int local91; 		// m[r28 - 28]{7}
    int local92; 		// m[r28 - 4]{1}
    int local93; 		// local38{195}
    int local94; 		// local39{196}
    int local95; 		// r29{189}
    int local96; 		// r24
    int local97; 		// r25
    int local98; 		// r26
    int local99; 		// r28

    local94 = *(int*)(local2 - 44);
    local94 = *(int*)(local2 - 44);
    local94 = *(int*)(local2 - 44);
    local93 = *(int*)(local2 - 32);
    local93 = *(int*)(local2 - 32);
    local93 = *(int*)(local2 - 32);
    local92 = param1;
    local91 = 0;
    local90 = 0;
    local89 = 0;
    local37 = param2 + param3 + 152;
    local88 = local99 - 16;
    local87 = local99 - 28;
    local86 = local99 - 44;
    local85 = local37;
    local84 = param4;
    local96 = proc10(local37, local99 - 44, local99 - 4); /* Warning: also results in local97, local98, local1, local2 */
    local95 = local2;
    local82 = local96;
    if (local96 == 0) {
        local81 = *(int*)(local2 - 24);
        local36 = *(int*)(local2 - 24) + 152;
        local80 = local36;
        local79 = 152;
        local78 = *(int*)(local2 + 32);
        local77 = *(int*)(local2 + 28);
        local71 = *(int*)(local2 - 24) + 132;
        local76 = local71;
        local75 = local2 - 28;
        local74 = *(int*)(local2 - 12);
        local73 = local2 - 24;
        proc11(local2 - 24, local2 - 28, local71, *(int*)(local2 + 28), *(int*)(local2 + 32), *(int*)(local2 - 12));
        local68 = local36;
        local67 = *(int*)(local2 + 20);
        local66 = *(int*)(local2 + 16);
        local60 = *(int*)(local2 - 24) + 140;
        local65 = local60;
        local64 = local2 - 28;
        local63 = *(int*)(local2 - 12);
        local62 = local2 - 24;
        proc11(local2 - 24, local2 - 28, local60, *(int*)(local2 + 16), *(int*)(local2 + 20), *(int*)(local2 - 12));
        local57 = local36;
        if ((unsigned)*(int*)(local2 + 20) >= 0x1000) {
            if (*(unsigned short*)local36 == 0x5a4d) {
                if ((unsigned)(*(int*)(local36 + 60) + 248) < (unsigned)*(int*)(local2 + 20)) {
                    local0 = local36 + *(int*)(local36 + 60);
                    local51 = local0;
                    local52 = local0 + 200;
                    local93 = local51;
                    local93 = local51;
                    local94 = local52;
                    local94 = local52;
                    if (*(int*)(local0 + 204) == 72) {
                        local53 = 64;
                    }
                }
            }
        }
        local38 = local93;
        local39 = local94;
        local50 = 128;
        local49 = *(int*)(local2 + 12);
        local48 = *(int*)(local2 - 24);
        proc12(*(int*)(local2 - 24), *(int*)(local2 + 12), 128);
        local45 = *(int*)(local2 + 24);
        local44 = 0;
        local43 = *(int*)(local2 - 12);
        local42 = *(int*)(local2 - 24);
        (*global14)(pc, param4, local37, local99 - 44, local99 - 28, local99 - 16, 0, 0, local37, 0, pc - 863, param1, local2 - 24, pc - 1284, *(int*)(local2 - 24), pc + 1218, *(int*)(local2 - 24), *(int*)(local2 + 36), *(int*)(local2 - 12), local98, local2, 0, *(int*)(local2 + 24), local96, *(int*)(local2 - 24), local36, local36, 152, local38, local36, local39, *(int*)(local2 - 12), *(int*)(local2 - 12), LOGICALFLAGS32(0), LOGICALFLAGS32(0));
        local35 = *(int*)(param1 - 40);
        local33 = local40;
        (**(int*)0x1000219a)(local19, local18, local17, local16, local15, local14, local13, local12, local11, local10, local40, local21, local9, *(int*)(param1 - 40), local20, local3, local4, local5, local6, local96, local97, local98, param1, local54, local7, local8, local22, local23, local24, local26, local27, local28, local29, local30, local31, local32, param5, flags, NF);
        local95 = param1;
        local96 = 0;
    } else {
    }
    param1 = local95;
    return local96; /* WARNING: Also returning: local97, local98, *(int*)param1 */
}

// address: 0x10001a35
proc4(int param2, int param1, int param3) {
    int local0; 		// r24{207}
    int local1; 		// r28{51}
    int local10; 		// m[r28 - 20]{207}
    int local100; 		// m[r28 - 24]{32}
    int local101; 		// m[r28 - 12]{25}
    int local102; 		// r28{24}
    int local103; 		// m[r28 - 56]{22}
    int local104; 		// m[r28 - 48]{20}
    int local105; 		// m[r28 - 52]{15}
    int local106; 		// m[r28 - 20]{9}
    int local107; 		// m[r28 - 28]{7}
    int local108; 		// m[r28 - 4]{1}
    int local109; 		// r29{232}
    int local11; 		// m[r28 - 24]{207}
    int local110; 		// r24
    int local111; 		// r25
    int local112; 		// r26
    int local113; 		// r28
    int local12; 		// m[r28 - 28]{207}
    int local13; 		// m[r28 - 32]{207}
    int local14; 		// m[r28 - 48]{207}
    int local15; 		// m[r28 - 52]{207}
    int local16; 		// m[r28 - 56]{207}
    int local17; 		// m[r28 - 60]{207}
    int local18; 		// m[r28 - 64]{207}
    int local19; 		// m[r28 - 68]{207}
    int local2; 		// r29{51}
    int local20; 		// m[r28 - 72]{207}
    int local21; 		// m[r28 - 76]{207}
    int local22; 		// m[r28 - 4]{207}
    int local23; 		// m[r28 - 8]{207}
    int local24; 		// m[r29 - 4]{207}
    int local25; 		// m[r29 - 12]{207}
    int local26; 		// m[r29 - 24]{213}
    int local27; 		// m[r29 - 24]{207}
    int local28; 		// m[r29 - 28]{207}
    int local29; 		// m[r29 - 32]{207}
    int local3; 		// m[r28 + 4]{207}
    int local30; 		// m[r29 - 36]{207}
    int local31; 		// m[r28]{207}
    int local32; 		// m[m[r29 + 16]]{207}
    int local33; 		// m[m[r29 + 20]]{207}
    int local34; 		// m[m[r29 - 24]]{207}
    void *local35; 		// m[r28 - 8]{211}
    int local36; 		// r28{207}
    int local37; 		// m[r28 - 4]{208}
    int local38; 		// r24{131}
    int local39; 		// r24{188}
    int local4; 		// m[r28 + 8]{207}
    int local40; 		// r24{178}
    int local41; 		// r24{168}
    int local42; 		// r24{185}
    int local43; 		// r24{51}
    int local44; 		// r24{24}
    int local45; 		// r24{65}
    void *local46; 		// %pc{207}
    int local47; 		// m[r28 + 12]{205}
    int local48; 		// m[r28 + 16]{202}
    int local49; 		// m[m[r29 + 20]]{201}
    int local5; 		// m[r28 + 12]{207}
    int local50; 		// m[m[r29 + 16]]{198}
    int local51; 		// m[m[r29 - 24]{-} + 32]{194}
    int local52; 		// m[m[r29 - 24]{-} + 4]{191}
    int local53; 		// r28{185}
    int local54; 		// m[r28 + 16]{183}
    int local55; 		// m[m[r29 - 24]]{181}
    int local56; 		// r24{175}
    int local57; 		// r28{175}
    int local58; 		// m[r28 + 16]{173}
    int local59; 		// m[r24 + 34]{171}
    int local6; 		// m[m[r29 - 24]{-} + 4]{207}
    int local60; 		// m[r29 - 32]{161}
    int local61; 		// r28{146}
    int local62; 		// r24{126}
    int local63; 		// m[r28 - 8]{144}
    int local64; 		// m[r28 - 4]{141}
    int local65; 		// m[r28]{138}
    int local66; 		// m[r28 + 4]{136}
    int local67; 		// m[r28 + 8]{133}
    int local68; 		// m[r28 + 12]{127}
    int local69; 		// r28{126}
    int local7; 		// m[m[r29 - 24]{-} + 32]{207}
    int local70; 		// m[r28 + 12]{124}
    int local71; 		// m[r28 + 16]{121}
    int local72; 		// r28{117}
    int local73; 		// m[r28 - 8]{115}
    int local74; 		// m[r28 - 4]{112}
    int local75; 		// m[r28]{109}
    int local76; 		// m[r28 + 4]{107}
    int local77; 		// m[r28 + 8]{104}
    int local78; 		// m[r28 + 12]{98}
    int local79; 		// m[r28 + 16]{96}
    int local8;
    int local80; 		// m[r29 - 36]{95}
    int local81; 		// r28{90}
    int local82; 		// m[r28 - 8]{88}
    int local83; 		// m[r28 - 4]{85}
    int local84; 		// m[r28]{82}
    int local85; 		// m[r28 + 4]{80}
    int local86; 		// m[r28 + 8]{77}
    int local87; 		// m[r28 + 12]{71}
    int local88; 		// m[r28 + 16]{69}
    int local89; 		// m[r29 - 28]{68}
    int local9; 		// m[r28 - 12]{207}
    int local90; 		// m[r29 - 24]{67}
    int local91; 		// m[r29 - 12]{62}
    int local92; 		// m[r29 - 4]{55}
    int local93; 		// m[r28 - 76]{49}
    int local94; 		// m[r28 - 72]{46}
    int local95; 		// m[r28 - 68]{44}
    int local96; 		// m[r28 - 64]{42}
    int local97; 		// m[r28 - 60]{39}
    int local98; 		// m[r28 - 56]{36}
    int local99; 		// m[r28 - 32]{33}

    local108 = param1;
    local107 = 0;
    local106 = 0;
    local105 = 1189;
    local104 = 41;
    local44 = proc15();
    local101 = local44;
    local100 = local44 + 1266;
    local99 = 0;
    local98 = local113 - 20;
    local97 = local113 - 28;
    local96 = local113 - 44;
    local95 = local44 + 1266;
    local94 = param2;
    local43 = proc10(local44 + 1266, local113 - 44, local113 - 4); /* Warning: also results in local111, local112, local1, local2 */
    local109 = local2;
    local92 = local43;
    if (local43 == 0) {
        local91 = *(int*)(local2 - 24);
        local45 = *(int*)(local2 - 24) + 36;
        local90 = local45;
        local89 = 36;
        local88 = *(int*)(local2 - 48);
        local87 = 0x10001cf9;
        local110 = *(int*)(local2 - 24) + 8;
        local86 = local110;
        local85 = local2 - 28;
        local84 = *(int*)(local2 - 16);
        local83 = local2 - 24;
        proc11(local2 - 24, local2 - 28, local110, 0x10001cf9, *(int*)(local2 - 48), *(int*)(local2 - 16));
        local80 = 36;
        local79 = *(int*)(local2 - 44);
        local78 = 0x10001cd0;
        local110 = *(int*)(local2 - 24) + 24;
        local77 = local110;
        local76 = local2 - 28;
        local75 = *(int*)(local2 - 16);
        local74 = local2 - 24;
        proc11(local2 - 24, local2 - 28, local110, 0x10001cd0, *(int*)(local2 - 44), *(int*)(local2 - 16));
        local71 = *(int*)(local2 - 8);
        local62 = proc16();
        local68 = local62;
        local38 = *(int*)(local2 - 24) + 16;
        local67 = local38;
        local66 = local2 - 28;
        local65 = *(int*)(local2 - 16);
        local64 = local2 - 24;
        proc11(local2 - 24, local2 - 28, local38, local62, *(int*)(local2 - 8), *(int*)(local2 - 16));
        local110 = *(int*)(local2 - 24) + 36;
        local60 = local110 + 34;
        local41 = *(int*)(*(int*)(local2 - 24) + 8) + 206;
        local59 = local41;
        local56 = proc17();
        local40 = local56 + *(int*)(*(int*)(local2 - 24) + 16);
        local55 = local40;
        local42 = proc18();
        local39 = local42 + *(int*)(*(int*)(local2 - 24) + 16);
        local52 = local39;
        local51 = *(int*)(local2 + 12);
        local50 = *(int*)(*(int*)(local2 - 24) + 16);
        local49 = *(int*)(local2 - 16);
        local48 = *(int*)(local2 - 24);
        (*global14)(pc - 90, param2, local44 + 1266, local113 - 44, local113 - 28, local113 - 20, 1189, 41, 0, 0, local44 + 1266, 0, local44, pc - 0xe89, param1, local2 - 24, local2 - 28, local38, *(int*)(local2 - 24), *(int*)(local2 + 20), *(int*)(local2 - 16), local112, local2, local41, local39, *(int*)(local2 + 12), local43, *(int*)(local2 - 24), local45, 36, local110 + 34, 36, *(int*)(local2 - 16), *(int*)(*(int*)(local2 - 24) + 16), *(int*)(local2 - 16), local40, ADDFLAGS32(local42, *(int*)(*(int*)(local2 - 24) + 16), local39), ADDFLAGS32(local42, *(int*)(*(int*)(local2 - 24) + 16), local39));
        local37 = *(int*)(param1 - 40);
        local35 = local46;
        (**(int*)0x1000219a)(local21, local20, local19, local18, local17, local16, local15, local14, local13, local12, local11, local10, local9, local46, local23, local8, *(int*)(param1 - 40), local22, local3, local4, local5, local0, local111, local112, param1, *(int*)(local110 + 34), local6, local7, local24, local25, local27, local28, local29, local30, local31, local32, local33, local34, param3, flags, NF);
        local109 = param1;
        local110 = 0;
    } else {
        local110 = local43;
    }
    param1 = local109;
    return local110; /* WARNING: Also returning: local111, local112, *(int*)param1 */
}

// address: 0x100018e5
proc5(int param2, int param3, int param1, int param4) {
    int local0; 		// r28{68}
    int local1; 		// r28{51}
    int local10; 		// m[r28 - 132]{92}
    int local11; 		// m[r28 - 136]{92}
    int local12; 		// m[r28 - 152]{92}
    int local13; 		// m[r28 - 156]{92}
    int local14; 		// m[r28 - 160]{92}
    int local15; 		// m[r28 - 164]{92}
    int local16; 		// m[r28 - 168]{92}
    int local17;
    int local18; 		// m[r29 - 136]{92}
    int local19; 		// m[r29 - 120]{92}
    int local2; 		// r29{51}
    int local20; 		// m[r28]{92}
    void *local21; 		// m[r28 - 8]{127}
    int local22; 		// r28{92}
    int local23; 		// m[r28 - 4]{123}
    int local24; 		// m[r29 - 120]{121}
    int local25; 		// m[r28 - 4]{92}
    int local26; 		// m[r28 - 8]{92}
    int local27; 		// m[r29 - 136]{111}
    int local28; 		// m[r29 - 140]{114}
    int local29; 		// m[r29 - 144]{93}
    int local3; 		// r29{92}
    int local30; 		// r24{51}
    int local31; 		// r24{29}
    int local32; 		// r29{68}
    int local33; 		// m[r28 + 4]{129}
    int local34; 		// m[r28 - 156]{41}
    void *local35; 		// %pc{92}
    int local36; 		// m[r28]{90}
    int local37; 		// m[r28 + 4]{86}
    int local38; 		// m[r29 - 136]{73}
    int local39; 		// m[r28 + 4]{66}
    int local4;
    int local40; 		// m[r28 + 8]{63}
    int local41; 		// m[r28 + 12]{61}
    int local42; 		// m[r29 - 136]{55}
    int local43; 		// m[r28 - 168]{49}
    int local44; 		// m[r28 - 164]{46}
    int local45; 		// m[r28 - 160]{44}
    int local46; 		// m[r28 - 152]{38}
    int local47; 		// m[r28 - 136]{36}
    int local48; 		// m[r28 - 128]{27}
    int local49; 		// m[r28 - 132]{26}
    int local5; 		// m[r28 + 4]{92}
    int local50; 		// r28{17}
    int local51; 		// m[r28 - 164]{15}
    int local52; 		// m[r28 - 160]{12}
    int local53; 		// m[r28 - 156]{9}
    int local54; 		// m[r28 - 152]{7}
    int local55; 		// m[r28 - 4]{1}
    int local56; 		// r29{153}
    int local57; 		// r29{163}
    int local58; 		// r24
    int local59; 		// r25
    int local6; 		// m[r28 + 8]{92}
    int local60; 		// r28
    int local7; 		// m[r28 + 12]{92}
    int local8;
    int local9; 		// m[r28 - 128]{92}

    local55 = param1;
    local54 = 128;
    local53 = param2;
    local52 = local60 - 132;
    proc12(local60 - 132, param2, 128);
    local49 = local60 - 132 ^ 0xae1979dd;
    local48 = 0;
    local31 = *(int*)(*(int*)(local60 + 4) + 8);
    local47 = local31 + 1121;
    local46 = *(int*)(*(int*)(local60 + 8) + 144);
    local34 = *(int*)(*(int*)(local60 + 8) + 140);
    local45 = local60 - 132;
    local44 = local31 + 1121;
    local30 = proc13(local31 + 1121, local60 - 132, local34, param3, 0, local60 - 4, param4); /* Warning: also results in param3, local59, local1, local2 */
    local57 = local2;
    local42 = local30;
    if (local30 == 0) {
        local41 = *(int*)(local2 - 132);
        local40 = *(int*)(local2 + 8);
        local58 = proc14(*(int*)(local2 + 8), *(int*)(local2 - 132), local2, param4); /* Warning: also results in local0, local32 */
        local57 = local32;
        local59 = *(int*)(local0 + 4);
        local38 = local58;
        if (local58 == 0) {
            local37 = local32 - 112;
            (**(int*)(*(int*)(local32 - 132) + 36))(pc + 0x975, local31 + 1121, local60 - 132, local34, *(int*)(*(int*)(local60 + 8) + 144), local31 + 1121, local60 - 132 ^ 0xae1979dd, 0, param1, pc + 0x183d, local32 - 112, *(int*)(local2 + 8), *(int*)(local2 - 132), param3, *(int*)(local32 - 132), *(int*)(local0 + 4), local32, local58, local30, pc + 0x263c, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
            local56 = local3;
            local57 = local3;
            local29 = local58;
            if (local58 != 0) {
                local59 = local58;
                *(int*)(*(int*)(local3 + 12) + 128) = local58;
                local27 = 0;
                local28 = local19;
                if (local19 != 0) {
                    local24 = 0;
                    local23 = local19;
                    local21 = local35;
                    (**(int*)(*(int*)(local3 - 132) + 64))(local16, local15, local14, local13, local12, local11, local10, local9, local35, local19, local8, local5, local4, local6, local7, param3, *(int*)(local3 - 132), local58, local3, local58, local17, local18, 0, 0, local19, local58, local20, param4, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
                    local56 = param1;
                }
                param1 = local56;
                local58 = *(int*)(param1 - 136);
                local57 = param1;
            } else {
                *(int*)(local22 - 4) = -9;
                local58 = -9;
            }
        } else {
            *(int*)(local0 + 4) = -4;
            local58 = -4;
        }
    } else {
        local58 = local30;
    }
    param1 = local57;
    return local58; /* WARNING: Also returning: param3, local59, *(int*)param1 */
}

// address: 0x100021fe
proc6(int param1, int param2) {
    short local0; 		// m[r28 - 204]
    int local6; 		// r24
    int local9; 		// r28

    param1 = proc9(0x100032cc, local9 - 204, param1, param2, local9 - 204);
    local6 = GetModuleHandleW(&local0);
    return local6; /* WARNING: Also returning: param1 */
}

// address: 0x1000227e
proc7(int param1, int param2, int param3, int param4) {
    int local4; 		// r24
    int local6; 		// r26
    int local7; 		// r28

    local4 = proc19(0x100032b0, param1, param2, param3, param4); /* Warning: also results in param2, param4, local6 */
    return local4; /* WARNING: Also returning: param2, param4, local6 */
}

// address: 0x1000228f
proc8(int param1, int param2, int param3, int param4) {
    int local3; 		// r0
    int local4; 		// r24
    int local6; 		// r26
    int local7; 		// r28

    local4 = proc19(0x100032cc, param1, param2, param3, param4); /* Warning: also results in local3, param2, param4, local6 */
    return local4; /* WARNING: Also returning: local3, param2, param4, local6 */
}

// address: 0x100021c1
proc9(int param1, int param2, int param3, int param5, int param4) {
    int local1; 		// r25{64}
    int local2; 		// r26{65}
    short local3; 		// r0{13}
    short local4; 		// r0
    short local5; 		// r25
    short local6; 		// r26
    short local7; 		// r28

    local5 = param1;
    if (param1 != 0) {
        local3 = *(int*)param1;
        local4 = (local3 ^ 0xae12);
        param4 = (param4 >> 16 & 0xffff | (local3)) >> 16 & 0xffff | ((local3 ^ 0xae12));
        local6 = param2;
        param3 = (unsigned short) param2;
        *(int*)param2 = (local3 ^ 0xae12);
        if ((local3 ^ 0xae12) != 0) {
            do {
                local1 = local5;
                local2 = local6;
                local5 = local1 + 2;
                local6 = local2 + 2;
                param3 = (unsigned short) local2 + 2;
                local4 = (*(int*)(local1 + 2) ^ param5);
                param4 = (param4 >> 16 & 0xffff | *(unsigned short*)(local1 + 2)) >> 16 & 0xffff | ((*(int*)(local1 + 2) ^ param5));
                *(short*)(local2 + 2) = (*(int*)(local1 + 2) ^ param5);
            } while ((*(int*)(local1 + 2) ^ param5) != 0);
        }
    } else {
        local4 = 0;
        *(int*)param2 = 0;
    }
    return local4; /* WARNING: Also returning: param3 */
}

// address: 0x100015e6
proc10(int param2, int param3, int param1) {
    int local0; 		// r28{109}
    int local1; 		// r28{32}
    int local10;
    int local100; 		// r25
    int local101; 		// r26
    int local102; 		// r28
    int local11;
    int local12;
    int local13;
    int local14; 		// m[r28 - 48]{74}
    int local15; 		// m[r28 - 52]{74}
    int local16;
    int local17; 		// m[r28 - 4]{74}
    int local18; 		// m[r28 - 12]{74}
    int local19; 		// m[r28 - 16]{74}
    int local2; 		// r29{74}
    int local20; 		// m[r28 - 20]{74}
    int local21; 		// m[r28 - 24]{74}
    int local22; 		// m[r28 - 28]{74}
    int local23; 		// m[r28 - 32]{74}
    int local24; 		// m[r28 - 36]{74}
    int local25; 		// m[r28 - 40]{74}
    int local26; 		// m[r28 - 44]{74}
    int local27; 		// m[r29 - 12]{74}
    void *local28; 		// m[r28 - 44]{107}
    int local29; 		// r28{74}
    int local3; 		// r29{32}
    int local30; 		// m[r28 - 40]{104}
    int local31; 		// m[r28 - 36]{101}
    int local32; 		// m[r28 - 32]{99}
    int local33; 		// m[r28 - 28]{97}
    int local34; 		// m[r28 - 24]{95}
    int local35; 		// m[r28 - 20]{93}
    int local36; 		// m[r28 - 16]{91}
    int local37; 		// m[r28 - 12]{88}
    int local38; 		// m[r28 - 8]{86}
    int local39; 		// m[r28 - 4]{84}
    int local4;
    int local40; 		// m[r29 - 12]{75}
    int local41; 		// r24{32}
    int local42;
    int local43;
    int local44;
    int local45;
    int local46;
    int local47;
    int local48;
    int local49;
    int local5; 		// m[r28 - 8]{74}
    int local50;
    int local51;
    int local52; 		// m[r28 - 48]{32}
    int local53; 		// m[r28 - 52]{32}
    int local54;
    int local55; 		// m[r28 - 4]{32}
    int local56; 		// m[r28 - 8]{32}
    int local57; 		// m[r28 - 12]{32}
    int local58; 		// m[r28 - 16]{32}
    int local59; 		// m[r28 - 20]{32}
    int local6;
    int local60; 		// m[r28 - 24]{32}
    int local61; 		// m[r28 - 28]{32}
    int local62; 		// m[r28 - 32]{32}
    int local63; 		// m[r28 - 36]{32}
    int local64; 		// m[r28 - 40]{32}
    int local65; 		// m[r28 - 44]{32}
    int local66;
    int local67; 		// m[r29 - 12]{32}
    int local68; 		// m[0x1000218a]{32}
    int local69; 		// m[r28 - 44]{72}
    int local7;
    int local70; 		// m[r28 - 40]{69}
    int local71; 		// m[r28 - 36]{66}
    int local72; 		// r28{65}
    void *local73; 		// m[r28 - 36]{63}
    void *local74; 		// %pc{32}
    int local75; 		// m[r28 - 32]{60}
    int local76; 		// m[r28 - 28]{58}
    int local77; 		// m[r28 - 24]{56}
    int local78; 		// m[r28 - 20]{54}
    int local79; 		// m[r28 - 16]{52}
    int local8;
    int local80; 		// m[r28 - 12]{49}
    int local81; 		// m[r28 - 8]{47}
    int local82; 		// m[r28 - 4]{45}
    int local83; 		// m[r29 - 12]{33}
    int local84; 		// r29{109}
    void *local85; 		// %pc{74}
    int local86; 		// m[r28 - 52]{30}
    int local87; 		// m[r28 - 48]{27}
    int local88; 		// m[r28 - 44]{25}
    int local89; 		// m[r28 - 40]{23}
    int local9;
    int local90; 		// m[r28 - 36]{21}
    int local91; 		// m[r28 - 32]{18}
    int local92; 		// m[r28 - 28]{16}
    int local93; 		// m[r28 - 24]{14}
    int local94; 		// m[r28 - 8]{13}
    int local95; 		// m[r28 - 12]{12}
    int local96; 		// m[r28 - 20]{8}
    int local97; 		// m[r28 - 4]{1}
    int local98; 		// r29{140}
    int local99; 		// r24

    local97 = param1;
    local96 = param2;
    local95 = param2;
    local94 = 0;
    local93 = 0;
    local92 = 0x8000000;
    local91 = 64;
    local90 = local102 - 12;
    local89 = 0;
    local88 = 0xf001f;
    local87 = param3;
    (*global18)(pc, param3, 0xf001f, 0, local102 - 12, 64, 0x8000000, 0, param2, param2, 0, param1, local102 - 12, 0, local102 - 4, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
    local98 = local3;
    local83 = local41;
    if (local41 == 0) {
        local82 = 64;
        local81 = 0;
        local80 = 1;
        local79 = local3 - 16;
        local78 = 0;
        local77 = 0;
        local76 = 0;
        local75 = *(int*)(local3 + 20);
        local73 = local74;
        GetCurrentProcess();
        local71 = local99;
        local70 = *(int*)*(int*)(local3 + 16);
        local69 = *(int*)0x10003058;
        (*local68)(local53, local52, local65, local51, *(int*)0x10003058, local64, local50, *(int*)*(int*)(local3 + 16), local63, local49, local99, local62, local48, *(int*)(local3 + 20), local61, local47, 0, local60, local46, 0, local59, local45, 0, local58, local3 - 16, local57, local44, 1, local56, local43, 0, local42, local54, local55, *(int*)(local3 + 16), local100, local101, local3, local66, local67, local41, <all>, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
        local98 = local2;
        local40 = local99;
        if (local99 == 0) {
            local39 = 64;
            local38 = 0;
            local37 = 1;
            local36 = local2 - 16;
            local35 = 0;
            local34 = 0;
            local33 = 0;
            local32 = *(int*)(local2 + 24);
            local31 = *(int*)(local2 + 8);
            local30 = *(int*)*(int*)(local2 + 16);
            local28 = local85;
            (**(int*)0x1000218a)(local15, local14, local13, local85, local26, local12, *(int*)*(int*)(local2 + 16), local25, local11, *(int*)(local2 + 8), local24, local10, *(int*)(local2 + 24), local23, local9, 0, local22, local8, 0, local21, local7, 0, local20, local2 - 16, local19, local6, 1, local18, local5, 0, local4, local16, 64, local17, *(int*)(local2 + 16), local100, local101, local2, *(int*)(local84 - 12), local99, local27, <all>, SUBFLAGS32(local99, 0, local99), (unsigned)local99 < 0);
            local98 = local84;
            local98 = local84;
            *(int*)(local84 - 12) = local99;
            if (local99 == 0) {
                local99 = 0;
            } else {
                *(int*)(local0 - 4) = -5;
                local99 = -5;
            }
        } else {
            *(int*)(local29 - 4) = -5;
            local99 = -5;
        }
    } else {
        *(int*)(local1 - 4) = -5;
        local99 = -5;
    }
    param1 = local98;
    return local99; /* WARNING: Also returning: local100, local101, *(int*)param1 */
}

// address: 0x10001696
void proc11(int param5, int param3, int param6, int param4, int param2, int param1) {
    int local6; 		// r24
    int local7; 		// r25
    int local8; 		// r28

    if ((unsigned)param1 > 0) {
        proc12(*(int*)param5, param2, param1);
    }
    local7 = param3 + *(int*)param6;
    *(int*)param4 = local7;
    *(int*)(param4 + 4) = param1;
    local6 = *(int*)param5;
    local6 += param1;
    *(int*)param5 = local6;
    local6 = *(int*)param6;
    local6 += param1;
    *(int*)param6 = local6;
    return;
}

// address: 0x1000226a
void proc12(int param1, int param2, int param3) {
    int local3; 		// r25
    int local4; 		// r28
    int local5; 		// r30
    int local6; 		// r31

    local6 = param1;
    local5 = param2;
    local3 = param3;
    while (local3 != 0) {
        *(int*)local6 = *(int*)local5;
        local5++;
        local6++;
        local3 = local3 - 1;
    }
    return;
}

// address: 0x10002807
proc13(int param4, int param2, int param3, int param5, int param6, int param1, int param7) {
    int local0; 		// r28{63}
    int local1; 		// r28{98}
    int local10; 		// m[r28 - 36]{87}
    int local11; 		// m[r28 - 40]{87}
    int local12; 		// m[r28 - 44]{87}
    int local13; 		// m[r28 - 48]{87}
    int local14; 		// m[r28 - 52]{87}
    int local15; 		// m[r28 - 56]{87}
    int local16; 		// m[r28 - 60]{87}
    int local17; 		// m[r28 - 64]{87}
    int local18;
    int local19; 		// m[r28 - 8]{87}
    int local2; 		// r28{87}
    int local20;
    int local21;
    int local22; 		// m[r28 - 20]{87}
    int local23; 		// m[r28 - 24]{87}
    int local24; 		// m[r28 - 4]{87}
    int local25; 		// m[r29 - 16]{87}
    int local26; 		// m[r28 - 8]{137}
    int local27; 		// m[r28 - 4]{133}
    int local28; 		// r24{129}
    int local29; 		// r28{129}
    int local3; 		// r29{87}
    int local30; 		// m[r28 - 16]{127}
    int local31; 		// m[r28 - 12]{124}
    int local32; 		// m[r28 - 8]{122}
    int local33; 		// m[r28 - 4]{120}
    int local34; 		// r24{116}
    int local35; 		// r28{116}
    void *local36; 		// m[r28 - 16]{114}
    int local37; 		// m[r28 - 12]{111}
    int local38; 		// m[r28 - 8]{109}
    int local39; 		// m[r28 - 4]{107}
    int local4; 		// m[m[r28 + 8] + 8]{87}
    int local40; 		// m[r28 - 12]{87}
    int local41; 		// m[r28 - 16]{87}
    void *local42; 		// m[r28 - 8]{96}
    int local43; 		// m[r28 - 4]{92}
    int local44; 		// m[r29 - 12]{88}
    int local45; 		// m[m[r28 + 8] + 8]{63}
    int local46; 		// m[m[r29 + 12] + 8]{63}
    int local47;
    int local48;
    int local49; 		// m[r28 - 24]{63}
    int local5;
    int local50; 		// m[r28 - 28]{63}
    int local51; 		// m[r28 - 32]{63}
    int local52; 		// m[r28 - 36]{63}
    int local53; 		// m[r28 - 40]{63}
    int local54; 		// m[r28 - 44]{63}
    int local55; 		// m[r28 - 48]{63}
    int local56; 		// m[r28 - 52]{63}
    int local57; 		// m[r28 - 56]{63}
    int local58; 		// m[r28 - 60]{63}
    int local59; 		// m[r28 - 64]{63}
    int local6;
    int local60;
    int local61; 		// m[r28 - 4]{63}
    int local62; 		// m[r28 - 8]{63}
    int local63; 		// m[r28 - 12]{63}
    int local64; 		// m[r28 - 16]{63}
    int local65; 		// m[r29 - 12]{63}
    void *local66; 		// %pc{63}
    void *local67; 		// m[r28 - 24]{85}
    int local68; 		// m[r28 - 20]{81}
    int local69; 		// m[r28 - 16]{79}
    int local7;
    int local70; 		// m[r28 - 12]{77}
    int local71; 		// m[r28 - 8]{75}
    int local72; 		// m[r28 - 4]{73}
    int local73; 		// m[r29 - 16]{64}
    void *local74; 		// %pc{87}
    int local75; 		// m[r28 - 64]{61}
    int local76; 		// m[r28 - 60]{57}
    int local77; 		// m[r28 - 56]{54}
    int local78; 		// m[r28 - 52]{52}
    int local79; 		// m[r28 - 48]{50}
    int local8; 		// m[r28 - 28]{87}
    int local80; 		// m[r28 - 44]{47}
    int local81; 		// m[r28 - 40]{45}
    int local82; 		// m[r28 - 36]{43}
    int local83; 		// m[r28 - 24]{42}
    int local84; 		// m[r28 - 28]{41}
    int local85; 		// m[r28 - 32]{27}
    int local86; 		// m[r28 - 8]{11}
    int local87; 		// m[m[r28 + 8] + 8]{8}
    int local88; 		// r29{3}
    int local89; 		// m[r28 - 4]{1}
    int local9; 		// m[r28 - 32]{87}
    int local90; 		// r29{152}
    int local91; 		// r24
    int local92; 		// r28

    local89 = param1;
    local88 = local92 - 4;
    local87 = 0;
    local86 = param3;
    local91 = *(unsigned short*)param3;
    local90 = local88;
    local90 = local88;
    if (local91 == 0x5a4d) {
        param6 = param3 + *(int*)(param3 + 60);
        local85 = param6;
        if (*(int*)param6 == 0x4550) {
            local84 = *(int*)(param6 + 80);
            local83 = 0;
            local82 = 0;
            local81 = 0x8000000;
            local80 = 64;
            local79 = local92 - 28;
            local78 = 0;
            local77 = 0xf001f;
            local76 = local92 - 12;
            (**(int*)(param4 + 44))(pc, local92 - 12, 0xf001f, 0, local92 - 28, 64, 0x8000000, 0, param6, *(int*)(param6 + 80), 0, param3, param1, param4, 0, local92 - 4, 0, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
            local90 = param1;
            local73 = local91;
            if (local91 == 0) {
                local72 = 0;
                local71 = 0;
                local70 = 0;
                local69 = 6;
                local68 = *(int*)(param1 - 8);
                local67 = local66;
                (**(int*)(*(int*)(param1 + 8) + 24))(local59, local58, local57, local56, local55, local54, local53, local52, local51, local50, local49, local66, *(int*)(param1 - 8), local64, 6, local63, 0, local62, local48, 0, local47, 0, local60, local61, param5, *(int*)(param1 + 8), param6, param1, local45, local46, local91, local65, param7, SUBFLAGS32(local91, 0, local91), (unsigned)local91 < 0);
                local44 = local91;
                if (local91 != 0) {
                    *(int*)(*(int*)(local3 + 12) + 8) = *(int*)(local3 - 8);
                    local39 = local91;
                    local38 = *(int*)(local3 - 28);
                    local37 = *(int*)(local3 + 16);
                    local36 = local74;
                    proc21(*(int*)(local3 + 16), *(int*)(local3 - 28), local91);
                    local33 = *(int*)(local3 + 20);
                    local32 = *(int*)(local3 - 28);
                    local31 = *(int*)(local3 + 12);
                    local30 = local74 - 470;
                    param5 = proc22(*(int*)(local3 + 12), local91); /* Warning: also results in param6 */
                    local27 = local91;
                    local26 = local74 - 1523;
                    (**(int*)(*(int*)(local3 + 8) + 28))(local17, local16, local15, local14, local13, local12, local11, local10, local9, local8, local7, local23, local22, local21, local74 - 470, local20, *(int*)(local3 + 12), local6, local19, local74 - 1523, local5, local18, local24, local91, param5, *(int*)(local3 + 8), param6, local3, local4, *(int*)(local3 - 8), local25, local91, param7, ADDFLAGS32(local2 - 12, 12, local2), ADDFLAGS32(local2 - 12, 12, local2));
                    local90 = param1;
                    local91 = 0;
                } else {
                    local43 = *(int*)(local3 - 8);
                    local42 = local74;
                    (**(int*)(*(int*)(local3 + 8) + 64))(local17, local16, local15, local14, local13, local12, local11, local10, local9, local8, local7, local23, local22, local41, local21, local40, local20, local6, local19, local74, local5, local18, local24, *(int*)(local3 - 8), param5, *(int*)(local3 + 8), param6, local3, local4, *(int*)(*(int*)(local3 + 12) + 8), local25, local91, param7, SUBFLAGS32(local91, 0, local91), (unsigned)local91 < 0);
                    local90 = param1;
                    *(int*)(local1 - 4) = -10;
                    local91 = -10;
                }
            } else {
                *(int*)(local0 - 4) = -11;
                local91 = -11;
            }
        } else {
            *(int*)(local92 - 36) = -2;
            local91 = -2;
        }
    } else {
        *(int*)(local92 - 36) = -2;
        local91 = -2;
    }
    param1 = local90;
    return local91; /* WARNING: Also returning: param5, param6, *(int*)param1 */
}

// address: 0x10002769
proc14(int param2, int param3, int param1, int param4) {
    int local0; 		// r28{48}
    int local1; 		// r29{48}
    int local10; 		// m[r28 - 44]{85}
    int local11; 		// m[r28 - 4]{85}
    int local12; 		// m[r28 - 8]{85}
    int local13; 		// m[r28 - 12]{85}
    int local14; 		// m[r28 - 16]{85}
    int local15; 		// m[r29 - 20]{85}
    void *local16; 		// m[r28 - 16]{94}
    int local17; 		// r28{85}
    int local18; 		// m[r28 - 12]{90}
    int local19; 		// m[r28 - 8]{88}
    int local2;
    int local20; 		// m[r28 - 4]{86}
    int local21;
    int local22;
    int local23;
    int local24; 		// m[r28 - 20]{48}
    int local25; 		// m[r28 - 28]{48}
    int local26; 		// m[r28 - 32]{48}
    int local27; 		// m[r28 - 36]{48}
    int local28; 		// m[r28 - 40]{48}
    int local29; 		// m[r28 - 44]{48}
    int local3;
    int local30; 		// m[r28 - 4]{48}
    int local31; 		// m[r28 - 8]{48}
    int local32; 		// m[r28 - 12]{48}
    int local33; 		// m[r28 - 16]{48}
    int local34; 		// m[r28 - 4]{58}
    int local35; 		// m[r28 - 8]{61}
    void *local36; 		// %pc{48}
    int local37; 		// m[r28 - 4]{83}
    int local38; 		// m[r29 - 20]{80}
    int local39; 		// r28{68}
    int local4;
    void *local40; 		// m[r28 - 16]{66}
    int local41; 		// m[r28 - 12]{63}
    void *local42; 		// %pc{85}
    int local43; 		// m[r28 - 44]{46}
    int local44; 		// m[r28 - 40]{42}
    int local45; 		// m[r28 - 36]{40}
    int local46; 		// m[r28 - 32]{38}
    int local47; 		// m[r28 - 28]{36}
    int local48; 		// m[r28 - 12]{27}
    int local49; 		// m[r28 - 12]{22}
    int local5; 		// m[r28 - 20]{85}
    int local50; 		// m[r28 - 16]{14}
    int local51; 		// m[r28 - 20]{11}
    int local52; 		// r29{3}
    int local53; 		// m[r28 - 4]{1}
    int local54; 		// r29{108}
    int local55; 		// r24
    int local56; 		// r25
    int local57; 		// r28
    int local6; 		// m[r28 - 28]{85}
    int local7; 		// m[r28 - 32]{85}
    int local8; 		// m[r28 - 36]{85}
    int local9; 		// m[r28 - 40]{85}

    local53 = param1;
    local52 = local57 - 4;
    local51 = param2 + 24;
    local55 = *(int*)param3;
    local50 = local55;
    local54 = local52;
    local54 = local52;
    if (local55 != 0) {
        local49 = local55;
        local48 = local55 + 64;
        if (*(int*)(local55 + 64) != 0xab49103b) {
            local47 = local57 - 8;
            local46 = 128;
            local45 = 0x1000;
            local44 = local55;
            (**(int*)(param3 + 16))(pc, local55, 0x1000, 128, local57 - 8, param2 + 24, local55, local55 + 64, param1, param3, local57 - 4, SUBFLAGS32(*(int*)(local55 + 64), 0xab49103b, *(int*)(local55 + 64) + 0x54b6efc5), (unsigned)*(int*)(local55 + 64) < 0xab49103b);
            local54 = local1;
            if (local55 != 0) {
                local34 = *(int*)(*(int*)(local1 - 16) + 4);
                local35 = *(int*)*(int*)(local1 - 16);
                local41 = *(int*)(local1 - 8);
                local40 = local36;
                proc20(*(int*)(local1 - 8), local35, local34);
                local55 = *(int*)(*(int*)(local1 + 8) + 8);
                local38 = local55;
                local37 = local36 - 254;
                (**(int*)(*(int*)(local1 + 8) + 8))(local29, local28, local27, local26, local25, local24, local36, local23, local33, *(int*)(local1 - 8), local22, local32, local35, local31, local34, local30, local21, local55, *(int*)(local1 - 8), local1, local55, param4, ADDFLAGS32(0, *(int*)(*(int*)(local1 + 8) + 8), local55), ADDFLAGS32(0, *(int*)(*(int*)(local1 + 8) + 8), local55));
                local20 = 0;
                local19 = 0;
                local18 = -1;
                local16 = local42;
                (**(int*)(*(int*)(param1 + 12) + 32))(local10, local9, local8, local7, local6, local5, local14, local42, local4, local13, -1, local3, local12, 0, local11, 0, local2, *(int*)(param1 + 12), local56, param1, local15, param4, flags, NF);
                local54 = param1;
                local55 = 0;
            } else {
                *(int*)(local0 - 4) = -4;
                local55 = -4;
            }
        } else {
            local55 = 0;
        }
    } else {
        local55 = 0;
    }
    param1 = local54;
    return local55; /* WARNING: Also returning: *(int*)param1 */
}

// address: 0x100019fe
proc15() {
    return 1608;
}

// address: 0x10001a0d
proc16() {
    return 0x100022a0;
}

// address: 0x10001a17
proc17() {
    return 414;
}

// address: 0x10001a26
proc18() {
    return 724;
}

// address: 0x10002229
proc19(int param1, int param4, int param2, int param3, int param5) {
    short local0; 		// m[r28 - 304]
    char local1; 		// m[r28 - 104]
    int local10; 		// r24
    int local12; 		// r26
    int local13; 		// r28
    int local9; 		// r0

    local9 = proc9(param1, local13 - 304, param2, param3, local13 - 304); /* Warning: also results in param2 */
    param5 = proc23(param4, local13 - 104, param5);
    local10 = GetModuleHandleW(&local0);
    local10 = GetProcAddress(local10, &local1);
    return local10; /* WARNING: Also returning: local9, param2, param5, local12 */
}

// address: 0x100026d3
proc20(int param1, int param2, int param3) {
    int local3; 		// r25
    int local4; 		// r28
    int local5; 		// r30
    int local6; 		// r31

    local6 = param1;
    local5 = param2;
    local3 = param3;
    while (local3 != 0) {
        *(int*)local6 = *(int*)local5;
        local5++;
        local6++;
        local3 = local3 - 1;
    }
    return local3;
}

// address: 0x100026e7
void proc21(int param1, int param3, int param2) {
    int local10; 		// m[r28 - 28]{65}
    int local11; 		// m[r28 - 20]{97}
    int local12; 		// m[r28 - 24]{98}
    int local13; 		// m[r28 - 28]{99}
    int local14; 		// m[r28 - 20]{101}
    int local15; 		// m[r28 - 24]{102}
    int local16; 		// m[r28 - 28]{103}
    int local17; 		// m[r28 - 20]{11}
    int local18; 		// m[r28 - 24]{13}
    int local19; 		// m[r28 - 28]{15}
    int local2; 		// m[r28 - 20]
    int local20; 		// r24{25}
    int local23; 		// local11{97}
    int local24; 		// local12{98}
    int local25; 		// local13{99}
    int local26; 		// local14{101}
    int local27; 		// local15{102}
    int local28; 		// local16{103}
    int local29; 		// r24
    int local3; 		// m[r28 - 24]
    int local30; 		// r25
    int local31; 		// r28
    int local4; 		// m[r28 - 28]
    int local6; 		// m[r28 - 12]
    int local7; 		// m[r28 - 8]
    int local8; 		// m[r28 - 20]{51}
    int local9; 		// m[r28 - 24]{58}

    local29 = *(unsigned short*)(param3 + 6);
    local17 = *(int*)(param3 + 84);
    local18 = param1;
    local19 = param2;
    proc20(param2, param1, *(int*)(param3 + 84));
    local23 = local17;
    local24 = local18;
    local25 = local19;
    local20 = *(unsigned short*)(param3 + 20);
    local30 = param3;
    local6 = param3 + local20 + 24;
    local7 = 0;
    local11 = local23;
    local12 = local24;
    local13 = local25;
    local26 = local11;
    local27 = local12;
    local28 = local13;
    while (local7 < local29) {
        if ((unsigned)*(int*)(local6 + 16) > 0) {
            local8 = *(int*)(local6 + 16);
            local30 = param1 + *(int*)(local6 + 20);
            local9 = local30;
            local30 = param2 + *(int*)(local6 + 12);
            local10 = local30;
            local30 = proc20(local4, local3, local2);
            local26 = local8;
            local27 = local9;
            local28 = local10;
        }
        local14 = local26;
        local15 = local27;
        local16 = local28;
        local23 = local14;
        local24 = local15;
        local25 = local16;
        local7++;
        local6 += 40;
        local11 = local23;
        local12 = local24;
        local13 = local25;
        local26 = local11;
        local27 = local12;
        local28 = local13;
    }
    return;
}

// address: 0x100024b1
proc22(int param1, int param2) {
    int local1; 		// m[r28 - 8]
    int local2; 		// r1
    int local3; 		// r24
    int local4; 		// r25
    int local5; 		// r28

    local1 = param1 + 80;
    local3 = *(int*)(*(int*)(local5 + 8) + 52);
    local3 += *(int*)(*(int*)(local5 + 8) + 40);
    *(int*)local1 = local3;
    *(int*)(local1 + 4) = 0;
    local4 = *(int*)(*(int*)(local5 + 8) + 96);
    *(int*)(local1 + 8) = local4;
    local4 = *(int*)(*(int*)(local5 + 8) + 100);
    *(int*)(local1 + 12) = local4;
    *(int*)(local1 + 16) = *(unsigned short*)(*(int*)(local5 + 8) + 92);
    local2 = *(int*)(*(int*)(local5 + 8) + 74);
    *(short*)(local1 + 20) = local2;
    local2 = *(int*)(*(int*)(local5 + 8) + 72);
    *(short*)(local1 + 22) = local2;
    *(int*)(local1 + 24) = 0;
    local2 = *(int*)(*(int*)(local5 + 8) + 22);
    *(short*)(local1 + 28) = local2;
    local2 = *(int*)(*(int*)(local5 + 8) + 94);
    *(short*)(local1 + 30) = local2;
    local2 = *(int*)(*(int*)(local5 + 8) + 4);
    *(short*)(local1 + 32) = local2;
    *(char*)(local1 + 34) = 1;
    *(char*)(local1 + 35) = 4;
    local4 = *(int*)(*(int*)(local5 + 8) + 112);
    *(int*)(local1 + 36) = local4;
    *(int*)(local1 + 40) = param2;
    *(int*)(local1 + 44) = 0;
    return (unsigned short) param2; /* WARNING: Also returning: param2 */
}

// address: 0x1000219e
proc23(int param1, int param2, int param3) {
    char local0; 		// r24
    char local1; 		// r25
    char local2; 		// r28

    local0 = param1;
    if (param1 != 0) {
        local1 = param2;
        param3 = *(char*)local0 ^ 18;
        *(char*)local1 = *(char*)local0 ^ 18;
        while ((*(char*)local0 ^ 18) != 0) {
            local0 += 2;
            local1++;
            param3 = *(char*)local0 ^ 18;
            *(char*)local1 = *(char*)local0 ^ 18;
        }
    } else {
        *(int*)param2 = 0;
    }
    return param3;
}

