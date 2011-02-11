char _amsg_exit[0] = "\xffffff80\x15\x02";
int global7 = -1;
char _initterm[0] = "t\x15\x02";
char QueryPerformanceCounter[0] = "p\x16\x02";
char GetTickCount[0] = "\xffffff8a\x16\x02";
char GetCurrentThreadId[0] = "\xffffff9a\x16\x02";
char GetCurrentProcessId[0] = "\xffffffb0\x16\x02";
char GetSystemTimeAsFileTime[0] = "\xffffffc6\x16\x02";
int global1 = 0x44bf19b1;
int global0 = 0xbb40e64e;
void global17;
int global16;
int global15;
int global14;
char InterlockedCompareExchange[0] = "\xfffffff0\x15\x02";
int global12;
char _adjust_fdiv[0] = "\xffffff8e\x15\x02";
int global10;

proc2(int param5, int param1, int param2, int param3, int param4);
void proc3();
proc4(int param6, int param3, int param4, int param2, int param1, int param5);
void _start(int param6, int param4, int param2, int param1, int param9, int param5, int param3);
proc5();
proc6(int param3, int param6, int param13, int param7, int param4, int param2, int param5, int param1, int param11, int ??, int ??, int ??);
__imp__amsg_exit();
proc8(int param4, int param2, int param3, int param1, int param5);
proc9(int param4, int param1, int param2, int param3);
__imp__initterm();
proc11(int param1);
proc12(int param1, int param3, int param2);

// address: 0x1001f3fa
proc1(int param1) {
    int local10; 		// r30{53}
    int local12; 		// r24{46}
    int local13; 		// r24{40}
    int local18; 		// r28{14}
    int local19; 		// r28{91}
    int local20; 		// r24
    int local23; 		// r28
    int local6; 		// m[r28 - 36]
    int local8; 		// m[r28 - 16]
    int local9; 		// m[r28 - 20]

    local18 = local23 - 24;
    local19 = local18;
    if (global0 == 0xbb40e64e) {
L8:
        GetSystemTimeAsFileTime();
        GetCurrentProcessId();
        GetCurrentThreadId();
        GetTickCount();
        local10 = 0 ^ local13 ^ local12 ^ local20;
        QueryPerformanceCounter();
        local20 = local8 ^ local9;
        param1 = local10 ^ local20;
        if ((local10 ^ local20) == 0xbb40e64e) {
            param1 = 0xbb40e64f;
        }
        global0 = param1;
        global1 = param1;
        param1 = local6;
        local23 = local23 - 32;
        local19 = local23;
    } else {
        if ((global0 & 0xffff0000) == 0) {
            goto L8;
        } else {
            global1 = global0;
        }
    }
    local23 = local19;
    return param1; /* WARNING: Also returning: *(int*)local23 */
}

// address: 0x1001f37c
proc2(int param5, int param1, int param2, int param3, int param4) {
    int local0; 		// r24
    int local1; 		// r28

    *(int*)(local1 - 4) = 0x1001f3d5;
    *(int*)(local1 - 8) = *(int*)0;
    *(int*)(local1 - param1 - 12) = param2;
    *(int*)(local1 - param1 - 16) = param3;
    *(int*)(local1 - param1 - 20) = param4;
    param5 = param5 ^ global0;
    local0 = global0 ^ local1 + 8;
    *(int*)(local1 - param1 - 24) = local0;
    *(int*)(local1 - 16) = local1 - param1 - 24;
    *(int*)(local1 - param1 - 28) = *(int*)local1;
    *(int*)local1 = param5;
    *(int*)0 = local1 - 8;
    return local1 + 8;
}

// address: 0x1001f039
void proc3() {
    global7 = -1;
    return;
}

// address: 0x1001f3c1
proc4(int param6, int param3, int param4, int param2, int param1, int param5) {
    int local1; 		// r28

    *(int*)0 = param1;
    return param3; /* WARNING: Also returning: param4, param5, param6 */
}

// address: 0x1001f044
void _start(int param6, int param4, int param2, int param1, int param9, int param5, int param3) {
    int local0; 		// r28{181}
    int local1; 		// r24{152}
    int local10; 		// r29{152}
    int local100; 		// m[r28 - 4]{307}
    int local101; 		// m[r28 - 4]{314}
    int local102; 		// m[r28 - 8]{315}
    int local103; 		// m[r28 - 12]{316}
    int local104; 		// m[r28 - 16]{317}
    int local105; 		// m[r28 - 4]{318}
    int local106; 		// m[r28 - 8]{319}
    int local107; 		// m[r28 - 12]{320}
    int local108; 		// m[r28 - 16]{321}
    int local109; 		// m[r29 - 4]{326}
    int local11; 		// r29{246}
    int local110; 		// m[r29 - 28]{327}
    int local111; 		// m[r29 - 4]{328}
    int local112; 		// m[r29 - 4]{329}
    int local113; 		// m[r29 - 28]{330}
    int local114; 		// m[r29 - 4]{118}
    int local115; 		// m[r29 - 4]{332}
    int local116; 		// m[r29 - 28]{333}
    int local117; 		// global7{234}
    int local118; 		// %pc{115}
    int local119; 		// r24{116}
    int local12; 		// r29{231}
    int local120; 		// r28{230}
    int local121; 		// m[r28 - 8]{109}
    int local122; 		// r24{103}
    int local123; 		// r28{103}
    int local124; 		// m[r28 - 8]{96}
    int local125; 		// r28{83}
    int local126; 		// m[r29 - 4]{331}
    int local127; 		// %pc{82}
    int local128; 		// m[r28 - 8]{76}
    int local129; 		// m[r29 - 28]{173}
    int local13; 		// r30{232}
    int local130; 		// m[r29 - 4]{173}
    int local131; 		// m[r28 - 16]{173}
    int local132; 		// m[r28 - 12]{173}
    int local133; 		// m[r28 - 8]{173}
    int local134; 		// m[r28 - 4]{173}
    int local135; 		// r28{65}
    int local136; 		// m[r28 - 4]{280}
    int local137; 		// m[r28 - 8]{281}
    int local138; 		// m[r28 - 12]{282}
    int local139; 		// m[r28 - 4]{283}
    int local14; 		// m[r28 - 8]{335}
    int local140; 		// m[r28 - 8]{284}
    int local141; 		// m[r28 - 12]{285}
    int local142; 		// m[r28 - 16]{286}
    int local143; 		// m[r29 - 4]{68}
    int local144; 		// m[r29 - 28]{66}
    int local145; 		// m[r29 - 4]{297}
    int local146; 		// m[r29 - 28]{298}
    int local147; 		// m[r29 - 4]{299}
    int local148; 		// m[r29 - 28]{300}
    int local149; 		// global7{219}
    int local15; 		// m[r28 - 12]{336}
    int local150; 		// %pc{64}
    int local151; 		// m[r28 - 4]{287}
    int local152; 		// m[r28 - 8]{288}
    int local153; 		// m[r28 - 12]{289}
    int local154; 		// m[r28 - 16]{290}
    int local155; 		// m[r28 - 4]{291}
    int local156; 		// m[r28 - 8]{292}
    int local157; 		// m[r28 - 12]{293}
    int local158; 		// m[r28 - 16]{294}
    int local159; 		// m[r29 - 4]{301}
    int local16; 		// m[r28 - 4]{337}
    int local160; 		// m[r29 - 4]{302}
    int local161; 		// m[r29 - 28]{303}
    int local162; 		// m[r29 - 4]{304}
    int local163; 		// m[r29 - 4]{305}
    int local164; 		// m[r29 - 28]{306}
    int local165; 		// r28{215}
    int local166; 		// r29{216}
    void *local167; 		// %pc{222}
    int local168; 		// m[r28 - 8]{58}
    int local169; 		// m[r29 - 4]{295}
    int local17; 		// m[r28 - 8]{338}
    int local170; 		// m[r29 - 28]{296}
    int local171;
    int local172;
    int local173;
    int local174;
    int local175;
    int local176; 		// r28{48}
    int local177;
    int local178;
    int local179;
    int local18; 		// m[r28 - 12]{339}
    int local180; 		// m[r28 - 4]{48}
    int local181; 		// m[r28 - 8]{48}
    int local182; 		// m[r28 - 12]{48}
    int local183; 		// m[r28 - 16]{48}
    int local184; 		// m[r29 - 4]{51}
    int local185; 		// m[r29 - 28]{49}
    int local186; 		// m[r29 - 4]{48}
    int local187; 		// m[r29 - 28]{48}
    int local188; 		// global7{48}
    void *local189; 		// %pc{48}
    int local19; 		// m[r28 - 16]{340}
    int local190; 		// r29{8}
    int local191; 		// %pc{279}
    int local192; 		// m[r28 - 16]{46}
    int local193; 		// m[r28 - 12]{43}
    int local194; 		// m[r28 - 8]{41}
    int local195; 		// m[r28 - 4]{39}
    int local196; 		// m[r29 - 4]{38}
    int local197; 		// m[r28 - 4]{1}
    int local198; 		// m[r28 - 8]{3}
    int local199; 		// m[r28 - 12]{6}
    int local2; 		// r25{227}
    int local20; 		// m[r28 - 4]{341}
    int local200; 		// m[r29 - 4]{18}
    int local201; 		// m[r29 - 28]{15}
    int local202; 		// global7{19}
    int local203; 		// %pc{7}
    int local204; 		// m[r28 - 4]{191}
    int local205; 		// m[r28 - 8]{198}
    int local206; 		// %pc{199}
    int local207; 		// r28{200}
    int local208; 		// local165{215}
    int local209; 		// local166{216}
    int local21; 		// m[r28 - 8]{342}
    int local210; 		// local149{219}
    void *local211; 		// local167{222}
    int local212; 		// local136{280}
    int local213; 		// local137{281}
    int local214; 		// local138{282}
    int local215; 		// local139{283}
    int local216; 		// local140{284}
    int local217; 		// local141{285}
    int local218; 		// local142{286}
    int local219; 		// local145{297}
    int local22; 		// m[r28 - 12]{343}
    int local220; 		// local146{298}
    int local221; 		// local147{299}
    int local222; 		// local148{300}
    int local223; 		// local120{230}
    int local224; 		// local12{231}
    int local225; 		// local117{234}
    int local226; 		// local31{237}
    int local227; 		// local100{307}
    int local228; 		// local81{308}
    int local229; 		// local82{309}
    int local23; 		// m[r28 - 16]{344}
    int local230; 		// local83{310}
    int local231; 		// local84{311}
    int local232; 		// local85{312}
    int local233; 		// local86{313}
    int local234; 		// local87{322}
    int local235; 		// local88{323}
    int local236; 		// local89{324}
    int local237; 		// local90{325}
    int local238; 		// local109{326}
    int local239; 		// local110{327}
    int local24; 		// m[r29 - 4]{349}
    int local240; 		// r25{242}
    int local241; 		// local49{245}
    int local242; 		// local11{246}
    int local243; 		// r30{247}
    int local244; 		// local47{249}
    void *local245; 		// local30{252}
    int local246; 		// local38{334}
    int local247; 		// local14{335}
    int local248; 		// local15{336}
    int local249; 		// local16{337}
    int local25; 		// m[r29 - 28]{350}
    int local250; 		// local17{338}
    int local251; 		// local18{339}
    int local252; 		// local19{340}
    int local253; 		// local20{341}
    int local254; 		// local21{342}
    int local255; 		// local22{343}
    int local256; 		// local23{344}
    int local257; 		// local39{345}
    int local258; 		// local40{346}
    int local259; 		// local41{347}
    int local26; 		// m[r29 - 4]{351}
    int local260; 		// local42{348}
    int local261; 		// local24{349}
    int local262; 		// local25{350}
    int local263; 		// local26{351}
    int local264; 		// local27{352}
    int local265; 		// local43{353}
    int local266; 		// local44{354}
    int local267; 		// local28{355}
    int local268; 		// local29{358}
    int local269; 		// local51{359}
    int local27; 		// m[r29 - 28]{352}
    int local270; 		// local52{360}
    int local271; 		// r28{263}
    int local272; 		// r29{264}
    int local273; 		// global7{267}
    int local274; 		// %pc{270}
    int local275; 		// local191{279}
    int local276; 		// r24
    int local277; 		// r28
    int local28; 		// m[r29 - 4]{355}
    int local29; 		// m[r29 - 4]{358}
    int local3; 		// r28{8}
    void *local30; 		// %pc{252}
    int local31; 		// %pc{237}
    int local32; 		// m[r28 - 16]{171}
    int local33; 		// r28{152}
    int local34; 		// m[r28 - 12]{168}
    int local35; 		// m[r28 - 8]{166}
    int local36; 		// m[r28 - 4]{164}
    int local37; 		// m[r29 - 4]{163}
    int local38; 		// m[r28 - 4]{334}
    int local39; 		// m[r28 - 4]{345}
    int local4; 		// r28{116}
    int local40; 		// m[r28 - 8]{346}
    int local41; 		// m[r28 - 12]{347}
    int local42; 		// m[r28 - 16]{348}
    int local43; 		// m[r29 - 4]{353}
    int local44; 		// m[r29 - 28]{354}
    int local45; 		// m[r29 - 4]{155}
    int local46; 		// m[r29 - 28]{153}
    int local47; 		// global7{249}
    int local48; 		// %pc{151}
    int local49; 		// r28{245}
    int local5; 		// r29{65}
    int local50; 		// m[r28 - 8]{145}
    int local51; 		// m[r29 - 4]{359}
    int local52; 		// m[r29 - 28]{360}
    int local53; 		// r28{133}
    int local54;
    int local55;
    int local56;
    int local57;
    int local58;
    int local59;
    int local6; 		// r29{48}
    int local60;
    int local61;
    int local62;
    int local63;
    int local64;
    int local65; 		// m[r28 - 4]{133}
    int local66; 		// m[r28 - 8]{133}
    int local67; 		// m[r28 - 12]{133}
    int local68; 		// m[r28 - 16]{133}
    int local69;
    int local7; 		// r29{133}
    int local70;
    int local71;
    int local72;
    int local73;
    int local74;
    int local75; 		// m[r29 - 4]{135}
    int local76;
    int local77; 		// m[r29 - 4]{133}
    int local78; 		// m[r29 - 28]{133}
    int local79; 		// global7{133}
    int local8; 		// r29{173}
    void *local80; 		// %pc{133}
    int local81; 		// m[r28 - 8]{308}
    int local82; 		// m[r28 - 12]{309}
    int local83; 		// m[r28 - 4]{310}
    int local84; 		// m[r28 - 8]{311}
    int local85; 		// m[r28 - 12]{312}
    int local86; 		// m[r28 - 16]{313}
    int local87; 		// m[r29 - 4]{322}
    int local88; 		// m[r29 - 28]{323}
    int local89; 		// m[r29 - 4]{324}
    int local9; 		// r29{116}
    int local90; 		// m[r29 - 28]{325}
    int local91;
    int local92;
    int local93;
    int local94; 		// m[0x10024858]{235}
    int local95; 		// m[r28 - 16]{131}
    int local96; 		// m[r28 - 12]{128}
    int local97; 		// m[r28 - 8]{126}
    int local98; 		// m[r28 - 4]{124}
    int local99; 		// m[r29 - 4]{123}

    local237 = *(int*)(local6 - 28);
    local236 = *(int*)(local6 - 4);
    local235 = *(int*)(local5 - 28);
    local234 = *(int*)(local5 - 4);
    local233 = *(int*)(local3 - 16);
    local232 = *(int*)(local3 - 12);
    local231 = *(int*)(local3 - 8);
    local230 = *(int*)(local3 - 4);
    local220 = *(int*)(local6 - 28);
    local219 = *(int*)(local6 - 4);
    local218 = *(int*)(local3 - 16);
    local217 = *(int*)(local3 - 12);
    local216 = *(int*)(local3 - 8);
    local215 = *(int*)(local3 - 4);
    local204 = param1;
    if (param6 == 1) {
        param9 = proc1(param9); /* Warning: also results in param5 */
        local275 = local206;
    }
    local191 = local275;
    local197 = 44;
    local198 = 0x10021238;
    local199 = local191;
    local203 = local191 + 0x6f02418d;
    local3 = proc2(0x10021238, param1, param2, param9, param5); /* Warning: also results in local190 */
    local208 = local3;
    local209 = local190;
    local211 = local203;
    local212 = local197;
    local213 = local198;
    local214 = local199;
    local223 = local3;
    local224 = local190;
    local226 = local203;
    local227 = local197;
    local228 = local198;
    local229 = local199;
    local271 = local3;
    local272 = local190;
    local274 = local203;
    ecx = *(int*)(local190 + 12);
    edx = 1;
    local201 = 1;
    param9 = 0;
    local200 = 0;
    local202 = *(int*)(local190 + 12);
    local210 = local202;
    local221 = local200;
    local222 = local201;
    local225 = local202;
    local238 = local200;
    local239 = local201;
    local273 = local202;
    if (*(int*)(local190 + 12) != 0) {
L31:
        if (*(int*)(local190 + 12) == 1) {
L29:
            if (global17 != 0) {
                local196 = 1;
                local195 = *(int*)(local190 + 16);
                local194 = *(int*)(local190 + 12);
                local193 = *(int*)(local190 + 8);
                local192 = local191 + 0x6f02418d;
                (*global17)(local191 + 0x6f02418d, *(int*)(local190 + 8), local191, *(int*)(local190 + 12), 0x10021238, *(int*)(local190 + 16), param1, global17, *(int*)(local190 + 12), 1, local190, 0, param5, 1, 1, SUBFLAGS32(global17, 0, global17), (unsigned)global17 < 0);
                local208 = local176;
                local209 = local6;
                local210 = local188;
                local211 = local189;
                local212 = local177;
                local213 = local178;
                local214 = local179;
                local215 = local180;
                local216 = local181;
                local217 = local182;
                local218 = local183;
                local221 = local186;
                local222 = local187;
                local185 = local276;
                local220 = local185;
                local184 = param9;
                local219 = local184;
            }
            local165 = local208;
            local166 = local209;
            local149 = local210;
            local167 = local211;
            local136 = local212;
            local137 = local213;
            local138 = local214;
            local139 = local215;
            local140 = local216;
            local141 = local217;
            local142 = local218;
            local151 = *(int*)(local4 - 4);
            local152 = *(int*)(local4 - 8);
            local153 = *(int*)(local4 - 12);
            local154 = *(int*)(local4 - 16);
            local155 = *(int*)(local33 - 4);
            local156 = *(int*)(local33 - 8);
            local157 = *(int*)(local33 - 12);
            local158 = *(int*)(local33 - 16);
            local169 = *(int*)(local5 - 4);
            local170 = *(int*)(local5 - 28);
            local145 = local219;
            local146 = local220;
            local147 = local221;
            local148 = local222;
            local159 = *(int*)(local7 - 4);
            local160 = *(int*)(local8 - 4);
            local161 = *(int*)(local8 - 28);
            local162 = *(int*)(local9 - 4);
            local163 = *(int*)(local10 - 4);
            local164 = *(int*)(local10 - 28);
            local225 = local149;
            local227 = local136;
            local228 = local137;
            local229 = local138;
            local230 = local139;
            local231 = local140;
            local232 = local141;
            local233 = local142;
            local236 = local145;
            local237 = local146;
            local238 = local147;
            local239 = local148;
            local271 = local165;
            local272 = local166;
            local273 = local149;
            local273 = local149;
            local274 = local167;
            if (*(int*)(local166 - 28) != param9) {
                *(int*)(local166 - 4) = 2;
                *(int*)(local165 - 4) = *(int*)(local166 + 16);
                local168 = *(int*)(local166 + 12);
                *(int*)(local165 - 12) = *(int*)(local166 + 8);
                *(int*)(local165 - 16) = local167;
                local150 = local167 + 0x6f023af1;
                local276 = proc6(*(int*)(local165 - 8), param4, ecx, edx, param2, local166, param9, param5, param3, global14[0], global15[0], global16[0]); /* Warning: also results in param9, param4, edx, param2, local135, local5, param5 */
                local223 = local135;
                local224 = local5;
                local226 = local150;
                local271 = local135;
                local272 = local5;
                local274 = local150;
                local144 = local276;
                local235 = local144;
                local143 = param9;
                local234 = local143;
                if (local276 != param9) {
                    ecx = *(int*)(local5 + 12);
L20:
                    local2 = ecx;
                    local120 = local223;
                    local12 = local224;
                    local13 = param9;
                    local117 = local225;
                    local31 = local226;
                    local100 = local227;
                    local81 = local228;
                    local82 = local229;
                    local83 = local230;
                    local84 = local231;
                    local85 = local232;
                    local86 = local233;
                    local101 = *(int*)(local4 - 4);
                    local102 = *(int*)(local4 - 8);
                    local103 = *(int*)(local4 - 12);
                    local104 = *(int*)(local4 - 16);
                    local105 = *(int*)(local33 - 4);
                    local106 = *(int*)(local33 - 8);
                    local107 = *(int*)(local33 - 12);
                    local108 = *(int*)(local33 - 16);
                    local87 = local234;
                    local88 = local235;
                    local89 = local236;
                    local90 = local237;
                    local109 = local238;
                    local110 = local239;
                    local111 = *(int*)(local7 - 4);
                    local112 = *(int*)(local8 - 4);
                    local113 = *(int*)(local8 - 28);
                    local126 = *(int*)(local9 - 4);
                    local115 = *(int*)(local10 - 4);
                    local116 = *(int*)(local10 - 28);
                    *(int*)(local12 - 4) = 3;
                    *(int*)(local120 - 4) = *(int*)(local12 + 16);
                    local128 = local2;
                    *(int*)(local120 - 12) = *(int*)(local12 + 8);
                    *(int*)(local120 - 16) = local31;
                    local127 = local31 + 0x6f024256;
                    local276 = proc5(); /* Warning: also results in local125 */
                    local240 = local2;
                    local240 = local2;
                    local241 = local125;
                    local241 = local125;
                    local242 = local12;
                    local242 = local12;
                    local243 = local13;
                    local243 = local13;
                    local244 = local117;
                    local244 = local117;
                    local244 = local117;
                    local245 = local127;
                    local245 = local127;
                    local246 = local100;
                    local246 = local100;
                    local246 = local100;
                    local247 = local81;
                    local247 = local81;
                    local247 = local81;
                    local248 = local82;
                    local248 = local82;
                    local248 = local82;
                    local249 = local83;
                    local249 = local83;
                    local249 = local83;
                    local250 = local84;
                    local250 = local84;
                    local250 = local84;
                    local251 = local85;
                    local251 = local85;
                    local251 = local85;
                    local252 = local86;
                    local252 = local86;
                    local252 = local86;
                    local253 = local101;
                    local253 = local101;
                    local253 = local101;
                    local254 = local102;
                    local254 = local102;
                    local254 = local102;
                    local255 = local103;
                    local255 = local103;
                    local255 = local103;
                    local256 = local104;
                    local256 = local104;
                    local256 = local104;
                    local257 = local105;
                    local257 = local105;
                    local257 = local105;
                    local258 = local106;
                    local258 = local106;
                    local258 = local106;
                    local259 = local107;
                    local259 = local107;
                    local259 = local107;
                    local260 = local108;
                    local260 = local108;
                    local260 = local108;
                    local261 = local87;
                    local261 = local87;
                    local261 = local87;
                    local262 = local88;
                    local262 = local88;
                    local262 = local88;
                    local263 = local89;
                    local263 = local89;
                    local263 = local89;
                    local264 = local90;
                    local264 = local90;
                    local264 = local90;
                    local265 = local109;
                    local265 = local109;
                    local265 = local109;
                    local266 = local110;
                    local266 = local110;
                    local266 = local110;
                    local267 = local111;
                    local267 = local111;
                    local267 = local111;
                    local268 = local126;
                    local268 = local126;
                    local269 = local115;
                    local269 = local115;
                    local269 = local115;
                    local270 = local116;
                    local270 = local116;
                    local270 = local116;
                    *(int*)(local12 - 28) = local276;
                    *(int*)(local12 - 4) = local13;
                    if (*(int*)(local12 + 12) == 1) {
                        if (local276 == local13) {
                            *(int*)(local12 - 4) = 4;
                            *(int*)(local120 - 4) = local13;
                            local124 = local13;
                            *(int*)(local120 - 12) = *(int*)(local12 + 8);
                            *(int*)(local120 - 16) = local31 + 0x6f024256;
                            proc5();
                            *(int*)(local12 - 4) = local13;
                            *(int*)(local12 - 4) = 5;
                            *(int*)(local120 - 4) = local13;
                            local121 = local13;
                            *(int*)(local120 - 12) = *(int*)(local12 + 8);
                            *(int*)(local120 - 16) = local31 - 0x21fb7b0c;
                            local118 = local31 + 0x4d06c09f;
                            param9 = proc6(*(int*)(local120 - 8), param4, local2, edx, param2, local12, local13, param5, param3, global14[0], global15[0], global16[0]); /* Warning: also results in param4, ecx, edx, param2, local4, local9, param5 */
                            local240 = ecx;
                            local241 = local4;
                            local242 = local9;
                            local243 = param9;
                            local245 = local118;
                            local114 = param9;
                            local268 = local114;
                            if (local94 != param9) {
                                local99 = 6;
                                local98 = param9;
                                local97 = param9;
                                local96 = *(int*)(local9 + 8);
                                local95 = local31 + 0x4d06c09f;
                                (*local94)(*(int*)(local33 - 16), local31 + 0x4d06c09f, local86, local31 - 0x21fb7b0c, *(int*)(local33 - 12), *(int*)(local9 + 8), local85, local82, *(int*)(local12 + 8), *(int*)(local33 - 8), param9, local84, local81, local13, local13, *(int*)(local33 - 4), param9, local83, param1, param4, local94, ecx, edx, param2, local9, param9, param5, local87, local88, local89, local90, 0, 1, *(int*)(local7 - 4), *(int*)(local8 - 4), *(int*)(local8 - 28), 6, *(int*)(local10 - 4), *(int*)(local10 - 28), 5, local276, param3, SUBFLAGS32(local94, param9, local94 - param9), (unsigned)local94 < (unsigned)param9);
                                local240 = ecx;
                                local241 = local53;
                                local242 = local7;
                                local243 = param9;
                                local244 = local79;
                                local245 = local80;
                                local246 = local54;
                                local247 = local55;
                                local248 = local56;
                                local249 = local57;
                                local250 = local58;
                                local251 = local59;
                                local252 = local60;
                                local253 = local61;
                                local254 = local62;
                                local255 = local63;
                                local256 = local64;
                                local257 = local65;
                                local258 = local66;
                                local259 = local67;
                                local260 = local68;
                                local261 = local69;
                                local262 = local70;
                                local263 = local71;
                                local264 = local72;
                                local265 = local73;
                                local266 = local74;
                                local268 = local76;
                                local269 = local77;
                                local270 = local78;
                                local75 = param9;
                                local267 = local75;
                            }
                        }
                    }
                    ecx = local240;
                    local49 = local241;
                    local11 = local242;
                    param9 = local243;
                    local47 = local244;
                    local30 = local245;
                    local38 = local246;
                    local14 = local247;
                    local15 = local248;
                    local16 = local249;
                    local17 = local250;
                    local18 = local251;
                    local19 = local252;
                    local20 = local253;
                    local21 = local254;
                    local22 = local255;
                    local23 = local256;
                    local39 = local257;
                    local40 = local258;
                    local41 = local259;
                    local42 = local260;
                    local24 = local261;
                    local25 = local262;
                    local26 = local263;
                    local27 = local264;
                    local43 = local265;
                    local44 = local266;
                    local28 = local267;
                    local29 = local268;
                    local51 = local269;
                    local52 = local270;
                    local271 = local49;
                    local272 = local11;
                    local273 = local47;
                    local273 = local47;
                    local273 = local47;
                    local274 = local30;
                    if (*(int*)(local11 + 12) == param9) {
L9:
                        *(int*)(local11 - 4) = 7;
                        *(int*)(local49 - 4) = *(int*)(local11 + 16);
                        local50 = *(int*)(local11 + 12);
                        *(int*)(local49 - 12) = *(int*)(local11 + 8);
                        *(int*)(local49 - 16) = local30;
                        local48 = local30 + 0x6f023c1e;
                        local1 = proc6(*(int*)(local49 - 8), param4, ecx, edx, param2, local11, param9, param5, param3, global14[0], global15[0], global16[0]); /* Warning: also results in param9, param4, ecx, edx, param2, local33, local10, param5 */
                        local271 = local33;
                        local271 = local33;
                        local272 = local10;
                        local272 = local10;
                        local274 = local48;
                        local274 = local48;
                        local46 = local1;
                        local45 = param9;
                        if (local1 != param9) {
                            if (*(int*)0x10024858 != param9) {
                                local37 = 8;
                                local36 = *(int*)(local10 + 16);
                                local35 = *(int*)(local10 + 12);
                                local34 = *(int*)(local10 + 8);
                                local32 = local30 + 0x6f023c1e;
                                (**(int*)0x10024858)(local30 + 0x6f023c1e, local23, local19, local30, local31, *(int*)(local10 + 8), local22, local18, local15, *(int*)(local11 + 8), *(int*)(local12 + 8), *(int*)(local10 + 12), local21, local17, local14, *(int*)(local11 + 12), local2, *(int*)(local10 + 16), local20, local16, param1, *(int*)(local11 + 16), *(int*)(local12 + 16), param4, *(int*)0x10024858, ecx, edx, param2, local10, param9, param5, local24, local25, local26, local27, 0, 1, local28, *(int*)(local8 - 4), *(int*)(local8 - 28), local29, 8, local1, 7, local13, local276, param3, SUBFLAGS32(*(int*)0x10024858, param9, *(int*)0x10024858 - param9), (unsigned)*(int*)0x10024858 < (unsigned)param9);
                                local271 = local277;
                                local272 = local8;
                                local273 = global7;
                                *(int*)(local8 - 28) = local276;
                                *(int*)(local8 - 4) = param9;
                            }
                        }
                    } else {
                        if (*(int*)(local11 + 12) == 3) {
                            goto L9;
                        }
                    }
                }
            }
        } else {
            if (*(int*)(local190 + 12) != 2) {
                goto L20;
            } else {
                goto L29;
            }
        }
    } else {
        if (global10 != 0) {
            goto L31;
        } else {
            *(int*)(local190 - 28) = 0;
        }
    }
    local277 = local271;
    param1 = local272;
    global7 = local273;
    *(int*)(param1 - 4) = -2;
    proc3();
    proc4(*(int*)(local277 + 4), param6, *(int*)(local277 + 12), param1, *(int*)(param1 - 16), *(int*)param1);
    return;
}

// address: 0x1001f376
proc5() {
    return 1;
}

// address: 0x1001ec54
proc6(int param3, int param6, int param13, int param7, int param4, int param2, int param5, int param1, int param11, int ??, int ??, int ??) {
    int local0; 		// r28{219}
    int local1; 		// r28{131}
    int local10; 		// r29{357}
    int local100; 		// m[r28 - 4]{467}
    int local101; 		// m[r28 - 4]{57}
    int local102; 		// m[r28 - 8]{469}
    void *local103; 		// m[r28 - 12]{470}
    int local104;
    int local105; 		// m[r28]{471}
    int local106; 		// m[r28 - 12]{144}
    int local107; 		// m[r28 - 8]{141}
    int local108; 		// m[r28 - 4]{139}
    int local109; 		// m[r28]{137}
    int local11; 		// m[r28 + 8]{529}
    int local110; 		// r28{135}
    int local111;
    int local112;
    int local113;
    int local114; 		// m[r28 - 8]{57}
    int local115; 		// m[r28 - 4]{468}
    int local116; 		// global10{57}
    int local117; 		// global12{57}
    int local118; 		// global14{284}
    int local119; 		// r28{292}
    int local12; 		// m[r28 + 4]{530}
    int local120; 		// r28{122}
    int local121; 		// m[r28 - 8]{120}
    int local122; 		// r28{106}
    int local123; 		// m[r28 + 4]{97}
    int local124; 		// m[r28 - 4]{102}
    int local125; 		// m[r28 - 4]{78}
    int local126; 		// m[r28 - 8]{80}
    void *local127; 		// m[r28 - 12]{84}
    int local128; 		// m[r28]{99}
    int local129; 		// global14{107}
    int local13; 		// m[r29 + 12]{174}
    int local130; 		// r28{104}
    int local131; 		// r28{92}
    int local132; 		// m[r28 + 4]{57}
    int local133; 		// global14{82}
    int local134; 		// r28{76}
    int local135;
    int local136; 		// m[r28 - 4]{71}
    void *local137; 		// m[r28 - 8]{74}
    int local138; 		// m[r28 - 12]{57}
    int local139; 		// m[r28]{57}
    int local14;
    int local140; 		// global14{57}
    int local141; 		// m[r28 - 4]{66}
    int local142; 		// m[r29 + 12]{62}
    int local143; 		// m[r29 + 12]{57}
    int local144; 		// r29{261}
    int local145; 		// m[r28 + 8]{446}
    int local146; 		// m[r28 + 4]{447}
    int local147; 		// m[r29 + 12]{448}
    int local148; 		// m[r28 - 8]{450}
    int local149; 		// m[r28 - 12]{451}
    int local15; 		// m[r28 - 8]{533}
    int local150; 		// m[r28 - 16]{452}
    int local151; 		// m[r28 - 20]{453}
    int local152; 		// m[r28 - 4]{454}
    int local153; 		// m[r28 - 8]{455}
    int local154; 		// m[r28 - 12]{456}
    int local155; 		// m[r28 - 4]{457}
    int local156; 		// m[r28 - 4]{458}
    void *local157; 		// m[r28 - 8]{459}
    int local158; 		// m[r28 - 4]{460}
    void *local159; 		// m[r28 - 8]{461}
    int local16; 		// m[r28 - 12]{534}
    void *local160; 		// m[r28 - 12]{462}
    int local161; 		// m[r28]{463}
    int local162; 		// m[r28]{464}
    int local163; 		// %pc{271}
    int local164; 		// m[r28 - 12]{55}
    int local165; 		// m[r28 - 8]{52}
    int local166; 		// m[r28 - 4]{50}
    int local167; 		// r28{49}
    int local168; 		// m[r28 - 4]{48}
    void *local169; 		// m[r28 - 8]{45}
    int local17; 		// m[r28 - 16]{535}
    int local170; 		// %pc{46}
    int local171; 		// r28{47}
    int local172; 		// m[r28 - 4]{42}
    int local173; 		// r28{33}
    int local174; 		// m[r28 + 8]{31}
    int local175; 		// m[r28 + 4]{146}
    int local176; 		// m[r29 + 12]{146}
    int local177; 		// m[r28 - 20]{32}
    int local178;
    int local179;
    int local18; 		// m[r28 - 20]{536}
    int local180;
    int local181;
    int local182;
    int local183;
    int local184; 		// m[r28 - 4]{146}
    int local185; 		// m[r28 - 8]{146}
    int local186; 		// m[r28 - 12]{146}
    int local187;
    int local188; 		// m[r28]{146}
    void *local189; 		// %pc{57}
    int local19; 		// m[r28 - 4]{537}
    int local190; 		// m[r28 + 8]{57}
    int local191; 		// global10{14}
    int local192; 		// global10{146}
    int local193; 		// global10{174}
    int local194; 		// r28{3}
    int local195; 		// r31{1}
    int local196;
    int local197;
    int local198; 		// m[r28 - 16]{174}
    int local199; 		// global12{174}
    int local2; 		// r28{86}
    int local20; 		// m[r28 - 8]{538}
    int local200; 		// r28{337}
    int local201; 		// r29{338}
    int local202; 		// m[r28 + 8]{510}
    int local203; 		// m[r28 + 4]{511}
    int local204; 		// m[r29 + 12]{512}
    int local205; 		// m[r28 - 4]{513}
    int local206; 		// m[r28 - 8]{514}
    int local207; 		// m[r28 - 12]{515}
    int local208; 		// m[r28 - 16]{516}
    int local209; 		// m[r28 - 20]{517}
    int local21; 		// m[r28 - 12]{539}
    int local210; 		// m[r28 - 4]{518}
    int local211; 		// m[r28 - 8]{519}
    int local212; 		// m[r28 - 12]{520}
    int local213; 		// m[r28 - 4]{521}
    int local214; 		// m[r28 - 4]{522}
    int local215; 		// m[r28 - 8]{523}
    int local216; 		// m[r28 - 4]{524}
    int local217; 		// m[r28 - 8]{525}
    int local218; 		// m[r28 - 12]{526}
    int local219; 		// m[r28]{527}
    int local22; 		// m[r28 - 4]{540}
    int local220; 		// m[r28]{528}
    int local221; 		// global10{341}
    int local222; 		// global12{342}
    int local223; 		// global14{343}
    void *local224; 		// %pc{348}
    int local225; 		// r28{207}
    int local226; 		// r29{207}
    int local227; 		// m[r28 - 12]{172}
    int local228; 		// m[r28 - 8]{169}
    int local229; 		// m[r28 - 4]{167}
    int local23; 		// m[r28 - 4]{541}
    int local230; 		// m[r28 + 8]{207}
    int local231; 		// m[r28 + 4]{207}
    int local232; 		// m[r29 + 12]{207}
    int local233;
    int local234;
    int local235;
    int local236;
    int local237;
    int local238;
    int local239; 		// m[r28 - 4]{207}
    int local24; 		// m[r28 - 8]{542}
    int local240; 		// m[r28 - 8]{207}
    int local241; 		// m[r28 - 12]{207}
    int local242;
    int local243; 		// m[r28]{207}
    int local244; 		// global14{207}
    void *local245; 		// %pc{207}
    int local246; 		// m[r28 - 20]{207}
    int local247; 		// global10{207}
    int local248; 		// local85{251}
    int local249; 		// local7{260}
    int local25; 		// m[r28 - 4]{174}
    int local250; 		// local144{261}
    int local251; 		// global10{264}
    int local252; 		// global12{265}
    int local253; 		// local163{271}
    int local254; 		// local145{446}
    int local255; 		// local146{447}
    int local256; 		// local147{448}
    int local257; 		// local148{450}
    int local258; 		// local149{451}
    int local259; 		// local150{452}
    int local26; 		// m[r28 - 8]{544}
    int local260; 		// local151{453}
    int local261; 		// local152{454}
    int local262; 		// local153{455}
    int local263; 		// local154{456}
    int local264; 		// local155{457}
    int local265; 		// local156{458}
    int local266; 		// local157{459}
    int local267; 		// local158{460}
    void *local268; 		// local159{461}
    int local269; 		// local160{462}
    int local27; 		// m[r28 - 12]{545}
    int local270; 		// local161{463}
    int local271; 		// local162{464}
    int local272; 		// local94{465}
    int local273; 		// local6{280}
    int local274; 		// r29{281}
    int local275; 		// local118{284}
    int local276; 		// local93{466}
    int local277; 		// local100{467}
    int local278; 		// local115{468}
    int local279; 		// local102{469}
    int local28; 		// m[r28]{546}
    void *local280; 		// local103{470}
    int local281; 		// local105{471}
    int local282; 		// r28{299}
    int local283; 		// global10{303}
    int local284; 		// global12{304}
    int local285; 		// global14{305}
    int local286; 		// local5{318}
    int local287; 		// local40{319}
    int local288; 		// global10{322}
    int local289; 		// global12{323}
    int local29; 		// m[r28]{547}
    int local290; 		// global14{324}
    int local291; 		// local59{329}
    int local292; 		// local41{491}
    int local293; 		// local42{492}
    int local294; 		// local43{493}
    int local295; 		// local44{495}
    int local296; 		// local45{496}
    int local297; 		// local46{497}
    int local298; 		// local47{498}
    int local299; 		// local48{499}
    int local3; 		// r28{174}
    void *local30; 		// %pc{367}
    int local300; 		// local49{500}
    int local301; 		// local50{501}
    int local302; 		// local51{502}
    int local303; 		// local52{503}
    void *local304; 		// local53{504}
    int local305; 		// local54{505}
    int local306; 		// local55{506}
    int local307; 		// local56{507}
    int local308; 		// local57{508}
    int local309; 		// local58{509}
    int local31; 		// m[r29 + 12]{531}
    int local310; 		// local200{337}
    int local311; 		// local201{338}
    int local312; 		// local221{341}
    int local313; 		// local222{342}
    int local314; 		// local223{343}
    void *local315; 		// local224{348}
    int local316; 		// local202{510}
    int local317; 		// local203{511}
    int local318; 		// local204{512}
    int local319; 		// local205{513}
    int local32; 		// m[r28 - 4]{532}
    int local320; 		// local206{514}
    int local321; 		// local207{515}
    int local322; 		// local208{516}
    int local323; 		// local209{517}
    int local324; 		// local210{518}
    int local325; 		// local211{519}
    int local326; 		// local212{520}
    int local327; 		// local213{521}
    int local328; 		// local214{522}
    int local329; 		// local215{523}
    int local33; 		// m[r28 - 4]{543}
    int local330; 		// local216{524}
    int local331; 		// local217{525}
    int local332; 		// local218{526}
    int local333; 		// local219{527}
    int local334; 		// local220{528}
    int local335; 		// local9{356}
    int local336; 		// local10{357}
    int local337; 		// local34{360}
    int local338; 		// local35{361}
    int local339; 		// local36{362}
    int local34; 		// global10{360}
    void *local340; 		// local30{367}
    int local341; 		// local11{529}
    int local342; 		// local12{530}
    int local343; 		// local31{531}
    int local344; 		// local32{532}
    int local345; 		// local15{533}
    int local346; 		// local16{534}
    int local347; 		// local17{535}
    int local348; 		// local18{536}
    int local349; 		// local19{537}
    int local35; 		// global12{361}
    int local350; 		// local20{538}
    int local351; 		// local21{539}
    int local352; 		// local22{540}
    int local353; 		// local23{541}
    int local354; 		// local24{542}
    int local355; 		// local33{543}
    int local356; 		// local26{544}
    int local357; 		// local27{545}
    int local358; 		// local28{546}
    int local359; 		// local29{547}
    int local36; 		// global14{362}
    int local360; 		// local8{375}
    int local361; 		// global10{379}
    int local362; 		// global12{380}
    int local363; 		// global14{381}
    int local364; 		// global15{382}
    int local365; 		// global16{383}
    void *local366; 		// %pc{386}
    int local367; 		// r28{394}
    int local368; 		// global10{398}
    int local369; 		// global12{399}
    int local37;
    int local370; 		// global14{400}
    int local371; 		// global15{401}
    int local372; 		// global16{402}
    int local373; 		// r28{413}
    int local374; 		// global10{417}
    int local375; 		// global12{418}
    int local376; 		// global14{419}
    int local377; 		// r28{432}
    int local378; 		// r31{435}
    int local379; 		// r24
    int local38; 		// r28{187}
    int local380; 		// r28
    int local39; 		// r29{57}
    int local4; 		// r28{57}
    int local40; 		// r29{319}
    int local41; 		// m[r28 + 8]{491}
    int local42; 		// m[r28 + 4]{492}
    int local43; 		// m[r29 + 12]{493}
    int local44; 		// m[r28 - 8]{495}
    int local45; 		// m[r28 - 12]{496}
    int local46; 		// m[r28 - 16]{497}
    int local47; 		// m[r28 - 20]{498}
    int local48; 		// m[r28 - 4]{499}
    int local49; 		// m[r28 - 8]{500}
    int local5; 		// r28{318}
    int local50; 		// m[r28 - 12]{501}
    int local51; 		// m[r28 - 4]{502}
    int local52; 		// m[r28 - 4]{503}
    void *local53; 		// m[r28 - 8]{504}
    int local54; 		// m[r28 - 4]{505}
    void *local55; 		// m[r28 - 8]{506}
    void *local56; 		// m[r28 - 12]{507}
    int local57; 		// m[r28]{508}
    int local58; 		// m[r28]{509}
    int local59; 		// %pc{329}
    int local6; 		// r28{280}
    int local60; 		// r28{166}
    int local61; 		// r29{174}
    int local62; 		// m[r28 - 4]{165}
    void *local63; 		// m[r28 - 8]{162}
    int local64; 		// %pc{163}
    int local65; 		// r28{164}
    int local66; 		// m[r28 - 4]{159}
    int local67; 		// r28{156}
    int local68; 		// r29{4}
    int local69; 		// m[r28 + 8]{174}
    int local7; 		// r28{260}
    int local70; 		// m[r28 + 4]{174}
    int local71; 		// m[r28 - 4]{2}
    int local72; 		// m[r28 - 8]{20}
    int local73; 		// m[r28 - 12]{22}
    int local74; 		// m[r28 - 16]{24}
    int local75; 		// m[r28 - 20]{155}
    int local76;
    int local77;
    int local78;
    int local79;
    int local8; 		// r28{375}
    int local80;
    int local81; 		// m[r28 - 8]{174}
    int local82; 		// m[r28 - 12]{174}
    int local83;
    int local84; 		// m[r28]{174}
    int local85; 		// global10{251}
    int local86; 		// global12{26}
    int local87; 		// global14{174}
    void *local88; 		// %pc{174}
    int local89; 		// r28{25}
    int local9; 		// r28{356}
    int local90; 		// m[r28 - 20]{174}
    int local91; 		// global15{174}
    int local92; 		// global16{174}
    int local93; 		// m[r28 + 4]{466}
    int local94; 		// m[r29 + 12]{465}
    int local95;
    int local96;
    int local97;
    int local98; 		// m[r28 - 16]{57}
    int local99; 		// m[r28 - 20]{57}

    local372 = global16;
    local371 = global15;
    local370 = global14;
    local309 = *(int*)local2;
    local308 = *(int*)local1;
    local307 = *(int*)(local4 - 12);
    local306 = *(int*)(local4 - 8);
    local305 = *(int*)(local4 - 4);
    local304 = *(int*)(local3 - 8);
    local303 = *(int*)(local3 - 4);
    local302 = *(int*)(local2 - 4);
    local301 = *(int*)(local1 - 12);
    local300 = *(int*)(local1 - 8);
    local299 = *(int*)(local1 - 4);
    local294 = *(int*)(local39 + 12);
    local293 = *(int*)(local2 + 4);
    local292 = *(int*)(local380 + 8);
    local290 = global14;
    local271 = *(int*)local2;
    local270 = *(int*)local1;
    local269 = *(int*)(local4 - 12);
    local268 = *(int*)(local4 - 8);
    local267 = *(int*)(local4 - 4);
    local266 = *(int*)(local3 - 8);
    local265 = *(int*)(local3 - 4);
    local264 = *(int*)(local2 - 4);
    local263 = *(int*)(local1 - 12);
    local262 = *(int*)(local1 - 8);
    local261 = *(int*)(local1 - 4);
    local256 = *(int*)(local39 + 12);
    local255 = *(int*)(local2 + 4);
    local248 = global10;
    local195 = param1;
    local71 = param2;
    local194 = local380 - 4;
    local68 = local380 - 4;
    local379 = 0;
    local250 = local68;
    local287 = local68;
    local377 = local194;
    local378 = local195;
    if (param3 != 0) {
L42:
        local85 = local248;
        flags = SUBFLAGS32(param3, 1, param3 - 1);
        param13 = *(char[0]*)_adjust_fdiv;
        local72 = param4;
        local73 = param5;
        local74 = param1;
        local89 = local380 - 16;
        local86 = *(char[0]*)_adjust_fdiv;
        local251 = local85;
        local252 = local86;
        local257 = local72;
        local258 = local73;
        local259 = local74;
        local288 = local85;
        local289 = local86;
        local295 = local72;
        local296 = local73;
        local297 = local74;
        local367 = local89;
        local368 = local85;
        local369 = local86;
        if (param3 != 1) {
            flags = SUBFLAGS32(param3, 0, param3);
            if (param3 == 0) {
                param1 = InterlockedCompareExchange;
                local75 = 0;
                local67 = local380 - 20;
                param5 = 0x1002484c;
                local286 = local67;
                local298 = local75;
                for(;;) {
                    local5 = local286;
                    local40 = local287;
                    global10 = local288;
                    global12 = local289;
                    global14 = local290;
                    local59 = local291;
                    local41 = local292;
                    local42 = local293;
                    local43 = local294;
                    local44 = local295;
                    local45 = local296;
                    local46 = local297;
                    local47 = local298;
                    local48 = local299;
                    local49 = local300;
                    local50 = local301;
                    local51 = local302;
                    local52 = local303;
                    local53 = local304;
                    local54 = local305;
                    local55 = local306;
                    local56 = local307;
                    local57 = local308;
                    local58 = local309;
                    local229 = 1;
                    local228 = param5;
                    local227 = local59;
                    (*param1)(local47, local46, local59, local45, local50, local56, param5, local44, local49, local53, local55, 1, param2, local48, local51, local52, local54, local42, local41, param6, local379, param13, param7, param4, local40, param5, param1, local43, local57, local58, param11, global15[0], global16[0], flags, NF);
                    local287 = local61;
                    local288 = local193;
                    local289 = local199;
                    local290 = local87;
                    local292 = local69;
                    local293 = local70;
                    local294 = local13;
                    local295 = local196;
                    local296 = local197;
                    local297 = local198;
                    local298 = local90;
                    local299 = local76;
                    local300 = local77;
                    local301 = local78;
                    local302 = local79;
                    local305 = local25;
                    local306 = local81;
                    local307 = local82;
                    local308 = local83;
                    local309 = local84;
                    local335 = local3;
                    local336 = local61;
                    local337 = local193;
                    local338 = local199;
                    local339 = local87;
                    local340 = local88;
                    local341 = local69;
                    local342 = local70;
                    local343 = local13;
                    local344 = local14;
                    local345 = local196;
                    local346 = local197;
                    local347 = local198;
                    local348 = local90;
                    local349 = local76;
                    local350 = local77;
                    local351 = local78;
                    local352 = local79;
                    local353 = local37;
                    local354 = local80;
                    local355 = local25;
                    local356 = local81;
                    local357 = local82;
                    local358 = local83;
                    local359 = local84;
                    local360 = local3;
                    local361 = local193;
                    local362 = local199;
                    local363 = local87;
                    local364 = local91;
                    local365 = local92;
                    local366 = local88;
                    local368 = local193;
                    local369 = local199;
                    local370 = local87;
                    local371 = local91;
                    local372 = local92;
                    flags = LOGICALFLAGS32(local379);
                    if (local379 == 0) {
                        break;
                    }
                    local66 = 1000;
                    local63 = local88;
                    local64 = *(int*)0x10020034;
                    Sleep(1000);
                    local291 = local64;
                    local304 = local63;
                    local62 = 0;
                    local60 = local3 - 4;
                    local286 = local60;
                    local303 = local62;
                }
                if (*(int*)0x10024848 == 2) {
                    param4 = *(int*)0x10024854;
                    if (*(int*)0x10024854 != 0) {
                        param1 = *(int*)0x10024850 - 4;
                        local9 = local335;
                        local10 = local336;
                        local34 = local337;
                        local35 = local338;
                        local36 = local339;
                        local30 = local340;
                        local11 = local341;
                        local12 = local342;
                        local31 = local343;
                        local32 = local344;
                        local15 = local345;
                        local16 = local346;
                        local17 = local347;
                        local18 = local348;
                        local19 = local349;
                        local20 = local350;
                        local21 = local351;
                        local22 = local352;
                        local23 = local353;
                        local24 = local354;
                        local33 = local355;
                        local26 = local356;
                        local27 = local357;
                        local28 = local358;
                        local29 = local359;
                        local310 = local9;
                        local311 = local10;
                        local312 = local34;
                        local313 = local35;
                        local314 = local36;
                        local315 = local30;
                        local316 = local11;
                        local317 = local12;
                        local318 = local31;
                        local319 = local32;
                        local320 = local15;
                        local321 = local16;
                        local322 = local17;
                        local323 = local18;
                        local324 = local19;
                        local325 = local20;
                        local326 = local21;
                        local327 = local22;
                        local328 = local23;
                        local329 = local24;
                        local330 = local33;
                        local331 = local26;
                        local332 = local27;
                        local333 = local28;
                        local334 = local29;
                        local361 = local34;
                        local362 = local35;
                        local363 = local36;
                        while ((unsigned)param1 >= (unsigned)param4) {
                            if (*(int*)param1 != 0) {
                                *(int*)(local9 - 4) = local30;
                                (**(int*)param1)(local18, local17, *(int*)(local8 - 12), *(int*)(local7 - 12), *(int*)(local5 - 12), local16, local21, local27, *(int*)(local9 - 8), *(int*)(local8 - 8), *(int*)(local7 - 8), *(int*)(local6 - 8), *(int*)(local5 - 8), local15, local20, local24, local26, local30, *(int*)(local8 - 4), *(int*)(local7 - 4), *(int*)(local6 - 4), *(int*)(local5 - 4), local14, local19, local22, local23, local25, local12, local11, param6, *(int*)param1, param13, param7, param4, local10, param5, param1, local13, local28, local29, *(int*)local6, param11, global14[0], global15[0], global16[0], LOGICALFLAGS32(*(int*)param1), LOGICALFLAGS32(*(int*)param1));
                                local310 = local225;
                                local311 = local226;
                                local312 = local247;
                                local313 = global12;
                                local314 = local244;
                                local315 = local245;
                                local316 = local230;
                                local317 = local231;
                                local318 = local232;
                                local319 = *(int*)(local380 - 4);
                                local320 = *(int*)(local380 - 8);
                                local321 = *(int*)(local380 - 12);
                                local322 = *(int*)(local380 - 16);
                                local323 = local246;
                                local324 = local233;
                                local325 = local234;
                                local326 = local235;
                                local327 = local236;
                                local328 = local237;
                                local329 = local238;
                                local330 = local239;
                                local331 = local240;
                                local332 = local241;
                                local333 = local242;
                                local334 = local243;
                            }
                            local200 = local310;
                            local201 = local311;
                            local221 = local312;
                            local222 = local313;
                            local223 = local314;
                            local224 = local315;
                            local202 = local316;
                            local203 = local317;
                            local204 = local318;
                            local205 = local319;
                            local206 = local320;
                            local207 = local321;
                            local208 = local322;
                            local209 = local323;
                            local210 = local324;
                            local211 = local325;
                            local212 = local326;
                            local213 = local327;
                            local214 = local328;
                            local215 = local329;
                            local216 = local330;
                            local217 = local331;
                            local218 = local332;
                            local219 = local333;
                            local220 = local334;
                            param1 = param1 - 4;
                            local335 = local200;
                            local336 = local201;
                            local337 = local221;
                            local338 = local222;
                            local339 = local223;
                            local340 = local224;
                            local341 = local202;
                            local342 = local203;
                            local343 = local204;
                            local344 = local205;
                            local345 = local206;
                            local346 = local207;
                            local347 = local208;
                            local348 = local209;
                            local349 = local210;
                            local350 = local211;
                            local351 = local212;
                            local352 = local213;
                            local353 = local214;
                            local354 = local215;
                            local355 = local216;
                            local356 = local217;
                            local357 = local218;
                            local358 = local219;
                            local359 = local220;
                            local9 = local335;
                            local10 = local336;
                            local34 = local337;
                            local35 = local338;
                            local36 = local339;
                            local30 = local340;
                            local11 = local341;
                            local12 = local342;
                            local31 = local343;
                            local32 = local344;
                            local15 = local345;
                            local16 = local346;
                            local17 = local347;
                            local18 = local348;
                            local19 = local349;
                            local20 = local350;
                            local21 = local351;
                            local22 = local352;
                            local23 = local353;
                            local24 = local354;
                            local33 = local355;
                            local26 = local356;
                            local27 = local357;
                            local28 = local358;
                            local29 = local359;
                            local310 = local9;
                            local311 = local10;
                            local312 = local34;
                            local313 = local35;
                            local314 = local36;
                            local315 = local30;
                            local316 = local11;
                            local317 = local12;
                            local318 = local31;
                            local319 = local32;
                            local320 = local15;
                            local321 = local16;
                            local322 = local17;
                            local323 = local18;
                            local324 = local19;
                            local325 = local20;
                            local326 = local21;
                            local327 = local22;
                            local328 = local23;
                            local329 = local24;
                            local330 = local33;
                            local331 = local26;
                            local332 = local27;
                            local333 = local28;
                            local334 = local29;
                            local361 = local34;
                            local362 = local35;
                            local363 = local36;
                        }
                        *(int*)(local9 - 4) = param4;
                        *(int*)(local9 - 8) = local30;
                        free(param4);
                        global15 = 0;
                        global16 = 0;
                        local380 = local9;
                        local360 = local380;
                        local364 = global15;
                        local365 = global16;
                    }
                    local8 = local360;
                    global10 = local361;
                    global12 = local362;
                    global14 = local363;
                    global15 = local364;
                    global16 = local365;
                    *(int*)(local8 - 4) = 0;
                    *(int*)(local8 - 8) = param5;
                    global14 = 0;
                    InterlockedExchange(param5, 0);
                    local367 = local380;
                    local368 = global10;
                    local369 = global12;
                    local370 = global14;
                    local371 = global15;
                    local372 = global16;
                } else {
                    *(int*)(local3 - 4) = 31;
                    *(int*)(local3 - 8) = local88;
                    param7 = __imp__amsg_exit();
                    param13 = local37;
                    local380 = local3;
                    local367 = local380;
                }
            }
L2:
            local380 = local367;
            global10 = local368;
            global12 = local369;
            global14 = local370;
            global15 = local371;
            global16 = local372;
            local379 = 1;
            local373 = local380;
            local374 = global10;
            local375 = global12;
            local376 = global14;
        } else {
            param13 = *(int*)24;
            param4 = *(int*)(*(int*)24 + 4);
            param1 = InterlockedCompareExchange;
            local174 = 0;
            local177 = 0;
            local173 = local380 - 20;
            param5 = 0x1002484c;
            local249 = local173;
            local254 = local174;
            local260 = local177;
            for(;;) {
                local7 = local249;
                local144 = local250;
                global10 = local251;
                global12 = local252;
                local163 = local253;
                local145 = local254;
                local146 = local255;
                local147 = local256;
                local148 = local257;
                local149 = local258;
                local150 = local259;
                local151 = local260;
                local152 = local261;
                local153 = local262;
                local154 = local263;
                local155 = local264;
                local156 = local265;
                local157 = local266;
                local158 = local267;
                local159 = local268;
                local160 = local269;
                local161 = local270;
                local162 = local271;
                local166 = param4;
                local165 = param5;
                local164 = local163;
                (*param1)(local151, local150, local163, local149, local154, local160, param5, local148, local153, local157, local159, param4, param2, local152, local155, local156, local158, local146, local145, param6, local379, param13, param7, param4, local144, param5, param1, local147, local161, local162, param11, global14[0], global15[0], global16[0], flags, NF);
                local250 = local39;
                local251 = local116;
                local252 = local117;
                local254 = local190;
                local255 = local132;
                local256 = local143;
                local257 = local96;
                local258 = local97;
                local259 = local98;
                local260 = local99;
                local261 = local111;
                local262 = local112;
                local263 = local113;
                local264 = local135;
                local265 = local101;
                local266 = local114;
                local269 = local138;
                local270 = local104;
                local271 = local139;
                local272 = local143;
                local274 = local39;
                local275 = local140;
                local276 = local132;
                local277 = local135;
                local280 = local138;
                local281 = local139;
                local283 = local116;
                local283 = local116;
                local284 = local117;
                local284 = local117;
                local371 = global15;
                local372 = global16;
                local374 = local116;
                local375 = local117;
                if (local379 == 0) {
                    goto L34;
                }
                flags = SUBFLAGS32(local379, param4, local379 - param4);
                if (local379 == param4) {
                    break;
                }
                local172 = 1000;
                local169 = local189;
                local170 = *(int*)0x10020034;
                Sleep(1000);
                local253 = local170;
                local268 = local169;
                local168 = 0;
                local167 = local4 - 4;
                local249 = local167;
                local267 = local168;
            }
            local142 = 1;
            local272 = local142;
L34:
            local94 = local272;
            local141 = 2;
            param1 = 2;
            if (*(int*)0x10024848 == 0) {
                local125 = 0x10020128;
                local126 = 0x10020120;
                local133 = 1;
                local127 = local189;
                local379 = proc8(0x10020120, local39, param5, 2, param11); /* Warning: also results in param5, local2, param2, param1 */
                local274 = param2;
                local278 = local125;
                local279 = local126;
                local280 = local127;
                local376 = local133;
                param13 = local132;
                local131 = local2 + 8;
                local373 = local131;
                if (local379 == 0) {
                    local123 = 0x1002011c;
                    local128 = 0x10020118;
                    local124 = local189 + 0x6f023919;
                    param7 = __imp__initterm();
                    local276 = local123;
                    local277 = local124;
                    local281 = local128;
                    local122 = local2 + 4;
                    local129 = param1;
                    local273 = local122;
                    local275 = local129;
L27:
                    local6 = local273;
                    param2 = local274;
                    local118 = local275;
                    local93 = local276;
                    local100 = local277;
                    local115 = local278;
                    local102 = local279;
                    local103 = local280;
                    local105 = local281;
                    param13 = *(int*)local6;
                    local285 = local118;
                    local285 = local118;
                    if (*(int*)(param2 + 12) == 0) {
                        *(int*)local6 = 0;
                        *(int*)(local6 - 4) = param5;
                        InterlockedExchange(param5, 0);
                    }
                    local119 = local6 + 4;
                    local282 = local119;
                    if (*(int*)0x1002485c != 0) {
                        *(int*)local6 = 0x1002485c;
                        local379 = proc9(param6, 0, param5, param1); /* Warning: also results in param5, param6, param7, param4, local1, param2, param1 */
                        param13 = local104;
                        local110 = local1 + 4;
                        local282 = local110;
                        if (local379 != 0) {
                            local109 = *(int*)(param2 + 16);
                            local108 = param1;
                            local107 = *(int*)(param2 + 8);
                            (**(int*)0x1002485c)(local99, local98, *(int*)(local8 - 12), *(int*)(local7 - 12), *(int*)(local5 - 12), local97, param12 + 0x6f024006, local103, *(int*)(local9 - 8), *(int*)(local8 - 8), *(int*)(local7 - 8), *(int*)(local6 - 8), *(int*)(local5 - 8), local96, *(int*)(param2 + 8), local102, *(int*)(local9 - 4), *(int*)(local8 - 4), *(int*)(local7 - 4), param12, *(int*)(local5 - 4), local95, param1, local100, local101, 2, local93, local190, param6, local379, local104, param7, param4, param2, param5, param1, local94, *(int*)(param2 + 16), local105, 0x1002485c, param11, global14[0], global15[0], global16[0], LOGICALFLAGS32(local379), LOGICALFLAGS32(local379));
                            local282 = local380;
                            local283 = local192;
                            local284 = global12;
                            local285 = global14;
                        }
                    }
                    local380 = local282;
                    global10 = local283;
                    global12 = local284;
                    global14 = local285;
                    global10++;
                    local367 = local380;
                    local368 = global10;
                    local369 = global12;
                    local370 = global14;
                    goto L2;
                } else {
                    local379 = 0;
                }
            } else {
                local136 = 31;
                local137 = local189;
                param7 = __imp__amsg_exit(); /* Warning: also results in local134 */
                local273 = local134;
                local278 = local136;
                local279 = local137;
                goto L27;
            }
        }
        local380 = local373;
        global10 = local374;
        global12 = local375;
        global14 = local376;
        param1 = *(int*)local380;
        param5 = *(int*)(local380 + 4);
        param4 = param3;
        local380 += 12;
        local377 = local380;
        local378 = param1;
    } else {
        if (global10 <= 0) {
            local379 = 0;
        } else {
            local191 = global10 - 1;
            local248 = local191;
            goto L42;
        }
    }
    local380 = local377;
    param1 = local378;
    return local379; /* WARNING: Also returning: param5, param6, param13, param7, param4, *(int*)local380, param1 */
}

// address: 0x1001f370
__imp__amsg_exit() {
    int local2; 		// r26

    _amsg_exit();
    return local2;
}

// address: 0x1001ec0e
proc8(int param4, int param2, int param3, int param1, int param5) {
    int local0; 		// r29{49}
    int local1; 		// m[r28 - 8]{63}
    int local10; 		// r28{37}
    int local11; 		// r29{38}
    int local12; 		// m[r28 - 4]{60}
    int local13; 		// m[r28 - 8]{61}
    void *local14; 		// %pc{43}
    int local15; 		// r28{21}
    int local16; 		// r29{21}
    int local17; 		// local10{37}
    int local18; 		// local11{38}
    void *local19; 		// local14{43}
    void *local2; 		// %pc{54}
    int local20; 		// local12{60}
    int local21; 		// local13{61}
    int local22; 		// local3{48}
    int local23; 		// local0{49}
    void *local24; 		// local2{54}
    int local25; 		// local4{62}
    int local26; 		// local1{63}
    int local27; 		// r24
    int local28; 		// r25
    int local29; 		// r28
    int local3; 		// r28{48}
    int local4; 		// m[r28 - 4]{62}
    int local5; 		// r28{6}
    int local6; 		// r29{4}
    int local7; 		// m[r28 - 4]{2}
    int local8; 		// m[r28 - 8]{5}
    void *local9; 		// %pc{21}

    local7 = param2;
    local6 = local29 - 4;
    local8 = param3;
    local5 = local29 - 8;
    param3 = param4;
    local27 = 0;
    local22 = local5;
    local23 = local6;
    local25 = local7;
    local26 = local8;
    local3 = local22;
    local0 = local23;
    local2 = local24;
    local4 = local25;
    local1 = local26;
    local17 = local3;
    local18 = local0;
    local19 = local2;
    local20 = local4;
    local21 = local1;
    while ((unsigned)param3 < (unsigned)*(int*)(local0 + 12)) {
        if (local27 != 0) {
            break;
        }
        if (*(int*)param3 != 0) {
            *(int*)(local3 - 4) = local2;
            (**(int*)param3)(local1, param2, local2, local27, *(int*)param3, local0, param3, param1, param5, LOGICALFLAGS32(*(int*)param3), LOGICALFLAGS32(*(int*)param3));
            local17 = local15;
            local18 = local16;
            local19 = local9;
            local20 = *(int*)(local29 - 4);
            local21 = *(int*)(local29 - 8);
        }
        local10 = local17;
        local11 = local18;
        local14 = local19;
        local12 = local20;
        local13 = local21;
        param3 += 4;
        local22 = local10;
        local23 = local11;
        local24 = local14;
        local25 = local12;
        local26 = local13;
        local3 = local22;
        local0 = local23;
        local2 = local24;
        local4 = local25;
        local1 = local26;
        local17 = local3;
        local18 = local0;
        local19 = local2;
        local20 = local4;
        local21 = local1;
    }
    return local27; /* WARNING: Also returning: *(int*)local3, *(int*)(local3 + 4), param1 */
}

// address: 0x1001f2b6
proc9(int param4, int param1, int param2, int param3) {
    int local1; 		// %pc{16}
    int local3; 		// %pc{66}
    int local4; 		// r24
    int local6; 		// r26
    int local7; 		// r28

    *(int*)(local7 - 4) = 8;
    *(int*)(local7 - 8) = 0x100212b8;
    ebp = proc2(0x100212b8, 8, param1, param2, param3);
    *(int*)(ebp - 4) = 0;
    local6 = 0x10000000;
    *(int*)(local7 - 4) = 0x10000000;
    local4 = proc11(param4); /* Warning: also results in param4 */
    local3 = local1;
    if (local4 == 0) {
L2:
        *(int*)(ebp - 4) = -2;
        local4 = 0;
    } else {
        local4 = *(int*)(ebp + 8) - 0x10000000;
        *(int*)(local7 - 4) = local4;
        *(int*)(local7 - 8) = 0x10000000;
        local4 = proc12(0x10000000, 0x10000000, param1); /* Warning: also results in local6 */
        if (local4 == 0) {
            goto L2;
        } else {
            local4 = *(int*)(local4 + 36) / 0x80000000;
            local4 = local4 & 0x1;
            *(int*)(ebp - 4) = -2;
        }
    }
    *(int*)(ebp - 4) = -2;
    param2 = proc4(*(int*)(local7 + 4), *(int*)(local7 + 8), *(int*)(local7 + 12), ebp, *(int*)(ebp - 16), *(int*)ebp); /* Warning: also results in param1, ebp, param3 */
    return local4; /* WARNING: Also returning: param2, param4, local6, param1, ebp, param3 */
}

// address: 0x1001f36a
__imp__initterm() {
    int local2; 		// r26

    _initterm();
    return local2;
}

// address: 0x1001f240
proc11(int param1) {
    int local1; 		// r24
    int local2; 		// r28

    if (*(int*)param1 == 0x5a4d) {
        local1 = *(int*)(param1 + 60);
        if (*(int*)(local1 + param1) != 0x4550) {
L1:
            local1 = 0;
        } else {
            param1 =  (*(int*)(local1 + param1 + 24) == 267) ? 1 : 0;
            local1 = 0 >> 8 & 0xffffff | (param1);
        }
    } else {
        goto L1;
    }
    return local1; /* WARNING: Also returning: param1 */
}

// address: 0x1001f270
proc12(int param1, int param3, int param2) {
    int local10; 		// r30
    int local4; 		// r26{60}
    int local5; 		// r26{79}
    int local6; 		// r24
    int local7; 		// r25
    int local8; 		// r26
    int local9; 		// r28

    local7 = *(int*)(param1 + 60);
    local10 = *(unsigned short*)(local7 + param1 + 6);
    local8 = 0;
    local6 = *(unsigned short*)(local7 + param1 + 20) + local7 + param1 + 24;
    if ((unsigned)local10 <= 0) {
L1:
        local6 = 0;
        local5 = local8;
    } else {
        do {
            local4 = local8;
            local5 = local4;
            if ((unsigned)param3 >= (unsigned)*(int*)(local6 + 12)) {
                param2 = *(int*)(local6 + 8) + *(int*)(local6 + 12);
                if ((unsigned)param3 < (unsigned)(*(int*)(local6 + 8) + *(int*)(local6 + 12))) {
                    goto L0;
                }
                goto L2;
            }
L2:
            local8 = local4 + 1;
            local6 += 40;
        } while ((unsigned)(local4 + 1) < (unsigned)local10);
        goto L1;
    }
L0:
    local8 = local5;
    return local6; /* WARNING: Also returning: local8 */
}

