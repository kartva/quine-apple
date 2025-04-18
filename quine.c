#define N 0
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define W 68
#define H 40
#define BL 440

const int badAppleOffset=0;char screen_buf[H][W+1],*self_str_ptr2,*self_str_ptr1,curr_char,*S="@",*frame_data="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaQ~aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaQ~aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaQ~aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaQ~aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaQ~aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaQ~aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaW&aa-&aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaM~aa0a_&%.aa0aa%.aa&%,aa%.aa%&%*aa%.aa\'&%(aa%&%*aa\',aa\'&%(aa)*aa+&aa-(aa%.aa&%,aa0aG&=&%*aI&9&%,aa%.aa&%&%(aK&9&%*aM(5.aO&7&%(aO(1&%,aQ&5&%(aQ&3&%*aS&3,aa%&%&%&aU&1&%(aa%&%*aa\'&%(aa&%,aa%&\'(aa&%&%(aa&%&%(aa&%&%(aa&%(%&aa(%*~aCNaAPa?Ra=Ta=Ta;Va9Xa9Xa7Za5\\a5\\a3^a5\\a3^aAPaAPa?Ra=Ta=TaAPaELaIHaMDaOBaQ@aS>aS>aU<aU<aU<aW:aU<aU<aW:aU<aW:a[6a_2aa0aa%.~0aAPaANaCLaCNaELaCNaCNaCLaCPaANE&[PC&]NE&a\'HC&a\'HaGJ-&a;JaGHaODaQ>aU<aW:aY8a[4a_4a[4a_2a_0aa0aa0aa0aa0aa0aa%.aa0aa+(aaaaaaaaaa_~Ba=Ta=Va3(%Xa5`a/ba1`a1`a1^a3^a3^-&a&%^-(a\'\\-&a(%\\a1&%\\-&a(%\\a1^a3ba-ba1ba1^a7\\a7Xa;Ta?PaANaCLaELaGHaIFaKDaMDaO@aQ>a]4a]2a_0aa0aa.aa%.aa%~Ra+b*a\'b.a%b,a%b0ab.a%b,a%b0a%b,a%b.a%b.+&Yb.+&Yb.+&[b,+(Yb.)&Y&%b,\'([b.\'&ab*a-b&a/ba1^a3^a3^a5\\a3\\a7X%&a5Ta=RaANaC&%&%HaIHaIJaGHaIFaIHaKFa1&;Da3(9Da3&;Ba5(9Ba3(;~Ra+b,%&ab0_b2ab2]b2]b6Yb8Yb<Ub:Wb:Wb:Wb:Wb:Wb:Wb:Ub<Wb<Sb<Wb6_b2ab.a\'b,a\'b,a\'b*a)ba/ba/`a3`a1&%\\a7\\a7Xa7Za5Za5\\a7Xa9Va;Va;Ta=Ta?.~TYb6Yb8Yb6[b6Yb>Qb@QbBObBSb@ObBQbBObBOb>Sb>Sb:Wb8Wb8[b4]b4_b2_b2ab0ab0a%b&Y&3b(a/ba-b(a+b(U&5b&U*3b&U(5b&U(5bU,3bU*7^W*5`W,5\\Y*9ZY*9X]*9T]*=8~Jab2]b4%&Wb<Sb<Ub:Ub:Ub@QbDKbDKbFKbFMbDMbFIbF%&IbFKbFKbBOb@Qb>Wb:Wb:Yb6]b4]b.%(_b,a)b*a)b,a\'b*_&+b(a&)b&a%&+bS&1&+`U&1()`U&3&)^W&;^W&=ZY&=X[&=X[&=V](;B~H[b6Yb>Sb>Qb>Qb>QbBObFIbHGbJGbJGbHIbJIbHGbJIbFIbHIbDMbDObBQb>Sb@Sb<Ub6_b4[b6]b4_b01&Qb01&Qb.1&Ub,3&Sb*3&Ub*3&Wb&a-b7&Wba1^9&Y^a3\\a3&%Xa5L~DYb8Wb<Ub<SbDMb@ObBKbFKbJGbJEbLCbPCbLEbNCbNEbLCbLEbHKbFKbFKbFMbBSb@Sb8Wb:Wb<Wb:Wb:Wb:Yb6]b4]b23&Ob.a%b.3&Sb*7&Qb*5&Sb(a+b&a-b&a/b&a-N~JUb>Qb@QbBObBMbHEbLEbLGbJEbJEbLCbNAbPAbNCbPEbLEbLIbHIbFMbDKbFMbBSb<Ub>Qb@-(Cb@/&Eb>/&Eb</*Eb:1&Gb:/(Gb83&Ib43(Kb23(Kb05(Mb.5&Ob,5&Ob03&Ob03&Qb.1&Qb.3&OP~R1(;b@QbBObBObDKbHEbLGbLGbLEbLAbPAbPAbPAbP?bR+&5bRAbNEbJIbFKbFMbBOb@+&Kb<Sb<)&Ob:)(Mb:)(Mb:\'*Ob8)&Qb8\'(Sb6)&Ub4]b4_b25&Kb2ab4]b4[b4]b4]b6[b4-&QH~b03bH/&;bDMbDMbFKbFG&%bHEbNEbNCbNAbR?bR?bPAbR?bPAbR?bRAbNCbLGbJGbHIbFOb@Qb@Qb>)&A&+b>)&Mb:)(A&-b:)&Qb8\'&Sb8[b4_b2_b2)&Yb2%&[b4]b6Yb8[b:Ub:Yb:UF~^%&\'*%&5bDMbDMbFKbFIbJCbPCbPCbP=bT=bT=bT;bT?bR=bV=bT?bPCbNCbNCbJGbJKbFKbFKbDC&+bDMbBC(-b@Qb>E(/b:Wb:I&1b8Yb8[b6[b4[b8[b<Sb>Ub<Ub>Sb<UD~bbb,%&%4-bJKbFIbHIbHGbLEbN?bT?bR?bR=bV=bV;bV;bV9bV;bRAbPCbNCbJGbJG&%bFIbHIbFA&+bF?(-bBA(-bBC&-b@C(/b<G&1b:Wb:Yb8I&1b8Yb8K&/b<Ub<G&/b<I&-b>G&-b<K&-b:K(+F~bbb(/b`7&1bJIbJEbJGbNAbP?bPAbT;bV;bV;bV;bX9bV=bR=bRAbPCbLEbJ%&EbHIbHKbD?(-bD?&/bD?(-bBA&/bBA(-b@C&/b>E(/b<E(/b<G&1b:G&1b:I&-b<I&/b<G(-b<I&-b<I(+b>I&+b<M&+b:M(\'N~bbb(%bb*/bb7&%&\'bPGbJGbJGbP?bNAbP?bT=bT;bV;bV;bV;bV;bT=bT?bPCbNCbJIbJIbFKbFMbB-&5&/bB?&1b@Qb@C&1b<Sb<G&1b:Wb:Ub>Ub:Wb<G&-b<Ub<Ub>K&)b<Ub>OX~bb`+bb&3.%bRGbJGbLEbL%&?bP?bP?bT=bV9bX9bV=bV9bX;bT;bT?bR?bRAbLGbJGbJGbJ+&?bH+&?bFKbF-&AbB/&Ab@/&Eb>Sb<Ub<Sb@Sb>Sb<Sb@Qb>Sb>Qb@Qb@)&IbB%&KZ~bbbbb,+bb&5(-&%bJGbJGbLCbN%&?bP=bR?bT=bV9bV9bZ9bV;bX7bX=bR?bT?bPCbLEbLEbLGbJGbJIbFKbFMbBOb@Sb<Sb@Sb>Qb@Qb>QbBQb@ObBMbB+&Gb@)&IbB%(IZ~bbb<%&%bN%&+(%&1bLGbJEbLEbNAbR=bV=bR=bT;bV;bV9bV;bX;bV?bPAbNCbNEbL+&=bHIbH-&=bH-(;bH/&;bH-(=bF-(=bF-(?bB/(Ab>1&Cb>/(Cb>/&Cb@/&Eb>-(Cb@-&Eb@+(CbB+&Gb>+(Gb>)(Ib@%*KbDMR~bbbbbH%&\'bT%01bLEbLGbJEbNAbR?bT?bR;bX;bT;bX9bV;bV;bV=bRAbNCbLEbJKbFKbF\'&EbD\'(EbD\'&+&?bB\'&-&?b@1&Ab>Ub>1&Cb<3&Eb<1&Eb<Sb>/&Gb>-&Eb@+&Gb>+&GbB)&Gb@)&IbFKbFKP~bbb@%&\'bV%.1bLEbJGbJGbLAbR?bT?bT;bV;bV;bV;bV;bV;bV=bT=bR?bRAbLE&%bHGbJGbHA&+bFKbDC&+bDOb@E&/b>Sb>Ub:Wb<Ub>Sb>Sb>Sb@Qb@QbBObDMbBOb@M&%J~bbbF%&%bb1bJGbJGbJGbLCbNAbT?bR=bT;bX9bX9bV9bZ9bX9bV=bT?bNCbLEbNGbHGbHIbFKbFKbDOb@Sb<I&/b<Ub:Yb:Ub>Sb>Ub<Sb@)&Kb@%&MbBE&+bBG&)bBG()b>KN~bbbbb4/(%(-bNGbJGbJEbNAbR=bT=bT=bV;bX9bX;bX7bV=bR=bRAbPAbPAbLGbLGbH=&+bJ=&+bJ=(+bF?&-bDA(-b@C&/b@C(/b<E(1b<E&1b<G&-b>G&/b<G&/b>G&-b>G&-b@E(+b@G(+b<K()b<K*%b>KT~bbb*%bb,/bb5&-bNGbLEbJEbP?bP?bR?bV9bV;bX9bX9bX9bV;bT?bPCbPAbLGbHIbJIbFKbF=&/bD?&+&\'bB?&/bBA&1b>Sb>C&1b<G&/b>Sb>E&/b>G&-b>Sb>G(+b@I&)b@I&+b>I(\'b@K(%b@MV~bbb*%bb(1bb7&+&%bJIbHIbJEbNAbPAbN?bT?bT9bV=bV;bT=bV9bV=bR?bRAbNEbJ%&CbJIbHKbFKbDMbDOb@A&1b>Sb>Ub:Wb:Wb8Yb:Wb:Wb:Ub<Ub<Sb>Ub<Sb>QV~V1b^7(%*-&%bBQb@Sb>Qb@QbBMbHIbFE&%bHEbNEbLCbNAbRAbPAbP?bR?bPCbLCbLGbJIbHKbFMb@Sb>Sb>Sb@Sb<G(-b<G&1b:G(1b6I(1b6I(3b2M&3b2M&5b.O&7b,O(5b*Q&7b,Q&5b,a\'b,Q&5@~bD%&%b@725b8[b6[b6[b8Yb:Wb:Wb<Sb>M&\'b<ObDObBQbBOb@KbFKbD)&EbD\'&EbF\'&EbF\'&CbH%&GbF%(CbH%&IbFMbDMbDObDO&%b<Yb6Yb8[b8[b8[b6E(7b4E(9b0G(9b0G*9b,I*9b*M(;b&O(;b&O(;0~b6%45bB5&=b>Sb>Sb>Ub:Wb:Wb8Yb8Yb8Ub<Wb:Yb:Yb:Wb<Ub<Qb>Sb>Sb>Qb@)*Gb>\'(%&Eb@QbBOb@ObDKbDMbDMbDMbDOb@Sb>S*%b6U&\'b6[b6]b4]b4G&;b.%&_b*M(;`S(=V%(U(?~bF)bb(+bb(/b`1bZ9bRCbJIbFMbDMbBOb@Sb>Ub>Sb>Sb@Sb@Qb>Sb@QbBQb@ObFMbDMbDMbDMbDMbBOb@M&%b@E&\'(%b>E(%b%&%>G(%^1:G(%\\3:I^5:G`7.%*K()Va7Za5^a5`a1b,a)b*a+2~bbbJ%&%bb(-bb&/bb1b`9bRAbLGbHIbFMbDMbBObBQb@QbBQbBObDMbDMbDMbFMbFKbHIbHIbHC&%bJC&%bJE&%^%&%DA&%`1>Cb&38Gb3<?&%b(38Gb&=&%(Ib&a-b*a)(\'b*a\'b,ab.a%b.a\'b,a)b*a)8~bbbbbP+bb(-bb3b`;bT?bNCbJIbHIbFMbBObBObBQbBObBObHIbFMbFIbHKbJEbLGbJGbJC&%bL=&%&%`/@Ab&1@?b&3:Eb&58Eb(56Eb(?*Gb*a+b.a%b0a(%b*a)b(a\'b,a%b.a\'b*C&Gb&E&G:~bbbbbbbX+bb(/*%bX=bV=bPCbLGbHIbFKbFMbBObBQbBObBObD%&IbHIbHKbHGbLEbL)&?bJ+&;bNCbNEb/@=(%`3@=b(3:Cb(38Gb(74Cb*?(Ib*a)b2_b2_b0a+b*ab.a%b.a%b,a)b*C&G:~bbbbbbbX+bb&1*%bZ;bV?bNCbLGbHIbFKbDObBObBQb@QbBObFKbHIbFKbJGbLEbL)&?bJ)&=bLEbNEb/@=b*1>?b(58%&?b*18C&%b&76Cb*=*Gb,a\'b2_b6[b4_&)b*a%b.ab0ab.a%b.a\'<~bbbbbL+bb(/bb3&\'bX=bRAbLGbHIbFMbDMbBQb@Qb@Qb@Sb@QbDMbFKbDMbFKbJGbJGbJ)&AbJ?&\'b(%&\'>C&%b1>?b(3>?&%b5:Ab(54Cb.70Eb,;,Eb.a%b6[b4]b6](%&%b(a)b*ab0ab0ab0a%<~bbbB+bb&/bb3*%bV=bV?bLEbJIbDMbDOb@Qb@Sb>Sb<Ub>Ub>SbBObDMbBObDMbFMbFIbH)&Ab(%(%>I`%&-<G`5:A(%`5:A*%^5:Ab(52\'&?&%b*9.Cb09*Gb09&Ib6[b4_b2]b2a()b(a\'b*a%b.a%b.?&G:~b6-bb1bb3b^=bT?bNEbHKbDMbBQb>Sb>Ub<Ub:Wb<Wb:Wb<UbBOb@Qb@Sb@ObDObDKb*%>+&Cb18Ib38K^76C&)^58C&%b76C*%`72Eb*9*G&%b.7(Ib45&Ib4]b2ab0ab0a,%b&a&+ba)b*A&Gb*?&I8~b63b^5b^5&\'bV?bNEbHKbBQb>Sb>Sb<Wb:Wb8[b8Yb8Yb8Yb<Wb>Sb<Ub<Ub>Sb@QbBOb&14M`52O`54M^92E&)`54G(%`74C&%(%^90Eb,=(C&\'b._b4]b4]b2ab0ab.a%b.a\'*\'`a\'&)ba+b(?&I6~b85b^5&%bX?bNEbHKbBQb>Sb<Ub:Yb8Yb8[b4]b6[b6]b6[b8Yb<Ub:Wb:Yb:Ub*%8Sb&/0Qb50Q^7.S\\90O`70I&)^90G&%&%^90G(%b9,Ib,9*C&\'b0]&%b0]b2_b2ab.a%b0ab.a%b.a\'*\'`a\'&+`a+2~b:7b\\7&%bTAbJIbDOb@Qb<Wb:Wb8[b6[b4_b4]b2_b4_b4]b8Yb:Wb8Yb8Yb:Wb(/.U`5,S`9,S^9*S`9,S^70G&+^;*K&\'b9,I&%&%b9*Ib07&I*%b*[&\'b.](%b._b2_b2_b0a%b0ab.a%.%`a%(+`7&U.~b<5b\\7&%bTAbJIbDOb>Ub<Ub:Wb8[b6[b4_b2_b4]b4_b4[b:Yb8Yb6[b8Yb,%(%*Yb&1*Ub7*U`7,Q`;(U^9,S`7,Qb9,G&+b9(K&%&%b&9(Ib2]*%b*[&\'b0[(%b.](%b0]b2_b2ab.ab2a,%b7&M(+b3(U.~b<5b\\7bX%&=bJIbDOb>Sb>Ub:Wb8[b6[b4]b4_b2_b4]b6]b8Yb8Yb6[b8Yb,%(%*Wb(1*Ub7(W^9*S`9,S`7,Qb9*S`9*I&+b9*I&%&%b&9&K&%b,ab0[&%b2[(%b.](%b._b2_b0a%b.ab07&M,\'`5(M()b5(U.~b:5b^7bXAbJIbDMb@Sb<Ub:Yb8Yb6]b4]b4_b2_b4]b4]b:Yb8Yb6[b8Yb*%(%*Yb&%&/*Ub7(U`9*S`9,Q`9,S^9,Qb9*I&+`9*K&%&%b&9(I&%b,_b2[&\'b.](%b.](%b._b2_b0a%b.ab07&M,\'`5(M()b3*U.~b87b\\7&%bV?bJIbDOb@Sb<Ub:Wb8[b6]b4]b2_b4_b2_b4]b6[b:Yb6Yb8[b8Yb(-,Wb5*U`7,S^9,S^9,S`7.Q`9,I&%&\'^;*I&\'&%`;(Kb.9&I*%b*[&\'b.](%b._b0ab0ab0a%b.a%b.5(M.%`5&O*+\\5*W,~b47bZ=&%bRAbLGbFMb@Qb>Ub:Wb8[b6[b6]b2_b2ab2_b2_b4]b8[b8Yb6[b8Yb*%2Wb&1,U`7,S`7.S\\9,S^9.I&+^9,K&%&%^9.I&%&%`9,I(%b&9&Mb._&%b0]&%b._b0a%b.a%b.a%b.a\'b,7&O.%^7&Q(+\\5(Y,~b,7b\\CbNEbNEbHKbBQb>Sb<Ub:Yb8[b4]b4]b4_b2_b2_b4_b4]b:Wb:Wb8Yb<Ub*%&%&%.Sb&3.S`7,+(E`9,+&I^9,S^9.I&%&%^9.K&%&%^9.Eb.;*Gb,=&Ib2]&%b._&%b._b0a%b.a%b.a%b.a\'.%^a\'*)^a)&).~b&9*)&%bJIbHKbHKbHKbBOb@Sb<Ub:Yb8Yb6]b4]b4]b4_b2]b6]b6[b<Ub>Sb<Ub>Sb@Qb@/&Cb@+*Ab(-4+*C`32+(=&)^70)*=&)^72\'(Ab90)&Cb&90%&Gb=,%&Eb&A&I&\'b?&I(\'b&a\'b2_b2_b0ab0a%b.ab.a\'(\'2~VSb@Sb>Ub>Ub>Ub@Sb<Wb8Yb8[b4]b4_b2_b2ab0ab0ab0ab2ab2%&[b<Ub<Sb>Ub>Qb@1&7&+b@1(7()b>/(;&)b@)&%&=*%b>+&AbH\'(AbH\'&EbH%&G\\1>KZ3>OT7<KV9<KX7<KV;&%4MXE&%(OVa;Xa9\\a58~b4-bF%&%&%29b<7&Ab8[b4]b6_b4]b8[b8[b:Yb6[b4_b2_b2_b4_b0ab2ab0ab0ab2ab6%&Ub>Ub<Wb8Ub<+()(Ab:+()*?b:+(\',;&\'b8),\'(?b<+*%(Cb<),Ib:\'.Ib<\'*Mb:\'*Ob:%*Qb@K&\'b@Sb>M&)b<M&)b:Q&)b:O&)*~bbbbbbbbbb<%bN1&%&\'&/bDQb>Ub>Ub<Ub>Ub<Ub:Yb6[b6[b6]b2_b4]b2ab0_b4_b2]b8[b<Sb@Sb<Ub<Sb<Wb85(Ab:/.Cb6/2Cb4+&%2Eb0+(%2Eb2)8Gb0\'8Kb,\':Mb,%:Mb*%:Qb@Qb>S~b\\\'bb(/bb3b\\7bZ;bLEbHIbDMbBOb@Qb>Sb>Sb>Sb<Ub>Sb>Sb>SbB%&KbDMbBObDMbDMbFKbFKbFKbFKbDMbF%&+&=bF%(\'&?bD%(\'&AbF%&\'(?bJ%(AbH%*AbR?bPAbR?bPAbPAbPAbPA~bbbb:%bb(+bb&-b`1b^3b^3b\\5b\\5b\\5b\\5b^3b\\5b\\5b\\5b\\5b\\5b\\5b^3b`1b^3b\\5bX9bL%.9bJ+(;bD%&Ib<%&%&Mb4%&%&Ub,%&%&%&Yb%&%&%&aB%:%&%&%&\'&a%<%&%(%2%(%&%&E&%&C:%(%&%(%.%&%&K(E<\'&)&%*%&Q&%&E8\'&)&\'&%&%(%&O(E:)&/&%&U(E8%&7&%(S&E8?&U&E:9&%&%&a7:;&%*a5~bbbbbbbbbbbbbbbbD%(%bb*%bb*%,%&%6%&%bb(%bJ%&%&%:%&\'&%bN%6%&%bH\'&%&%4%&\'&%&%bD%&%:%&%&%bD%&%&\'&%2%&)bJ\'&%&%2)&\'bD%&+4%&+bF%&%&)&%.-&%bD%&-4/bB%&10-&%bD%&/.1bB%&7&%(-&%bB%&3&%&3b@%&;&%&-bD%&Kb@%&M>%`%&O>\'`Q<%&%\\%&Q>\'^U:)\\%&S6%(\'\\W:)^U6\'&\'\\Y(%&%*-^Y&%&\'(-^a\'&-^a\'&-b%&a+b&%&%&%&U&%&\'~T;bX7b\\3b^1bb(%bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb~bbbbbbbbbR1b^5bX=bT=bR?bRAbP?bRAbR=bV9bZ3bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbX~bbbbbbbbbbbbbbbbbbbbbbbbbbb>-bZ%(3bZ;bT=bRAbPAbPCbNCbNCbP=bT=bX5bb-bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbX~bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbJ-b`5bX=bRAbNCbNCbLGbJEbNCbPAbP?bV9bX%&3bZ%.%bbbbbbbbbbbbbbbbbbB~bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb2%bb&7bX=bRAbPCbNCbLEbJGbLCbNEbNA&%bN=bV9b^1bb&%&%bbbbbbbbbN~bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbP%bb%&%&\'b^9bVAbNCbNEbLEbJGbLEbLEbLCbNCbP?bT;b\\%&-bbbbbbbbbbbbbbbb2~bbbbbbbbbbbbbbbbbbbbbbbbbbbbbJ%&%b`9bV?bRCbLEbLEbLEbH%&EbH%&EbNEbLCbNAbP?bV7b^\'&%&%bbbbbbbbbbbbbbbbbbbbbbbbbbb4~bbbbbbbbbbbbbbbbbbbbV/b\\9bT?bRAbNEbLEbLGbHIbJGbJGbJEbLEbN?bT7b^%&%,%bb,\'bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbX~bbbbbbbbbbbbbbbbbbbbX-b^7bX;bRAbPIbFEbJIbHIbHKbHGbJIbJEbLEbN?bV5bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb~bbbbbbbbbbbbbbbbbbbbbbb%bb.%(1bZ;bR?bPCbJIbHIbFKbFMbFIbHKbHGbJGbNAbR;bX3bb&)bbbbbbbbbbbbbbbbbbbbbbbbbbbbb@~bbbbbbbbbbbbbbbbbbbbbbbbbbbbbN%&-&%bV=bPCbLGbHIbHKbFMbDMbDMbDKbFKbHGbLCbP=bX7b\\/bbbbbbbbbbbbbbbbbbbbbbbbb~bbbbbbbbbbbbbbbbbbbbbbbbbbbbbV%bb&1b\\9bRAbNEbLGbHKbFKbFMbFIbHIbHIbHGbLCbP;bX5&%b\\%&\'.%bbbbbbbbbbbbbbbbbbbbbbN~bJ%&%&?bbb\\%bbbbbbbbbbbbbbbbbbbbbbbbbP\'&%b`9bV?bPCbLEbLIbFKbFKbFKbFKbFKbHGbJEbNAbT9bZ%&+&%bbbbbbbbbbbbbbbbbbbbbbV~5&\'&%&%&%bJa%b.]b4[b6Yb8[b6[b6]b4a\'23&%Ha\'0=Da\'2=Ba\'0A@a\'0C<a\'2C8a-4A4a-8A0a+@A,a)BC(a)FC&a\'HaGLaELaGJaGJaGJaIHaKFaMDaO@aW2%&a_*%&aaaaaaaaaaaaaaaaaaaaI~5&\'&%&%&%bJa%b.]b4[b6Yb8[b6[b6]b4a\'23&%Ha\'0=Da\'2=Ba\'0A@a\'0C<a\'2C8a-4A4a-8A0a+@A,a)BC(a)FC&a\'HaGLaELaGJaGJaGJaIHaKFaMDaO@aW2%&a_*%&aaaaaaaaaaaaaaaaaaaaI~5&\'&%&%&%bJa%b.]b4[b6Yb8[b6[b6]b4a\'23&%Ha\'0=Da\'2=Ba\'0A@a\'0C<a\'2C8a-4A4a-8A0a+@A,a)BC(a)FC&a\'HaGLaELaGJaGJaGJaIHaKFaMDaO@aW2%&a_*%&aaaaaaaaaaaaaaaaaaaaI~b0%&]b2_b0E&%(7b0;&%.;b0%&1&%&%&Eb.%&-&1&Cb0%&5*9&%&%(\'b*%&%&%&).%&+&%8%b2%&%6%D%bbbbbbbbbbbbbbbbbbbbbbbbbbb4%&%&%(%(%bX;bVCPE(+4G&%FS0%&Q&%:U0a\'&%(W0aa%,aa)(aaaaaaaaaaaaaaaaaaaaaaa-~(aa-&aa+(aa+&aa-*aa3&%&aa%.a_2a]6a[8aY6a[8aY8aY8aY<aU@aQ.)2aO4\'0aM8\',/&%&=&%(%*%&KF\'0/&%P=X%^%&7bX9bZ7b\\5b`%&-bb&-bb*%&%bb(+bb*)bb,\'bb%&%&\'bb(+H)b@\'F1b8)F9b%&%&%&)FE&%J%&%&9:%&W&%@C,a16G,a5&%(%*E&a?(=~Ta=Ta=Va;\\a5V\'*a1Xa9\\a5Z%(a1D%&%6%(a/J%6\'(a+F)6a3H\'&%2a3J%6a3D\'<a1F\':a1`a1ba/`a1ba/b(%&/&%,MbFK(\'b6S&+T%&%4O&%&\'&/T%&+27&%>+^%&+^\'b,%&\'Z%&%bbbbbbbbbbbbbbbbbbbbbbbbbbb@+X\'&%b(3R~Mb>Yb:U&%b6%(Sb>Ub<Yb8Y*%Z%.a+\\-&%&a%b-&a%b&E0;V/*A67Z/(=:7R%(K<3^G@1X+&G:1N%(-&I<1N+0K</N)2M&%8)P\'&%0%0G6)P%BK6%P%BOb%@Qb@Sb>Wb:Y6%bY6)^W4-^U21^U01`S01bQ01b&O01b(M0/b,K2-&%b*I2-b@%&%&%&)8%bbbbbbbZ~Ub<Wb:Yb8_b2ab0a)b*a-b&a/ba3^a3^a7Za7&\'Ta?R],=P[29PW67RW83TU<3RW83RY63VY8-P)&_6)Ra/0\'Ra12%Ra1`%&a/`a3^a7\\a5\\a7Za92\'Fa52-Da50/Da303Ba107@a105Ba/05Da-05Fa-.3Ja+.3L~MbBSb@Qb@Ub<Wb:[b6_b2a%b.a)b*a-b&a1`a5\\a5\\a7Za9Xa,3*%N_29L[87LY:9JY<5LY<5LY:5N[87L]:1Na&%4-Pa-.+Ra/0%Ta/ba10%Ra3^a3^a5\\a5\\a7Za9Xa9Xa;4\'Ba92+Ba701@a703>~GbJIbHMb@Sb>Ub>Ub>Wb:[b6_b2ab0a\'b,a)b*a+b(a3^a1`a1`a\'&-^_0+\\]6)ZY:+,%NY<3NW>3NW>5LY:5N[83P]:/Pa6/Pa+0-Pa-.)Ta/.%Va/ba/ba/ba1`a1`a1`a1`a3^a3^a3^~KB1&%TKD%bMbDQb@Qb@Sb>Ub:[b6]b2a%b2ab0a%b.a)b*a+b(a+b(a/&%^a1`a/ba1`a\'b,a%b._b2]B%R]>+P]>)R_:/Na8-Pa:)Ra)6\'Ra1.\'Ra3.%Ra3^a3^a5\\a3^a5\\a5\\a5\\a5\\a5\\~G<;PQ8;VM87\\C&%&\'67^=2%6/b&?D%b0?bRAbB+*Eb@-&Ib:Yb8]b8[b@Wb:[b6_b2a%b.a%b.a\'&\'b&a-b&a+b(a+b(a\'b,a%b.a<%Ta<%Ta:)Ra<\'Ra%:%Ta)b*a/&%^a5\\a7Za7Za9Xa7Za7Xa;Xa9Xa7Z~aA&%&%&%&aUBaKJaCRa=XO*C^I.%&%&9bC<3N)&%4A8+&%T10?<%\\_b2Yb8Yb<%&QbH%&IbNIbHM&%b@Wb:_b2a%&\'b(a+b(a)b*a%&%b*a%b._:%X_:\'V_8)Va8%Xa%b.a\'b,a3T%,a3N%,a9P%*a9P+&%&a5P+(a3T)(a5T\'(a5T\'(a5T%*a5V%(~aaaaaaaaaa\'8aSDa32-Ha/4+Na)&%.-V]6%&%H+2Wb3&%&Wba1`a3&%b%&a-b.a-b,a+b*a-&%`a1^a5Za1b(a)2\'X%&_2)Z_6\'\\_2)\\a4%<%&%>a)&%F/&%(%,a-F5&+&a-H/(a9J+,a7J)0%*a-L\'8a-L%:a-0%Va-0%Va/,+Ra/,+Ra-.-Pa+.1@%0a+,1P~aaaaaaaaaaaaaa%&9&%&%&aK,-8aG.)>aC,)Da9,%D),a5L1&a9JaMLaINaGLaGJaC(%H%&a=,)Ha90\'La7,\'Na9&%L%&%&a=HaK<+(\'&aC>\'2aA@%4a?,%FaA,%FaC(+Da?*+L%&a1*+Za\'*+D)&%2a%*)L%&)>%&%&I*\'bP%&%&%&)bbb>%bb.\'(%&\'2/&%&%&%(%b2\'&30Gb(=,Eb*~aaaaaaaaaaaaaaaaI&aU&%&+4aO,\'8aK@\'*aGB+&aI>aY@aU>aO&%>aM*)<aI,%@aK(%BaK6a[8%.aM8%.aO(%:aQ(\'<aK()Ja;():\'*+&%&%0-,%&%&I(\'B%D/D%&%&-b01&%b\\9(%&%0%&%(%b6I&%*7b*Q(5b*a;0%&)&%<a;(%*7&%2a=&%*E(aC&aaaaaaaaa=~aaaaaaaaaaaaaaaa9&aa+*)(%&aW*\'4aS:\'(aQ8a]:a[8%&aQ(%>aK*\':aQ(%0%&aY2+&aU2\'*aU<aW&\'8%&%&aI(\'4%.aG(\'8%*\'6G4%&%&3(\'\\E&%bJI&)0%&%&%b,Y&3:\'La-&-,-Da;,7&%0aA&\'&A&%&aaaaaaaaaaaaaaaaaaaaaa)~aaaaaaaaaaaaaaaaaaaaO*\'.aY6%&aY4aa4a]&%2aY(%6aW&%6aY0%(a[6a[&\'0%&aW&\'2%(%&\'&%&_,%&7(%P]b6a\'*/&%Xa)(/*%0%@aG(3&%0%&aE&%&9&%&aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\'~aaaaaaaaaaaaaaaaaaaaQ(\',a]2%&a]0aa\'2a[(%2a[&%2a].%&a_4a]&\'4a;&%&7&%2%8a+b*a5&%&-NaK*)&%6aM&7(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaU~aaaaaaaaaaaaaaaaaaaaS(%*a_2%&a_.aa\'2a[(%2a],%&aa2a_&%0aE&7&\'@a3&%4%La;&/2%:aO()&%2aS&7&aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa%~aaaaaaaaaaaaaaaaaaaaQ(\'*aa0%&a_.aa%&%.a_&%0a_2a_0aa&%0aC&%&5&%0%4a5`a;&/JaO(+&%0aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa/~aaaaaaaaaaaaaaaaaaG&aa+4a_.aa).a_4aa2a_,%(a_&%.a]&\'2)&a9*%&%&+&%Fa5^aI&%,\'8aQ(/&%*aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa1~aaaaaaaaaaaaaaaaaaE&\'*a_0%&a_0aa\'0a_6a_,%&aa*%(a_&%.a_&%6%,a34%Pa9&%&+La=&3()6aS&5&aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa5~aaaaaaaaaaaaaaaaaaI,a]2aa4aa2a_&%0a_,aa\'2a_&%.%&aA&%&5&%Ba5`a;&-4%:aO(+&%.aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa?~aaaaaaaaaaaaaaaaaaG.a]2aa4aa2a]&%2a],aa)0aa&%0%&a?&9&%0%(%.a3ba;&-JaQ()&%0aS&7&aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa5~aaaaaaaaaaaaaaaaaaC&)&aa(%.a_0aa\'2a](%0a].aa%,%(aa&%.%&aY&%4\'&%&a5.%&%&\'(%Fa5&%.%NaI&%*)8aQ(/&%(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa5~";
int(*p)()=printf;

// Returns a pointer to the next frame.
void decode_frame_into_buf(const char*frame_ptr){
  int x=0,y=0;
  while(*frame_ptr-126){
    char k=*frame_ptr++-35;
    int n=(k>>1)&31;
    char c=k&1?35:32;
    while(n--)
      if((screen_buf[y][x++]=c),x>=W)
        x=0,y++;
  }
}

// n:spaces to print
void print_spaces(int n){
  // BL+12-n spaces then marker
  while(n<BL+12)p(" "),n++;
  p("//     ");
}

int main() {
	const char *frame_ptr = frame_data;
	for (int i = 0; i < (N%99); frame_ptr++) {
		if (*frame_ptr == '~') {i++;}
	}
	
	memset(screen_buf, 0, sizeof(screen_buf));
	decode_frame_into_buf(frame_ptr);

	// First part: output the quine
	int positionX = 1, positionY = 0;
	int self_printed_already = 0;
	int line_count = 0;
	self_str_ptr2 = self_str_ptr1 = S;
	for (; curr_char = *self_str_ptr1++;) {
		if (positionX == 11 && line_count == 0) {
			// At number N. Read the number at this pointer, increment it, and print it.
			while (curr_char >= '0' && curr_char <= '9') {
				curr_char = *self_str_ptr1++; positionX++;
			}
			p("%d\n", N+1);
			line_count++;
		}
		else if (curr_char == 64 && self_printed_already == 0) {
			self_printed_already = 1;
			for (; curr_char = *self_str_ptr2++;) {
				if (curr_char == '\"' || curr_char == '\\' || curr_char == '\n') {
					p("\\"); positionX++;
				}
				putchar(curr_char == '\n' ? 'n' : curr_char); positionX++;
				if (positionX >= BL) {
					printf("\""); positionX++;
					if (positionY < H) {
						print_spaces(positionX);
						if (line_count >= badAppleOffset) {
							p(screen_buf[positionY++]);
						}
					}
					p("\n\"");
					line_count++;
					positionX = 1;
				}
			}
		} else {
			if (curr_char == '\n') {
				if (positionY < H) {
					print_spaces(positionX);
					if (line_count >= badAppleOffset) {
						p(screen_buf[positionY++]);
					}
				}
				line_count++;
				positionX = -1;
			}
			putchar(curr_char);
			positionX++;
		}
	}
	p("\n");

	// Move cursor to home position
	// printf("\x1b[H");
	// Sleep for 0.1 second
	usleep(100000);
	return 0;
}