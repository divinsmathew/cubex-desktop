#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<Windows.h>
#include<string>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4996)
#endif

bool sp_flag = false;
int scr = 0;

char alg[92][20] = { { "F R' F'" }, { "U' R2" }, { "U F R' F'" }, { "R2" }, { "B' R B" }, { "U R2" }, { "U' F R' F'" }, { "U2 R2" }, { "R'" }, { "D' F D" }, { "D B' D'" }, { "R" }, { "D2 L' D2" }, { "D B D'" }, { "D' F' D" }, { "F2 R' F2" }, { "F' R'" }, { "F2 U' R2" }, { "R D' F D" }, { "B R" }, { "B2 U R2" }, { "L' D' F' D" }, { "L2 U2 R2" },
{ "U' R' F R" }, { "F2" }, { "R' F R" }, { "U F2" }, { "U R' F R" }, { "U2 F2" }, { "L F' L'" }, { "U' F2" }, { "D R' D'" }, { "F" }, { "R2 F R2" }, { "D R D'" }, { "D' L' D" }, { "D2 B D2" }, { "F'" }, { "D' L D" }, { "D R D' F" }, { "R F" }, { "R2 U F2" }, { "B D R D'" }, { "B2 U2 F2" }, { "L' F'" }, { "L2 U' F2" },
{ "U' R B' R'" }, { "U2 B2" }, { "R B' R'" }, { "U' B2" }, { "U R B' R'" }, { "B2" }, { "L' B L" }, { "U B2" }, { "D' R' D" }, { "D2 F D2" }, { "B'" }, { "D' R D" }, { "D L' D'" }, { "B" }, { "D2 F' D2" }, { "D L D'" }, { "F D' R' D" }, { "F2 U2 B2" }, { "R' B'" }, { "R2 U' B2" }, { "B D' R D" }, { "L B" }, { "L2 U B2" },
{ "F' L F" }, { "U L2" }, { "U F' L F" }, { "U2 L2" }, { "B L' B'" }, { "U' L2" }, { "U' F' L F" }, { "L2" }, { "F2 L F2" }, { "D F D'" }, { "D' B' D" }, { "D2 R D2" }, { "L'" }, { "D' B D" }, { "D F' D'" }, { "L" }, { "F L" }, { "F2 U L2" }, { "R D' F D" }, { "R2 U2 L2" }, { "B' L'" }, { "B2 U' L2" }, { "L' D F' D'" } };


char alg_ftl[][50] = { { "R U' R' U' R U R' U2 R U' R'" }, { "R U R' U2 R U' R' U R U R'" }, { "R' U2 R2 U R' U2 R U R'" }, { "R' U R U R U R' U' R U R' U' R U R'" }, { "R' U R2 U2 R' U R U R'" }, { "B' U' B U2 R U2 R' U R U R'" }, { "L U2 L' R U R' U' R U R' U' R U R'" },
{ "L U L' R U2 R' U R U R'" }, { "L' U2 L R U2 R' U R U R'" }, { "L' U2 L R U' R' U2 R U' R'" }, { "F U2 F' R U2 R' U R U R'" }, { "U R U R' U2 R U R'" }, { "U' R U' R' U2 R U' R'" }, { "R U R' U' R U R' U' R U R'" }, { "R U2 R' U R U R'" }, { "R U' R' U2 R U' R'" },
{ "U R U R' U' R U R' U' R U R'" }, { "U R U2 R' U R U R'" }, { "U R U' R' U2 R U' R'" }, { "U2 R U R' U' R U R' U' R U R'" }, { "R U R' U2 R U R'" }, { "U2 R U' R' U2 R U' R'" }, { "U' R U R' U' R U R' U' R U R'" }, { "R U R' U2 R U2 R' U F' U' F" },
{ "R U' R' U F' U' F U' F' U' F" }, { "R U R' U' R U' R' U2 F' U' F" }, { "B U B' U' R U R' U  F' U' F" }, { "R' U2 R U R U' R' U' F' U' F" }, { "R' U2 R U' R U' R' U F' U F" }, { "L U2 L' U2 R U' R' U' F' U' F" }, { "L U2 L' R U' R' U F' U F" }, { "B' U2 B R U' R' U F' U F" },
{ "F U F' R U' R' U' F' U' F" }, { "F U F' U2 R U' R' U F' U F" }, { "L' U' L R U' R' U F' U F" }, { "U F' U' F U' R U R'" }, { "U2 R U' R' U' F' U' F" }, { "R U' R' U F' U F" }, { "U2 F' U' F U' R U R'" }, { "U' R U' R' U' F' U' F" }, { "U R U' R' U F' U F" },
{ "U' F' U' F U' R U R'" }, { "R U R' F R' F' R" }, { "U2 R U' R' U F' U F" }, { "F' U' F U' R U R'" }, { "U R U' R' U' F' U' F" }, { "U' R U' R' U F' U F" }, { "B U B' U' F' U F U R U' R'" }, { "B U B' R U' R' U R U' R'" }, { "R' U R2 U2 R' F' U2 F" },
{ "R' F' U F2 R F'" }, { "B U B' R U2 R' U' R U R'" }, { "B U B' U' R U' R' U R U R'" }, { "R' U2 R B' U2 B R U' R' U2 F' U' F" }, { "R' U2 R B' U2 B U' R U2 R' U F' U' F" }, { "R' U' R F' L U2 L' F" }, { "L' U' L R' U R F R' F' R" }, { "B U2 B' L' R U' R' L" },
{ "R' U2 R F U F2 U2 F" }, { "R' U R F R' F' R" }, { "R' U R U F' U F U' F' U' F" }, { "U B U' B' U2 R U R' U R U' R'" }, { "B U2 B' F' U F U2 R U R'" }, { "R' U R U' R U' R' U2 F' U' F" }, { "R' U R U2 R U2 R' U F' U' F" }, { "U B U2 B' F' U F U2 R U R'" },
{ "U R' U R U' R U' R' U2 F' U' F" }, { "U R' U R U2 R U2 R' U F' U' F" }, { "U2 B U2 B' F' U F U2 R U R'" }, { "U2 R' U R U' R U' R' U2 F' U' F" }, { "U2 R' U R U2 R U2 R' U F' U' F" }, { "R' U R U2 F' U F U R U' R'" }, { "R' U R U' R U' R' U R U' R'" },
{ "R' U R U' R U R' U' R U R'" }, { "R' U R2 U2 R' U2 R U' R'" }, { "R' U R U' R U R' U R U' R'" }, { "R' U R2 U R' U R U R'" }, { "L U L' R' U R U2 R U' R' U R U R'" }, { "L U L' R2 F R2 F'" }, { "B U B' U'  L F' U2 F L'" }, { "L2 U R' U' L2 U2 R2 U' R'" },
{ "R' U R2 L' U' R' L" }, { "B U' B' F U2 F2 U F" }, { "R' U' R2 U R'" }, { "R' U R F' U F U2 R U R'" }, { "U' R2 F R2 F'" }, { "U R' U' R2 U R'" }, { "U R' U R F' U F U2 R U R'" }, { "R2 F R2 F'" }, { "U2 R' U' R2 U R'" }, { "U2 R' U R F' U F U2 R U R'" },
{ "U R2 F R2 F'" }, { "U' R' U' R2 U R'" }, { "U' R' U R F' U F U2 R U R'" }, { "U2 R2 F R2 F'" }, { "L U2 L' R' U' R' U' R' U R U R" }, { "L U2 L' R U' R' U R U' R'" }, { "L U2 L' R U R' U' R U R'" }, { "R' U' R U L B R U2 R' B' L'" }, { "L U L' R' U' R2 U2 R'" },
{ "B' U B2 F' U F B'" }, { "R L U2 R' L'" }, { "L U2 L' R U2 R' U' R U R'" }, { "L U L' R U' R' U R U R'" }, { "L' U L2 U' L' R U' R'" }, { "L U' L2 R U' R' L" }, { "B' U'  B F U2 F2 U F" }, { "U' L U L' R U R'" }, { "U B' U' B F' U' F" }, { "U2 L U' L' U F' U2 F U' R U R'" },
{ "L U L' R U R'" }, { "U2 B' U' B F' U' F" }, { "U' L U' L' U F' U2 F U' R U R'" }, { "U L U L' R U R'" }, { "U' B' U' B F' U' F" }, { "L U' L' U F' U2 F U' R U R'" }, { "U2 L U L' R U R'" }, { "B' U' B F' U' F" }, { "U L U' L' U F' U2 F U' R U R'" },
{ "L U' L' U R U' R' U' F' U F" }, { "R U2 R' L U' L' F R' F' R" }, { "L U' L' R U R' U' F R' F' R" }, { "L U' L' B U B' F' U' F" }, { "B' U B U' R' U' R2  U2 R'" }, { "L U2 L' B F' U F B'" }, { "L U L' R U2 R' U F' U' F" }, { "L U2 L' U2 F2 U2 F U F' U F2" },
{ "L U2 L' R U' R' U2 F' U' F" }, { "L' U L U' L U L' F' U2 F" }, { "F U F' R B' U R' B" }, { "L U' L' U F U F2 U2 F" }, { "U' B' U' B U R U R'" }, { "L U L' F'  U2 F" }, { "U2 R B' U B R'" }, { "B' U' B U R U R'" }, { "U L U L' F' U2 F" }, { "U' R B' U R' B" },
{ "U B' U' B U R U R'" }, { "U2 L U L' F' U2 F" }, { "R B' U B R'" }, { "U2 B' U' B U R U R'" }, { "U' L U L'  F'  U2 F" }, { "U R B' U B R'" }, { "F U2 F2 U F U R U' R'" }, { "F U' F2 U2 F R U2 R'" }, { "L' U' L R U2 R'  F' U2 F" }, { "R'  U R U L' U' L U F' U' F" },
{ "F U2 F' R' U' R2 U2 R'" }, { "L' U2 L B F'  U F B'" }, { "L U2 L2 U' L U F' U' F" }, { "F U F' B' R U2 R' B" }, { "L' U L2 U L' F' U F" }, { "L' U2 L F'  U F" }, { "L' U' L U F'  U F U' F' U' F" }, { "L' U' L F' U2 F U F' U' F" }, { "U2 F U F' U R U R'" },
{ "L' U' L U F' U' F" }, { "F U' F' R U2 R' U' R U R'" }, { "U' F U F'  U R U R'" }, { "U L' U' L U F' U' F" }, { "U F U' F' R U2 R' U' R U R'" }, { "F U F' U R U R'" }, { "U2 L' U' L U F' U' F" }, { "U2 F  U' F' R U2 R' U' R U R'" }, { "U F U F' U R U R'" },
{ "U' L' U' L U F' U' F" }, { "U' F U' F' R U2 R' U' R U R'" }, { "L' U L F' U F U R U' R'" }, { "R U R' F2 R' F2 R" }, { "F' U' F U2 F2 R' F2 R" }, { "R' U R U F U F2 U' F" }, { "B U2  B' F2 R' F2 R" }, { "R' U2 R F2 R' F2 R" }, { "L U2 L' F U F2 U' F" }, { "L U L' U2 F2 R' F2 R" },
{ "B' U' B F2 R' F2 R" }, { "F U2 F' R U2 R' U F' U' F" }, { "L' U' L F' U F U2 R U R'" }, { "L' U' L U2 R2 U2 R' U' R U' R2" }, { "U' L' U L R U R'" }, { "F U F2 U' F" }, { "U F2 R' F2 R" }, { "L' U L R U R'" }, { "U F U F2 U' F" }, { "U2 F2 R' F2 R" }, { "U L' U L R U R'" },
{ "U2 F U F2 U' F" }, { "U' F2 R' F2 R" }, { "U2 L' U L R U R'" }, { "U' F U F2 U' F" }, { "F2 R' F2 R" }, { "U R U' R' U' F' U F" }, { "F' U' F U F' U' F" }, { "F' U F2 R' F' R" }, { "B U B' F' U' F" }, { "R' U2 R U' F' U' F" }, { "U' F' B U F B'" }, { "U' L U L' U F' U' F" },
{ "L U' L' U2 F' U' F" }, { "U2 L F' U2 F L'" }, { "U2 F U' F' U F' U2 F" }, { "U L' U' L F' U' F" }, { "U F U F2 U2 F" }, { "F R' F' R" }, { "U F' U F U' F' U' F" }, { "F' U2 F U F' U' F" }, { "U2 F' U' F U2 F' U F" }, { "U F' U' F" }, { "F' U2 F U' F' U F" },
{ "U' F' U2 F U2 F' U F" }, { "U' F' U' F U' F' U' F" }, { "F' U' F U' F' U F" }, { "U' R U' R' U2 F' U' F" }, { "U2 R U2 R' U F' U' F" }, { "U F2 U2 F U F' U F2" }, { "U2 F' U F U R U' R'" }, { "U' R U' R' U R U' R'" }, { "U' R U R' U' R U R'" }, { "U R' U' R U2 R U R'" },
{ "U2 R' U2 R2 U' R'" }, { "R' U R U R U R'" }, { "B' U' B U' R U R'" }, { "U L U' L' R U2 R'" }, { "L U2 L' R U R'" }, { "U' L' U' L R U R'" }, { "R L' U' R' L" }, { "U2 L' U L U' R U R'" }, { "U F' U2 F U' R U R'" }, { "F' U F U2 R U R'" }, { "U2 R2 U2 R' U' R U' R2" },
{ "R U R' U R U R'" }, { "R U2 R' U2 R U' R'" }, { "U' R U R' U R U' R'" }, { "U2 R U R'" }, { "U R U R' U2 R U' R'" }, { "U' R U2 R' U R U' R'" }, { "U2 R U' R' U R U R'" }, { "R U' R'" }, { "U' R U2 R' U' R U R'" }, { "U2 R U' R' U' F' U F" }, { "U F' U' F U F' U' F" },
{ "U R U R' U2 F' U F" }, { "U B U B' F' U' F" }, { "U R' U2 R U' F' U' F" }, { "F' B U F B'" }, { "L U L' U F' U' F" }, { "U L U' L' U2 F' U' F" }, { "U' L F' U2 F L'" }, { "U' F U' F' U F' U2 F" }, { "U2 L' U' L F' U' F" }, { "U2 F U F2 U2 F" }, { "R U' R' U2 F' U' F" },
{ "U' R U2 R' U F' U' F" }, { "U2 F2 U2 F U F' U F2" }, { "F' U F" }, { "U2 F' U F U' F' U' F" }, { "U F' U2 F U F' U' F" }, { "U' F' U' F U2 F' U F" }, { "U2 F' U' F" }, { "U F' U2 F U' F' U F" }, { "F' U2 F U2 F' U F" }, { "F' U' F U' F' U' F" }, { "U F' U' F U' F' U F" },
{ "U' F' U F U R U' R'" }, { "R U' R' U R U' R'" }, { "R U R' U' R U R'" }, { "U2 R' U' R U2 R U R'" }, { "U' R' U2 R2 U' R'" }, { "U R' U R U R U R'" }, { "U B' U' B U' R U R'" }, { "U2 B' R U2 R' B" }, { "U L U2 L' R U R'" }, { "L' U' L R U R'" }, { "U L' R U' R' L" },
{ "F U2 F' U R U R'" }, { "U' R U' R' U R U R'" }, { "R' F R F'" }, { "R U2 R' U' R U R'" }, { "U2 F' U2 F U' R U R'" }, { "U F' U F U2 R U R'" }, { "U' R2 U2 R' U' R U' R2" }, { "U R U R' U R U R'" }, { "U R U2 R' U2 R U' R'" }, { "R U R' U R U' R'" }, { "U' R U R'" },
{ "U2 R U R' U2 R U' R'" }, { "R U2 R' U R U' R'" }, { "U' R U' R' U' F' U F" }, { "U2 F' U' F U F' U' F" }, { "U2 R U R' U2 F' U F" }, { "U2 B U B' F' U' F" }, { "U2 R' U2 R U' F' U' F" }, { "U F' B U F B'" }, { "U L U L' U F' U' F" }, { "U2 L U' L' U2 F' U' F" }, { "L F' U2 F L'" },
{ "F U' F' U F' U2 F" }, { "U' L' U' L F' U' F" }, { "U' F U F2 U2 F" }, { "U F' U2 F U2 F' U F" }, { "U F' U' F U' F' U' F" }, { "U2 F' U' F U' F' U F" }, { "U R U' R' U2 F' U' F" }, { "R U2 R' U F' U' F" }, { "U' F2 U2 F U F' U F2" }, { "F' U2 F" }, { "U' F' U F U' F' U' F" },
{ "U2 F' U2 F U F' U' F" }, { "F' U' F U2 F' U F" }, { "U' F' U' F" }, { "U2 F' U2 F U' F' U F" }, { "F' U F U R U' R'" }, { "U R U' R' U R U' R'" }, { "U R U R' U' R U R'" }, { "U' R' U' R U2 R U R'" }, { "R' U' R2 U2 R'" }, { "U2 R' U R U R U R'" }, { "U2 B' U' B U' R U R'" },
{ "U' B' R U2 R' B" }, { "U2 L U2 L' R U R'" }, { "U L' U' L R U R'" }, { "U2 L' R U' R' L" }, { "U F U2 F' U R U R'" }, { "R U R'" }, { "U' R U R' U2 R U' R'" }, { "U R U2 R' U R U' R'" }, { "R U' R' U R U R'" }, { "U' R U2 R'" }, { "U R U2 R' U' R U R'" },
{ "U' F' U2 F U' R U R'" }, { "U2 F' U F U2 R U R'" }, { "R2 U2 R' U' R U' R2" }, { "U2 R U R' U R U R'" }, { "U2 R U2 R' U2 R U' R'" }, { "U R U R' U R U' R'" }, { "R U' R' U' F' U F" }, { "U' F' U' F U F' U' F" }, { "U' R U2 R' F' U2 F" }, { "U' B U B' F' U' F" },
{ "U' R' U2 R U' F' U' F" }, { "U2 F' B U F B'" }, { "U2 L U L' U F' U' F" }, { "U' L U' L' U2 F' U' F" }, { "U L F' U2 F L'" }, { "U F U' F' U F' U2 F" }, { "L' U' L F' U' F" }, { "F U F2 U2 F" }, { "U F' U' F U2 F' U F" }, { "F' U' F" }, { "U' F' U2 F U' F' U F" },
{ "U2 F' U2 F U2 F' U F" }, { "U2 F' U' F U' F' U' F" }, { "U' F' U' F2 R' F' R" }, { "U2 R U' R' U2 F' U' F" }, { "U R U2 R' U F' U' F" }, { "F2 U2 F U F' U F2" }, { "U F' U2 F" }, { "F' U F U' F' U' F" }, { "U' F' U2 F U F' U' F" }, { "U F' U F U R U' R'" },
{ "U2 R U' R' U R U' R'" }, { "U2 R U R' U' R U R'" }, { "R' U' R U2 R U R'" }, { "U R' U' R2 U2 R'" }, { "U' R' U R U R U R'" }, { "U' B' U' B U' R U R'" }, { "B' R U2 R' B" }, { "U' L U2 L' R U R'" }, { "U2 L' U' L R U R'" }, { "U' L' R U' R' L" }, { "U2 F U2 F' U R U R'" },
{ "U' R U R' U R U R'" }, { "U' R U2 R' U2 R U' R'" }, { "U2 R U R' U R U' R'" }, { "U R U R'" }, { "R U R' U2 R U' R'" }, { "U2 R U2 R' U R U' R'" }, { "U R U' R' U R U R'" }, { "R U2 R'" }, { "U2 R U2 R' U' R U R'" }, { "F' U2 F U' R U R'" }, { "U' F' U F U2 R U R'" }, { "U R2 U2 R' U' R U' R2" } };


char alg_oll[58][50] = { { "R U R' U R U2 R'" }, { "R U2 R' U' R U' R'" }, { "R U2 R2 U' R2 U' R2 U2 R" }, { "F R U R' U' R U R' U' R U R' U' F'" }, { "L F R' F' L' F R F'" }, { "F' L F R' F' L' F R" }, { "R2 D R' U2 R D' R' U2 R'" }, { "" },
{ "R U R' U' R' L F R F' L'" }, { "L F R' F' L' R U R U' R'" }, { "B U L U' L' B'" }, { "B' U' R' U R B" }, { "R U B' U' R' U R B R'" }, { "R' U' F U R U' R' F' R" }, { "R U R' U R U' R' U' R' F R F'" }, { "L' U' L U' L' U L U L F' L' F" },
{ "L F2 R' F' R F' L'" }, { "L' B2 R B R' B L" }, { "F R U R' U' R U R' U' F'" }, { "F' L' U' L U L' U' L U F" }, { "R' F' L F' L' F L F' L' F2 R" }, { "L F R' F R F' R' F R F2 L'" }, { "R' F R' F' R2 U2 B' R B R'" }, { "R' F R2 B' R2 F' R2 B R'" },
{ "R U R' U' R' F R2 U R' U' F'" }, { "R U R' U R' F R F' R U2 R'" }, { "R U2 R2 F R F' R U2 R'" }, { "F R U' R' U' R U R' F'" }, { "R2 U R' B' R U' R2 U R B R'" }, { "R U R' U' R U' R' F' U' F R U R'" }, { "R U R' U R U2 R' F R U R' U' F'" },
{ "R' F R F' R' F R F' R U R' U' R U R'" }, { "L F R' F R F2 L'" }, { "L' B' R B' R' B2 L" }, { "L F R' F R' D R D' R F2 L'" }, { "F R U R' U' F' U F R U R' U' F'" }, { "R B' R' U' R U B U' R'" }, { "R' F R U R' U' F' U R" },
{ "R' U' R' F R F' U R" }, { "R U R2 U' R' F R U R U' F'" }, { "F R U R' U' F'" }, { "R U R' U' R' F R F'" }, { "R' U2 R2 U R' U R U2 B' R' B" }, { "R' U' R U' R' U F' U F R" }, { "F R U R' U' R F' L F R' F' L'" },
{ "B U L U' L' U L U' L' B'" }, { "L F L' R U R' U' L F' L'" }, { "R' F' R L' U' L U R' F R" }, { "F U R U' R2 F' R U R U' R'" }, { "R' F R U R' F' R F U' F'" }, { "R U2 R2 F R F' U2 R' F R F'" }, { "F R U R' U' F' B U L U' L' B'" },
{ "B U L U' L' B' U' F R U R' U' F'" }, { "B U L U' L' B' U F R U R' U' F'" }, { "F R U R' U F' U2 F' L F L'" }, { "R L' B R B R' B' L R2 F R F'" }, { "R U R' U R' F R F' U2 R' F R F'" }, { "R L' B R B R' B' R2 L2 F R F' L'" } };


char alg_pll[][50] = { { "R2 U R U R' U' R' U' R' U R'" }, { "R U' R U R U R U' R' U' R2" }, { "U2 R U R' U R' U' R' U R U' R' U' R2 U R" }, { "R2 L2 D R2 L2 U2 R2 L2 D R2 L2" }, { "R' F R' B2 R F' R' B2 R2" }, { "R B' R F2 R' B R F2 R2" },
{ "R B' R' F R B R' F' R B R' F R B' R' F'" }, { "" }, { "L U2 L' U2 L F' L' U' L U L F L2 U" }, { "R' U2 R U2 R' F R U R' U' R' F' R2 U'" }, { "R U R' U' R' F R2 U' R' U' R U R' F'" }, { "R' U' F' R U R' U' R' F R2 U' R' U' R U R' U R" },
{ "R' U L' U2 R U' R' U2 R L" }, { "R U R' F' R U R' U' R' F R2 U' R'" }, { "F' U F' U' R' F' R2 U' R' U R' F R F" }, { "F R U' R' U' R U R' F' R U R' U' R' F R F'" }, { "L U' R U2 L' U R' L U' R U2 L' U R'" }, { "R' U L' U2 R U' L R' U L' U2 R U' L" },
{ "R2 D B' U B' U' B D' R2 F' U F" }, { "R2 D' F U' F U F' D R2 B U' B'" }, { "R U R' F2 D' L U' L' U L' D F2" }, { "R' U' R B2 D L' U L U' L D' B2" } };


int ar[48] = { 290, 255, 326, 255, 335, 255, 270, 268, 320, 268, 260, 279, 285, 279, 310, 279, 240, 289, 275, 289, 310, 289, 240, 324, 310, 324, 240, 369, 275, 369, 310, 369, 332, 313, 350, 289, 360, 289, 332, 350, 360, 325, 332, 389, 346, 345, 360, 367 };
int tfr[24] = { 42, 39, 36, 43, 37, 44, 41, 38, 0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17 };


int ocap[232][8] = { { 39, 43, 37, 44, 41, 2, 11, 20 }, { 43, 41, 39, 38, 37, 11, 20, 29 }, { 41, 37, 43, 36, 39, 20, 29, 2 }, { 37, 39, 41, 42, 43, 29, 2, 11 }, { 39, 36, 43, 37, 41, 0, 9, 27 }, { 43, 42, 41, 39, 37, 9, 18, 0 },
{ 41, 44, 37, 43, 39, 18, 27, 9 }, { 37, 38, 39, 41, 43, 27, 0, 18 }, { 39, 43, 37, 41, 2, 18, 27, 29 }, { 43, 41, 39, 37, 11, 27, 0, 2 }, { 41, 37, 43, 39, 20, 0, 9, 11 }, { 37, 39, 41, 43, 29, 9, 18, 20 }, { 39, 43, 37, 41, 0, 2, 18, 20 },
{ 43, 41, 39, 37, 9, 11, 27, 29 }, { 41, 37, 43, 39, 18, 20, 0, 2 }, { 37, 39, 41, 43, 27, 29, 9, 11 }, { 39, 36, 43, 37, 41, 38, 0, 20 }, { 43, 42, 41, 39, 37, 36, 9, 29 }, { 41, 44, 37, 43, 39, 42, 18, 2 }, { 37, 38, 39, 41, 43, 44, 27, 11 },
{ 39, 36, 43, 37, 44, 41, 2, 27 }, { 43, 42, 41, 39, 38, 37, 11, 0 }, { 41, 44, 37, 43, 36, 39, 20, 9 }, { 37, 38, 39, 41, 42, 43, 29, 18 }, { 42, 39, 36, 43, 37, 41, 0, 2 }, { 44, 43, 42, 41, 39, 37, 9, 11 }, { 38, 41, 44, 43, 37, 39, 18, 20 },
{ 36, 37, 38, 39, 41, 43, 27, 29 }, { 0 }, { 0 }, { 0 }, { 0 }, { 42, 36, 43, 37, 44, 38, 1, 19 }, { 44, 42, 41, 39, 38, 36, 10, 28 }, { 38, 44, 37, 43, 36, 42, 19, 1 }, { 36, 38, 39, 41, 42, 44, 28, 10 }, { 42, 36, 43, 44, 38, 39, 1, 10 },
{ 44, 42, 43, 41, 38, 36, 10, 19 }, { 38, 41, 44, 37, 36, 42, 19, 28 }, { 36, 37, 38, 39, 42, 44, 28, 1 }, { 36, 37, 41, 38, 27, 28, 29, 19 }, { 42, 39, 37, 36, 0, 1, 2, 28 }, { 44, 43, 39, 42, 9, 10, 11, 1 }, { 38, 41, 43, 44, 18, 19, 20, 10 },
{ 42, 43, 44, 41, 9, 10, 11, 19 }, { 44, 41, 38, 37, 18, 19, 20, 28 }, { 36, 37, 38, 39, 27, 28, 29, 1 }, { 36, 39, 42, 43, 0, 1, 2, 10 }, { 36, 37, 38, 41, 0, 28, 19, 20 }, { 42, 39, 36, 37, 9, 1, 28, 29 }, { 44, 43, 42, 39, 18, 10, 2, 1 },
{ 38, 41, 44, 43, 27, 19, 11, 10 }, { 39, 36, 37, 38, 0, 1, 28, 20 }, { 43, 42, 39, 36, 9, 10, 1, 29 }, { 41, 43, 44, 42, 18, 19, 10, 2 }, { 37, 38, 41, 44, 27, 28, 19, 11 }, { 36, 43, 39, 44, 10, 9, 1, 20 }, { 42, 43, 41, 38, 10, 18, 19, 29 },
{ 44, 41, 37, 36, 19, 27, 28, 2 }, { 38, 37, 39, 42, 28, 0, 1, 11 }, { 42, 39, 37, 38, 1, 18, 28, 29 }, { 44, 43, 39, 36, 10, 27, 1, 2 }, { 41, 38, 43, 42, 19, 0, 10, 11 }, { 36, 37, 41, 44, 28, 9, 19, 20 }, { 39, 36, 37, 0, 1, 9, 28, 27 },
{ 43, 42, 39, 9, 10, 18, 0, 1 }, { 41, 44, 43, 18, 19, 27, 9, 10 }, { 37, 38, 41, 27, 28, 0, 18, 19 }, { 41, 37, 38, 28, 29, 19, 20, 11 }, { 39, 36, 37, 1, 2, 28, 29, 20 }, { 43, 42, 39, 10, 11, 29, 2, 1 }, { 41, 43, 44, 2, 19, 20, 10, 11 },
{ 39, 43, 1, 2, 10, 18, 27, 29 }, { 43, 41, 10, 11, 19, 27, 0, 2 }, { 41, 37, 19, 20, 28, 0, 9, 11 }, { 37, 39, 28, 29, 1, 9, 18, 20 }, { 39, 37, 11, 9, 0, 1, 28, 20 }, { 43, 39, 18, 20, 9, 10, 1, 29 }, { 41, 43, 27, 29, 18, 19, 10, 2 },
{ 37, 41, 0, 2, 27, 28, 19, 11 }, { 39, 43, 27, 29, 1, 9, 10, 11 }, { 43, 41, 0, 2, 10, 18, 19, 20 }, { 41, 37, 9, 11, 19, 27, 28, 29 }, { 37, 39, 18, 20, 28, 0, 1, 2 }, { 39, 37, 27, 28, 29, 1, 9, 11 }, { 43, 39, 0, 1, 2, 10, 18, 20 },
{ 41, 43, 9, 10, 11, 19, 27, 29 }, { 37, 41, 18, 19, 20, 28, 0, 2 }, { 39, 37, 27, 28, 29, 1, 2, 18 }, { 43, 39, 0, 1, 2, 10, 11, 27 }, { 41, 43, 9, 10, 11, 19, 20, 0 }, { 37, 41, 28, 29, 9, 18, 19, 20 }, { 39, 43, 0, 1, 20, 9, 10, 11 },
{ 43, 41, 9, 10, 29, 18, 19, 20 }, { 41, 37, 18, 19, 2, 27, 28, 29 }, { 37, 39, 27, 28, 11, 0, 1, 2 }, { 39, 43, 38, 27, 18, 10, 0, 1 }, { 43, 41, 36, 0, 27, 19, 9, 10 }, { 41, 37, 42, 9, 0, 28, 18, 19 }, { 37, 39, 44, 18, 9, 1, 27, 28 },
{ 36, 43, 41, 29, 2, 10, 19, 20 }, { 42, 41, 37, 2, 11, 19, 28, 29 }, { 44, 37, 39, 11, 20, 28, 1, 2 }, { 38, 39, 43, 20, 29, 1, 10, 11 }, { 42, 37, 41, 38, 0, 11, 19, 28 }, { 44, 39, 37, 36, 9, 20, 28, 1 }, { 38, 43, 39, 42, 18, 29, 1, 10 },
{ 36, 41, 43, 44, 27, 2, 10, 19 }, { 42, 39, 43, 38, 0, 1, 10, 11 }, { 44, 43, 41, 36, 9, 10, 19, 20 }, { 38, 41, 37, 42, 18, 19, 28, 29 }, { 36, 37, 39, 44, 27, 28, 1, 2 }, { 42, 36, 37, 41, 28, 29, 9, 19 }, { 44, 42, 39, 37, 18, 28, 1, 2 },
{ 38, 44, 43, 39, 27, 1, 10, 11 }, { 36, 38, 41, 43, 0, 10, 19, 20 }, { 39, 36, 43, 38, 0, 1, 10, 20 }, { 43, 42, 41, 36, 9, 10, 19, 29 }, { 41, 44, 37, 42, 18, 19, 28, 2 }, { 37, 38, 39, 44, 27, 28, 1, 11 }, { 39, 43, 44, 38, 18, 20, 10, 1 },
{ 43, 41, 38, 36, 10, 19, 27, 29 }, { 41, 37, 36, 42, 19, 28, 0, 2 }, { 37, 39, 42, 44, 28, 1, 9, 11 }, { 39, 36, 43, 38, 1, 10, 27, 29 }, { 43, 42, 41, 36, 10, 19, 0, 2 }, { 41, 44, 37, 42, 19, 28, 9, 11, }, { 37, 38, 39, 44, 28, 1, 18, 20 },
{ 39, 43, 44, 1, 2, 10, 11, 20 }, { 43, 41, 38, 10, 11, 19, 20, 29 }, { 41, 37, 36, 19, 20, 28, 29, 2 }, { 37, 39, 42, 28, 29, 1, 2, 11 }, { 42, 43, 41, 0, 9, 10, 18, 19 }, { 44, 41, 37, 9, 18, 19, 27, 28 }, { 38, 37, 39, 18, 27, 28, 0, 1 },
{ 39, 36, 43, 27, 0, 1, 9, 10 }, { 39, 36, 43, 29, 1, 2, 10, 20 }, { 42, 43, 41, 10, 11, 19, 29, 2 }, { 44, 41, 37, 11, 19, 20, 28, 2 }, { 38, 37, 39, 20, 28, 29, 1, 11 }, { 36, 37, 41, 0, 9, 19, 27, 28 }, { 42, 39, 37, 9, 18, 28, 1, 0 },
{ 43, 44, 39, 18, 27, 1, 10, 9 }, { 38, 41, 43, 27, 0, 10, 18, 19 }, { 36, 37, 43, 44, 1, 2, 19, 27 }, { 42, 39, 41, 38, 10, 11, 28, 0 }, { 44, 43, 37, 36, 19, 20, 1, 9 }, { 38, 41, 39, 42, 28, 29, 10, 18 }, { 42, 43, 37, 38, 29, 1, 18, 19 },
{ 44, 41, 39, 36, 2, 10, 27, 28 }, { 38, 37, 43, 42, 11, 19, 0, 1 }, { 36, 39, 41, 44, 20, 28, 9, 10 }, { 42, 39, 44, 41, 9, 10, 11, 28 }, { 44, 43, 38, 37, 18, 19, 20, 1 }, { 38, 41, 36, 39, 27, 28, 29, 10 }, { 36, 37, 42, 43, 0, 1, 2, 19 },
{ 44, 43, 37, 38, 1, 27, 11, 19 }, { 41, 38, 39, 36, 10, 0, 20, 28 }, { 37, 36, 43, 42, 19, 9, 29, 1 }, { 39, 42, 44, 41, 28, 18, 2, 10 }, { 43, 37, 36, 38, 19, 1, 27, 29 }, { 41, 39, 42, 36, 10, 28, 0, 2 }, { 37, 43, 42, 44, 1, 19, 9, 11 },
{ 39, 41, 44, 38, 28, 10, 18, 20 }, { 43, 37, 36, 38, 0, 1, 19, 20 }, { 41, 39, 42, 36, 9, 10, 28, 29 }, { 37, 43, 44, 42, 18, 19, 1, 2 }, { 39, 41, 38, 44, 27, 28, 10, 11 }, { 39, 41, 27, 28, 29, 9, 10, 11 }, { 43, 37, 0, 1, 2, 18, 19, 20 },
{ 41, 39, 9, 10, 11, 27, 28, 29 }, { 37, 43, 18, 19, 20, 0, 1, 2 }, { 39, 41, 20, 28, 0, 9, 10, 11 }, { 29, 1, 9, 43, 37, 18, 19, 20 }, { 41, 39, 2, 18, 10, 27, 28, 29 }, { 37, 43, 27, 11, 19, 0, 1, 2 }, { 43, 37, 27, 29, 19, 1, 9, 11 },
{ 41, 39, 0, 2, 28, 10, 18, 20 }, { 37, 43, 9, 11, 1, 19, 27, 29 }, { 39, 41, 18, 20, 10, 28, 0, 2 }, { 43, 37, 27, 29, 1, 2, 18, 19 }, { 41, 39, 0, 2, 10, 11, 27, 28 }, { 37, 43, 9, 11, 19, 20, 0, 1 }, { 39, 41, 18, 20, 28, 29, 9, 10 },
{ 36, 43, 37, 0, 1, 9, 19, 27 }, { 42, 41, 39, 9, 10, 18, 28, 0 }, { 44, 37, 43, 18, 19, 27, 1, 9 }, { 38, 39, 41, 27, 28, 0, 10, 18 }, { 42, 43, 37, 1, 2, 11, 19, 29 }, { 44, 41, 39, 10, 11, 20, 28, 2 }, { 38, 37, 43, 19, 20, 29, 1, 11 },
{ 36, 39, 41, 28, 29, 2, 10, 20 }, { 44, 43, 37, 1, 2, 19, 20, 11 }, { 38, 41, 39, 10, 11, 28, 29, 20 }, { 36, 37, 43, 19, 20, 2, 1, 29 }, { 42, 39, 41, 28, 29, 10, 11, 2 }, { 43, 37, 38, 1, 0, 18, 19, 27 }, { 41, 39, 36, 9, 10, 27, 28, 0 },
{ 43, 37, 42, 19, 18, 0, 1, 9 }, { 39, 41, 44, 27, 28, 9, 10, 18 }, { 27, 28, 29, 19, 1, 9, 10, 11 }, { 0, 1, 2, 10, 28, 18, 19, 20 }, { 10, 9, 11, 27, 28, 29, 19, 1 }, { 18, 19, 20, 0, 1, 2, 28, 10 }, { 27, 28, 29, 1, 2, 10, 18, 19 },
{ 0, 1, 2, 10, 11, 19, 27, 28 }, { 9, 10, 11, 19, 20, 28, 0, 1 }, { 18, 19, 20, 28, 29, 1, 9, 10 }, { 38, 1, 10, 11, 19, 20, 28, 29 }, { 36, 10, 19, 20, 28, 29, 1, 2 }, { 42, 19, 28, 29, 1, 2, 10, 11 }, { 44, 28, 1, 2, 10, 11, 19, 20 },
{ 36, 0, 1, 9, 10, 19, 27, 28 }, { 42, 9, 10, 18, 19, 28, 0, 1 }, { 44, 18, 19, 27, 28, 1, 9, 10 }, { 38, 27, 28, 0, 1, 10, 18, 19 }, { 18, 19, 20, 44, 38, 28, 10, 1 }, { 38, 36, 10, 27, 28, 29, 1, 19 }, { 36, 42, 0, 1, 2, 10, 28, 19 },
{ 42, 44, 28, 19, 1, 10, 9, 11 }, { 42, 36, 28, 29, 9, 10, 19, 1 }, { 44, 42, 1, 2, 18, 19, 28, 10 }, { 38, 44, 10, 11, 27, 28, 19, 1 }, { 36, 38, 19, 20, 0, 1, 10, 28 }, { 42, 38, 28, 29, 1, 10, 18, 19 }, { 44, 36, 1, 2, 10, 19, 27, 28 },
{ 38, 42, 10, 11, 19, 28, 1, 0 }, { 36, 44, 19, 20, 28, 1, 9, 10 }, { 42, 36, 44, 38, 1, 10, 19, 28 }, { 42, 36, 44, 38, 1, 10, 19, 28 }, { 42, 36, 44, 38, 1, 10, 19, 28 }, { 42, 36, 44, 38, 1, 10, 19, 28 } };

int pcap[88][4][3] = { { { 0, 2, 10 }, { 9, 11, 28 }, { 18, 19, 20 }, { 1, 27, 29 } }, { { 9, 11, 19 }, { 1, 18, 20, }, { 27, 28, 29 }, { 0, 2, 10 } }, { { 18, 20, 28 }, { 10, 27, 29 }, { 0, 1, 2 }, { 9, 11, 19 } }, { { 27, 29, 1 }, { 19, 0, 2 }, { 9, 10, 11 }, { 18, 20, 28 } },
{ { 28, 0, 2 }, { 1, 9, 11 }, { 18, 19, 20 }, { 27, 29, 10 } }, { { 1, 9, 11 }, { 10, 18, 20 }, { 27, 28, 29 }, { 0, 2, 19 } }, { { 10, 18, 20 }, { 19, 27, 29 }, { 0, 1, 2 }, { 9, 11, 28 } }, { { 19, 27, 29 }, { 28, 0, 2 }, { 9, 10, 11 }, { 18, 20, 1 } },
{ { 0, 2, 10 }, { 1, 9, 11 }, { 18, 20, 28 }, { 19, 27, 29 } }, { { 9, 11, 19 }, { 10, 18, 20 }, { 29, 27, 1 }, { 28, 0, 2 } }, { { 18, 20, 28 }, { 19, 27, 29 }, { 0, 2, 10 }, { 1, 9, 11 } }, { { 27, 29, 1 }, { 28, 0, 2 }, { 9, 11, 19 }, { 10, 18, 20 } },
{ { 28, 9, 11 }, { 1, 18, 20 }, { 27, 29, 11 }, { 0, 2, 19 } }, { { 1, 18, 20 }, { 10, 27, 29 }, { 0, 2, 19 }, { 28, 9, 11 } }, { { 10, 27, 29 }, { 0, 2, 19 }, { 9, 11, 28 }, { 1, 18, 20 } }, { { 0, 2, 19 }, { 9, 11, 28 }, { 1, 18, 20 }, { 10, 27, 29 } },
{ { 0, 1, 11 }, { 10, 18, 20 }, { 2, 27, 19 }, { 28, 29, 9 } }, { { 9, 10, 20 }, { 27, 29, 19 }, { 0, 11, 28 }, { 1, 2, 18 } }, { { 18, 19, 29 }, { 0, 2, 28 }, { 1, 9, 20 }, { 10, 11, 27 } }, { { 27, 28, 2 }, { 1, 9, 11 }, { 10, 18, 29 }, { 0, 19, 20 } },
{ { 29, 1, 18 }, { 0, 2, 10 }, { 19, 20, 9 }, { 11, 27, 28 } }, { { 2, 10, 27 }, { 9, 11, 19 }, { 18, 28, 29 }, { 20, 0, 1 } }, { { 11, 19, 0 }, { 18, 20, 28 }, { 27, 1, 2 }, { 29, 9, 10 } }, { { 20, 28, 9 }, { 27, 29, 1 }, { 0, 10, 11 }, { 18, 19, 2 } },
{ { 27, 11, 1 }, { 2, 18, 10 }, { 29, 9, 19 }, { 0, 20, 28 } }, { { 0, 20, 10 }, { 11, 27, 19 }, { 2, 18, 28 }, { 1, 29, 9 } }, { { 29, 9, 19 }, { 0, 20, 28 }, { 1, 27, 11 }, { 2, 18, 10 } }, { { 28, 2, 18 }, { 1, 29, 9 }, { 0, 20, 10 }, { 27, 11, 19 } },
{ { 0, 1, 2 }, { 9, 10, 11 }, { 18, 19, 20 }, { 27, 28, 29 } }, { { 9, 10, 11 }, { 18, 19, 20 }, { 27, 28, 29 }, { 0, 1, 2 } }, { { 18, 19, 20 }, { 27, 28, 29 }, { 0, 1, 2 }, { 9, 10, 11 } }, { { 27, 28, 29 }, { 0, 1, 2 }, { 9, 10, 11 }, { 18, 19, 20 } },
{ { 0, 2, 28 }, { 9, 10, 20 }, { 11, 19, 27 }, { 1, 18, 29 } }, { { 1, 9, 11 }, { 29, 18, 19 }, { 0, 28, 20 }, { 2, 27, 10 } }, { { 18, 20, 10 }, { 2, 27, 28 }, { 29, 1, 9 }, { 0, 11, 19 } }, { { 27, 29, 19 }, { 0, 1, 11 }, { 2, 10, 18 }, { 28, 20, 9 } },
{ { 0, 2, 10 }, { 1, 9, 20 }, { 11, 19, 27 }, { 18, 28, 29 } }, { { 9, 11, 19 }, { 18, 29, 10 }, { 0, 28, 20 }, { 1, 2, 27 } }, { { 18, 20, 28 }, { 2, 27, 19 }, { 29, 1, 9 }, { 0, 10, 11 } }, { { 27, 29, 1 }, { 0, 28, 11 }, { 2, 10, 18 }, { 9, 19, 20 } },
{ { 0, 1, 11 }, { 2, 28, 18 }, { 9, 19, 20 }, { 10, 27, 29 } }, { { 9, 10, 20 }, { 1, 11, 27 }, { 28, 29, 18 }, { 0, 2, 19 } }, { { 18, 19, 29 }, { 0, 10, 20 }, { 1, 2, 27 }, { 28, 9, 11 } }, { { 27, 28, 2 }, { 9, 29, 19 }, { 0, 10, 11 }, { 1, 18, 20 } },
{ { 0, 11, 19 }, { 2, 10, 18 }, { 1, 9, 20 }, { 27, 28, 29 } }, { { 9, 28, 20 }, { 11, 27, 19 }, { 29, 10, 18 }, { 0, 1, 2 } }, { { 29, 1, 18 }, { 0, 20, 28 }, { 2, 27, 19 }, { 9, 10, 11 } }, { { 2, 10, 27 }, { 1, 9, 29 }, { 0, 28, 11 }, { 18, 19, 20 } },
{ { 9, 10, 20 }, { 11, 27, 28 }, { 29, 18, 19 }, { 0, 1, 2 } }, { { 29, 18, 19 }, { 0, 1, 20 }, { 2, 27, 28 }, { 9, 10, 11 } }, { { 27, 28, 2 }, { 29, 9, 10 }, { 0, 1, 11 }, { 18, 19, 20 } }, { { 0, 1, 11 }, { 2, 18, 19 }, { 9, 10, 20 }, { 27, 28, 29 } },
{ { 1, 2, 18 }, { 9, 19, 20 }, { 27, 28, 29 }, { 0, 10, 11 } }, { { 27, 10, 11 }, { 28, 29, 18 }, { 0, 1, 2 }, { 19, 20, 9 } }, { { 0, 20, 19 }, { 27, 1, 2 }, { 11, 9, 10 }, { 18, 29, 28 } }, { { 28, 29, 9 }, { 0, 10, 11 }, { 18, 19, 20 }, { 1, 2, 27 } },
{ { 2, 10, 18 }, { 1, 9, 29 }, { 0, 19, 20 }, { 27, 28, 11 } }, { { 27, 19, 11 }, { 2, 10, 18 }, { 28, 29, 9 }, { 0, 1, 20 } }, { { 0, 28, 20 }, { 27, 11, 19 }, { 1, 2, 18 }, { 29, 9, 10 } }, { { 1, 29, 9 }, { 0, 28, 20 }, { 27, 10, 11 }, { 2, 18, 19 } },
{ { 0, 1, 20 }, { 10, 11, 27 }, { 2, 28, 18 }, { 29, 29, 19 } }, { { 9, 10, 29 }, { 0, 19, 20 }, { 1, 11, 27 }, { 2, 28, 18 } }, { { 2, 18, 19 }, { 28, 29, 9 }, { 0, 10, 20 }, { 1, 27, 11 } }, { { 27, 28, 11 }, { 1, 2, 18 }, { 29, 9, 19 }, { 0, 20, 10 } },
{ { 0, 19, 20 }, { 10, 11, 27 }, { 1, 2, 18 }, { 28, 29, 9 } }, { { 28, 29, 9 }, { 0, 19, 20 }, { 27, 10, 11 }, { 1, 2, 18 } }, { { 1, 2, 18 }, { 28, 29, 9 }, { 0, 19, 20 }, { 27, 10, 11 } }, { { 27, 10, 11 }, { 1, 2, 18 }, { 28, 29, 9 }, { 0, 19, 20 } },
{ { 29, 9, 10 }, { 0, 1, 20 }, { 11, 27, 28 }, { 2, 18, 19 } }, { { 2, 18, 19 }, { 29, 9, 10 }, { 0, 1, 20 }, { 11, 27, 28 } }, { { 11, 27, 28 }, { 2, 18, 19 }, { 29, 9, 10 }, { 0, 1, 20 } }, { { 0, 1, 20 }, { 11, 27, 28 }, { 2, 18, 19 }, { 29, 9, 10 } },
{ { 1, 2, 18 }, { 28, 9, 20 }, { 27, 10, 29 }, { 11, 19, 0 } }, { { 27, 10, 11 }, { 1, 29, 18 }, { 0, 2, 19 }, { 28, 9, 20 } }, { { 0, 19, 20 }, { 27, 10, 2 }, { 9, 11, 28 }, { 29, 1, 18 } }, { { 28, 29, 9 }, { 0, 11, 19 }, { 1, 18, 20 }, { 2, 10, 27 } },
{ { 27, 29, 10 }, { 0, 28, 11 }, { 2, 18, 19 }, { 1, 9, 20 } }, { { 0, 2, 19 }, { 1, 9, 20 }, { 27, 28, 11 }, { 10, 29, 18 } }, { { 9, 28, 11 }, { 18, 29, 10 }, { 20, 1, 0 }, { 2, 27, 19 } }, { { 1, 18, 20 }, { 2, 27, 19 }, { 29, 9, 10 }, { 0, 28, 11 } },
{ { 2, 28, 18 }, { 9, 10, 20 }, { 1, 27, 29 }, { 0, 19, 11 } }, { { 1, 27, 11 }, { 29, 18, 19 }, { 0, 2, 10 }, { 9, 28, 20 } }, { { 0, 20, 10 }, { 2, 27, 28 }, { 9, 11, 19 }, { 1, 29, 18 } }, { { 29, 9, 19 }, { 0, 1, 11 }, { 28, 18, 20 }, { 2, 27, 10 } },
{ { 27, 29, 19 }, { 0, 10, 11 }, { 2, 28, 18 }, { 1, 9, 20 } }, { { 0, 2, 28 }, { 9, 19, 20 }, { 1, 11, 27 }, { 10, 29, 18 } }, { { 1, 9, 11 }, { 28, 29, 18 }, { 0, 10, 20 }, { 2, 27, 19 } }, { { 10, 18, 20 }, { 1, 2, 27 }, { 29, 19, 9 }, { 0, 28, 11 } } };


char salg[500];
int cc1, cc2, ecc1, ecc2;
int  sp_b[54], sp_bb[54], yp[20], kp[4][3];
char sp[55],sp_s[55];
void loadc(int), profrot(int, int);
int ascconv(int), arcmp(int[], int[]), conj(int);
char *y(char[]), *y2(char[]), *yd(char[]);

void cross(int, int);
void f2l_OB(), f2l_BR(), f2l_RG(), f2l_GO();
void oll(int[]);
void pll(int[][3]);

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

int solve_strt()
{
	
	int i, j, c, flag;
	const int ep[24] = { 1, 3, 5, 7, 10, 12, 14, 16, 19, 21, 23, 25, 28, 30, 32, 34, 37, 39, 41, 43, 46, 48, 50, 52 };
	const int cp[24] = { 0, 2, 6, 8, 9, 11, 15, 17, 18, 20, 24, 26, 27, 29, 33, 35, 36, 38, 42, 44, 45, 47, 51, 53 };
	const int efp[16] = { 1, 3, 5, 10, 12, 14, 19, 21, 23, 28, 30, 32, 37, 39, 41, 43 };
	const int oyp[20] = { 0, 1, 2, 9, 10, 11, 18, 19, 20, 27, 28, 29, 36, 37, 38, 39, 41, 42, 43, 44 };
	char t;


	for (i = 0; i < 9; i++)
		sp_s[i] = 'g';
	for (; i < 18; i++)
		sp_s[i] = 'o';
	for (; i < 27; i++)
		sp_s[i] = 'b';
	for (; i < 36; i++)
		sp_s[i] = 'r';
	for (; i < 45; i++)
		sp_s[i] = 'y';
	for (; i < 54; i++)
		sp_s[i] = 'w';

	memset(salg, 0, 500);
	
	for (i = 0; i < 54; i++)
	{
		sp_b[i] = sp[i];
		sp_bb[i] = sp[i];
	}

	for (i = c = 0; i < 54; i++)
		if (isdigit(sp[i]))
			c++;

	for (i = c = 0; i < 24; i++)
		if (ascconv(sp[ep[i]]) == 15)
			c++;
	if (c != 4)
		return -1; ///////problem @crss


	for (c = 0, i = 0; i < 24; i++)  //green
	{
		if (ascconv(sp[50]) == 15 && ascconv(sp[7]) == 2)
		{
			c++; break;
		}
		if (ascconv(sp[ep[i]]) == 15 && ascconv(sp[conj(ep[i])]) == 2)
		{
			cross(2, ep[i]);
			break;
		}
	}
	for (i = 0; i < 24; i++)  //orange
	{
		if (ascconv(sp[52]) == 15 && ascconv(sp[16]) == 12)
		{
			c++; break;
		}
		if (ascconv(sp[ep[i]]) == 15 && ascconv(sp[conj(ep[i])]) == 12)
		{
			cross(12, ep[i]);
			break;
		}
	}
	for (i = 0; i < 24; i++)  //blue
	{
		if (ascconv(sp[48]) == 15 && ascconv(sp[25]) == 1)
		{
			c++; break;
		}
		if (ascconv(sp[ep[i]]) == 15 && ascconv(sp[conj(ep[i])]) == 1)
		{
			cross(1, ep[i]);
			break;
		}
	}
	for (i = 0; i < 24; i++)  //red
	{
		if (ascconv(sp[46]) == 15 && ascconv(sp[34]) == 4)
		{
			c++; break;
		}
		if (ascconv(sp[ep[i]]) == 15 && ascconv(sp[
			conj(ep[i])]) == 4)
		{
			cross(4, ep[i]);
			break;
		}
	}

	//cc = strlen(salg);

	///////////////////////////////////////////////////////////////////



	//string str(sp);
	//String^ fin = gcnew String(str.c_str());
	//string st(salg);
	//String^ finn = gcnew String(st.c_str());

	//MessageBox::Show(finn, "salg after cross");
	//MessageBox::Show(fin, "sp after crposs");


	for (flag = 0, i = 0; i < 24; i++)
	{
		if (ascconv(sp[cp[i]]) == 15)
		{
			loadc(cp[i]); //loads cc1 & cc2 (un ordered)
			if ((ascconv(sp[cc1]) == 12) && (ascconv(sp[cc2]) == 1))
			{
				flag++;
				break;
			}
			else if ((ascconv(sp[cc1]) == 1) && (ascconv(sp[cc2]) == 12))
			{
				flag++;
				cc1 += cc2;
				cc2 = cc1 - cc2;
				cc1 -= cc2;
				break;
			}
		}
	}

	for (flag = 0, i = 0; i < 16; i++)
	{
		if ((ascconv(sp[efp[i]]) == ascconv(sp[cc1])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc2])))
		{
			flag++;
			ecc1 = efp[i];
			ecc2 = conj(efp[i]);
			break;
		}
		else if ((ascconv(sp[efp[i]]) == ascconv(sp[cc2])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc1])))
		{
			flag++;
			ecc1 = conj(efp[i]);
			ecc2 = efp[i];
			break;
		}
	}

	if (!flag)
	{
		return -2; ///error @ OB
		//MessageBox::Show("Input Error. Retry.");
		///*printf("\nerror @ OB");
		//_getch();*/
		//exit(0);
	}
	//loaded ordered ecc1 & ecc2

	if (ecc1 != 14 || cc1 != 17)
	{
		f2l_OB();
		//  for(i=0;ind<strlen(salg)+1;ind++,i++)
		//   printf(" %c",salg[ind]);
	}



	//string str1(sp);
	//String^ fin1 = gcnew String(str1.c_str());
	//string st1(salg);
	//String^ finn1 = gcnew String(st1.c_str());

	//MessageBox::Show(finn1, "salg after ob");
	//MessageBox::Show(fin1, "sp after ob");*/

	//f1c = strlen(salg);


	/*	printf("\n\n F1_C (OB) : ");
	for (; dk < f1c; dk++)
	printf("%c", salg[dk]);
	/*
	printf("\n\n");
	for (i = 0; i < 54; i++)
	{
	printf("%c ", sp[i]);
	}

	getch();*/
	///////////////////////////////////////////////////////////////////

	for (flag = 0, i = 0; i < 24; i++)
	{
		if (ascconv(sp[cp[i]]) == 15)
		{
			loadc(cp[i]); //loads cc1 & cc2 (un ordered)
			if ((ascconv(sp[cc1]) == 1) && (ascconv(sp[cc2]) == 4))
			{
				flag++;
				break;
			}
			else if ((ascconv(sp[cc1]) == 4) && (ascconv(sp[cc2]) == 1))
			{
				flag++;
				cc1 += cc2;
				cc2 = cc1 - cc2;
				cc1 -= cc2;
				break;
			}
		}
	}

	for (flag = 0, i = 0; i < 16; i++)
	{
		if ((ascconv(sp[efp[i]]) == ascconv(sp[cc1])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc2])))
		{
			flag++;
			ecc1 = efp[i];
			ecc2 = conj(efp[i]);
			break;
		}
		else if ((ascconv(sp[efp[i]]) == ascconv(sp[cc2])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc1])))
		{
			flag++;
			ecc1 = conj(efp[i]);
			ecc2 = efp[i];
			break;
		}
	}

	if (!flag)
	{
		return -3; //error @ BR
		/*MessageBox::Show("Input Error. Retry.");
		exit(0);*/
	}
	//loaded ordered ecc1 & ecc2

	if (ecc1 != 23 || cc1 != 26)
	{
		f2l_BR();
		// for(i=0;ind<strlen(salg)+1;ind++,i++)
		//  printf("  %c",salg[ind]);
	}



	/*string str2(sp);
	String^ fin2 = gcnew String(str2.c_str());
	string st2(salg);
	String^ finn2 = gcnew String(st2.c_str());

	MessageBox::Show(finn2, "salg after br");
	MessageBox::Show(fin2, "sp after br");*/

//	f2c = strlen(salg);

	/*	printf("\n\n F2_C (BR) : ");
	for (; dk < f2c; dk++)
	printf("%c", salg[dk]);

	/*	printf("\n\n");
	for (i = 0; i < 54; i++)
	{
	printf("%c ", sp[i]);
	}

	getch();*/
	/////////////////////////////////////////////////////////////////////

	for (flag = 0, i = 0; i < 24; i++)
	{
		if (ascconv(sp[cp[i]]) == 15)
		{
			loadc(cp[i]); //loads cc1 & cc2 (un ordered)
			if ((ascconv(sp[cc1]) == 4) && (ascconv(sp[cc2]) == 2))
			{
				flag++;
				break;
			}
			else if ((ascconv(sp[cc1]) == 2) && (ascconv(sp[cc2]) == 4))
			{
				flag++;
				cc1 += cc2;
				cc2 = cc1 - cc2;
				cc1 -= cc2;
				break;
			}
		}
	}

	for (flag = 0, i = 0; i < 16; i++)
	{
		if ((ascconv(sp[efp[i]]) == ascconv(sp[cc1])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc2])))
		{
			flag++;
			ecc1 = efp[i];
			ecc2 = conj(efp[i]);
			break;
		}
		else if ((ascconv(sp[efp[i]]) == ascconv(sp[cc2])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc1])))
		{
			flag++;
			ecc1 = conj(efp[i]);
			ecc2 = efp[i];
			break;
		}
	}
	if (!flag)
	{
		return -4; //error @ RG
		/*MessageBox::Show("Input Error. Retry.");
		exit(0);*/
	}
	//loaded ordered ecc1 & ecc2

	if (ecc1 != 32 || cc1 != 35)
	{
		f2l_RG();
		//  for(i=0;ind<strlen(salg)+1;ind++,i++)
		//   printf(" %c",salg[ind]);
	}



/*
	string str3(sp);
	String^ fin3 = gcnew String(str3.c_str());
	string st3(salg);
	String^ finn3 = gcnew String(st3.c_str());

	MessageBox::Show(finn3, "salg after rg");
	MessageBox::Show(fin3, "sp after rg");*/

	//f3c = strlen(salg);

	/*	printf("\n\n F3_C (RG) : ");
	for (; dk < f3c; dk++)
	printf("%c", salg[dk]);*/


	//////////////////////////////////////////////////////////////

	for (flag = 0, i = 0; i < 24; i++)
	{
		if (ascconv(sp[cp[i]]) == 15)
		{
			loadc(cp[i]); //loads cc1 & cc2 (un ordered)
			if ((ascconv(sp[cc1]) == 2) && (ascconv(sp[cc2]) == 12))
			{
				flag++;
				break;
			}
			else if ((ascconv(sp[cc1]) == 12) && (ascconv(sp[cc2]) == 2))
			{
				flag++;
				cc1 += cc2;
				cc2 = cc1 - cc2;
				cc1 -= cc2;
				break;
			}
		}
	}

	for (flag = 0, i = 0; i < 16; i++)
	{
		if ((ascconv(sp[efp[i]]) == ascconv(sp[cc1])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc2])))
		{
			flag++;
			ecc1 = efp[i];
			ecc2 = conj(efp[i]);
			break;
		}
		else if ((ascconv(sp[efp[i]]) == ascconv(sp[cc2])) && (ascconv(sp[conj(efp[i])]) == ascconv(sp[cc1])))
		{
			flag++;
			ecc1 = conj(efp[i]);
			ecc2 = efp[i];
			break;
		}
	}
	if (!flag)
	{
		return -5;// error @ GO
		/*MessageBox::Show("Input Error. Retry.");
		exit(0);*/
	}
	//loaded ordered ecc1 & ecc2

	if (ecc1 != 5 || cc1 != 8)
	{
		f2l_GO();
		//  for(i=0;ind<strlen(salg)+1;ind++,i++)
		//   printf(" %c",salg[ind]);
	}



	/*string str4(sp);
	String^ fin4 = gcnew String(str4.c_str());
	string st4(salg);
	String^ finn4 = gcnew String(st4.c_str());

	MessageBox::Show(finn4, "salg after go");
	MessageBox::Show(fin4, "sp after go");*/

	//f4c = strlen(salg);

	/*	printf("\n\n F4_C (GO) : ");
	for (; dk < f4c; dk++)
	printf("%c", salg[dk]);
	//////////////////////////////////////////////////////////////////
	/*
	printf("\n\nafter GO: ");
	for (i = 0; i < 54; i++)
	{
	printf("%c ", sp[i]);
	}

	getch(); exit(0);*/

	//////////////////////////////////////////////////////////////////


	for (c = 0, i = 0; i < 20; i++)
		if (ascconv(sp[oyp[i]]) == 14)
			yp[c++] = oyp[i];

	if (c != 8)					////err1
	{
		
	//	exit(0);
		return -6; //error @ OLL
	}
	if (ascconv(sp[36]) == 14 && ascconv(sp[37]) == 14 && ascconv(sp[38]) == 14 && ascconv(sp[39]) == 14 && ascconv(sp[41]) == 14 && ascconv(sp[42]) == 14 && ascconv(sp[43]) == 14 && ascconv(sp[44]) == 14)
	{
	}
	else
		oll(yp);

	///444, 390
	////444, 570
	//  for(i=0;ind<strlen(salg)+1;ind++,i++)
	//   printf(" %c",salg[ind]);

	//oc = strlen(salg);
	////////////////////////////////////////////////////////

	for (i = j = c = 0; i < 12; i++)     //green
		if (ascconv(sp[oyp[i]]) == 2)
		{
			kp[0][j++] = oyp[i];
			c++;
		}

	for (i = j = 0; i < 12; i++)		//orange
		if (ascconv(sp[oyp[i]]) == 12)
		{
			kp[1][j++] = oyp[i];
			c++;
		}

	for (i = j = 0; i < 12; i++)		//blue
		if (ascconv(sp[oyp[i]]) == 1)
		{
			kp[2][j++] = oyp[i];
			c++;
		}
	for (i = j = 0; i < 12; i++)		//red
		if (ascconv(sp[oyp[i]]) == 4)
		{
			kp[3][j++] = oyp[i];
			c++;
		}
	if (c != 12)							////err2
	{
		/*char tet[55];

		for (int i = 0; i < 54; i++)
			tet[i] = sp[i];

		tet[54] = '\0';*/

		/*string st4(salg);
		String^ finn4 = gcnew String(st4.c_str());
		MessageBox::Show(finn4, "salg");

		string stru(sp);
		String^ fine = gcnew String(stru.c_str());

		MessageBox::Show(fine, "c sate");
*/

		return -7; //error @ PLL
		/*MessageBox::Show("Input Error. Retry.");
		exit(0);*/
	}

	/*AllocConsole();

	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
	int hCrt = _open_osfhandle((long)handle_out, _O_TEXT);
	FILE* hf_out = _fdopen(hCrt, "w");
	setvbuf(hf_out, NULL, _IONBF, 1);
	*stdout = *hf_out;

	HANDLE handle_in = GetStdHandle(STD_INPUT_HANDLE);
	hCrt = _open_osfhandle((long)handle_in, _O_TEXT);
	FILE* hf_in = _fdopen(hCrt, "r");
	setvbuf(hf_in, NULL, _IONBF, 128);
	*stdin = *hf_in;

	printf("hai");*/


	if (!((ascconv(sp[0]) == 2 && ascconv(sp[1]) == 2 && ascconv(sp[2]) == 2) && (ascconv(sp[9]) == 12 && ascconv(sp[10]) == 12 && ascconv(sp[11]) == 12) && (ascconv(sp[18]) == 1 && ascconv(sp[19]) == 1 && ascconv(sp[20]) == 1) && (ascconv(sp[27]) == 4 && ascconv(sp[28]) == 4 && ascconv(sp[29]) == 4)))
		pll(kp);

	switch (sp[1])
	{
	case 'r': strcat(salg, " U");
		profrot(0, 0);
		break;
	case 'o': strcat(salg, " U'");
		profrot(0, 1);
		break;
	case 'b': strcat(salg, " U2");
		profrot(0, 2);
		break;
	}
	
	if (strcmp(sp, sp_s) == 0)
		return 1;
	else
		return -8;
}

int conj(int n)
{
	switch (n)
	{
	case 1: return(41);
	case 10: return(37);
	case 19: return(39);
	case 28: return(43);
	case 5: return(12);
	case 14: return(21);
	case 23: return(30);
	case 32: return(3);
	case 7: return(50);
	case 16: return(52);
	case 25: return(48);
	case 34: return(46);
	case 41: return(1);
	case 37: return(10);
	case 39: return(19);
	case 43: return(28);
	case 12: return(5);
	case 21: return(14);
	case 30: return(23);
	case 3: return(32);
	case 50: return(7);
	case 52: return(16);
	case 48: return(25);
	case 46: return(34);
	}
	return(999);
}

int ascconv(int i)
{
	switch (i)
	{
	case 103: return 2;
	case 111: return 12;
	case 98: return 1;
	case 114: return 4;
	case 121: return 14;
	case 119: return 15;
	}
	return 999;
}

int arcmp(int a[], int b[])
{
	int i, j, c = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (a[i] == b[j])
				c++;
	if (c == 3)
		return 1;
	return 0;
}

void pll(int kp[4][3])
{
	int i, j, k, c;
	for (i = 0; i < 88; i++)
		for (j = c = 0; j < 4; j++)
		{
			for (k = 0; k < 4; k++)
				if (arcmp(pcap[i][j], kp[k]) == 1)
					c++;
			if (c == 4)
			{
				switch ((i + 1) % 4)
				{
				case 1: strcat(salg, " ");
					strcat(salg, alg_pll[i / 4]);
					profrot(11, i / 4);
					return;
				case 2: strcat(salg, " U ");
					strcat(salg, alg_pll[i / 4]);
					profrot(12, i / 4);
					return;
				case 3: strcat(salg, " U2 ");
					strcat(salg, alg_pll[i / 4]);
					profrot(13, i / 4);
					return;
				case 0: strcat(salg, " U' ");
					strcat(salg, alg_pll[i / 4]);
					profrot(10, i / 4);
					return;
				}
			}
		}
}

void oll(int yep[])
{
	int i, j, k, c;
	strcat(salg, " ");
	
	for (i = 0; i < 232; i++)
	{
		if ((i + 1) == 29 || (i + 1) == 30 || (i + 1) == 31 || (i + 1) == 32)
			continue;
		for (c = 0, j = 0; j < 8; j++)
			for (k = 0; k < 8; k++)
				if (ocap[i][j] == yep[k])
					c++;

		if (c == 8)
		{
			switch ((i + 1) % 4)
			{
			case 1: strcat(salg, alg_oll[i / 4]);
				profrot(7, i / 4);
				return;
			case 2: strcat(salg, y(alg_oll[i / 4]));
				profrot(8, i / 4);
				return;
			case 3: strcat(salg, y2(alg_oll[i / 4]));
				profrot(9, i / 4);
				
				return;
			case 0: strcat(salg, yd(alg_oll[i / 4]));
				profrot(6, i / 4);
				return;
			}
		}
	}
}

void f2l_GO()
{

	strcat(salg, " ");

	switch (ecc1)
	{
	case 5: switch (cc1)
	{
	case 8: //null point;
		return;
	case 15:strcat(salg, alg_ftl[0]);
		profrot(5, 0);
		return;
	case 53:strcat(salg, alg_ftl[1]);
		profrot(5, 1);
		return;
	case 17:strcat(salg, alg_ftl[2]);
		profrot(5, 2);
		return;
	case 24:strcat(salg, alg_ftl[3]);
		profrot(5, 3);
		return;
	case 51:strcat(salg, alg_ftl[4]);
		profrot(5, 4);
		return;
	case 26:strcat(salg, alg_ftl[5]);
		profrot(5, 5);
		return;
	case 33:strcat(salg, alg_ftl[6]);
		profrot(5, 6);
		return;
	case 45:strcat(salg, alg_ftl[7]);
		profrot(5, 7);
		return;
	case 35:strcat(salg, alg_ftl[8]);
		profrot(5, 8);
		return;
	case 6: strcat(salg, alg_ftl[9]);
		profrot(5, 9);
		return;
	case 47:strcat(salg, alg_ftl[10]);
		profrot(5, 10);
		return;
	case 2: strcat(salg, alg_ftl[11]);
		profrot(5, 11);
		return;
	case 38:strcat(salg, alg_ftl[12]);
		profrot(5, 12);
		return;
	case 9: strcat(salg, alg_ftl[13]);
		profrot(5, 13);
		return;
	case 11:strcat(salg, alg_ftl[14]);
		profrot(5, 14);
		return;
	case 36:strcat(salg, alg_ftl[15]);
		profrot(5, 15);
		return;
	case 18:strcat(salg, alg_ftl[16]);
		profrot(5, 16);
		return;
	case 20:strcat(salg, alg_ftl[17]);
		profrot(5, 17);
		return;
	case 42:strcat(salg, alg_ftl[18]);
		profrot(5, 18);
		return;
	case 27:strcat(salg, alg_ftl[19]);
		profrot(5, 19);
		return;
	case 29:strcat(salg, alg_ftl[20]);
		profrot(5, 20);
		return;
	case 44:strcat(salg, alg_ftl[21]);
		profrot(5, 21);
		return;
	case 0: strcat(salg, alg_ftl[22]);
		profrot(5, 22);
		return;
	}
	case 12:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[23]);
		profrot(5, 23);
		return;
	case 15:strcat(salg, alg_ftl[24]);
		profrot(5, 24);
		return;
	case 53:strcat(salg, alg_ftl[25]);
		profrot(5, 25);
		return;
	case 17:strcat(salg, alg_ftl[26]);
		profrot(5, 26);
		return;
	case 24:strcat(salg, alg_ftl[27]);
		profrot(5, 27);
		return;
	case 51:strcat(salg, alg_ftl[28]);
		profrot(5, 28);
		return;
	case 26:strcat(salg, alg_ftl[29]);
		profrot(5, 29);
		return;
	case 33:strcat(salg, alg_ftl[30]);
		profrot(5, 30);
		return;
	case 45:strcat(salg, alg_ftl[31]);
		profrot(5, 31);
		return;
	case 35:strcat(salg, alg_ftl[32]);
		profrot(5, 32);
		return;
	case 6: strcat(salg, alg_ftl[33]);
		profrot(5, 33);
		return;
	case 47:strcat(salg, alg_ftl[34]);
		profrot(5, 34);
		return;
	case 2: strcat(salg, alg_ftl[35]);
		profrot(5, 35);
		return;
	case 38:strcat(salg, alg_ftl[36]);
		profrot(5, 36);
		return;
	case 9: strcat(salg, alg_ftl[37]);
		profrot(5, 37);
		return;
	case 11:strcat(salg, alg_ftl[38]);
		profrot(5, 38);
		return;
	case 36:strcat(salg, alg_ftl[39]);
		profrot(5, 39);
		return;
	case 18:strcat(salg, alg_ftl[40]);
		profrot(5, 40);
		return;
	case 20:strcat(salg, alg_ftl[41]);
		profrot(5, 41);
		return;
	case 42:strcat(salg, alg_ftl[42]);
		profrot(5, 42);
		return;
	case 27:strcat(salg, alg_ftl[43]);
		profrot(5, 43);
		return;
	case 29:strcat(salg, alg_ftl[44]);
		profrot(5, 44);
		return;
	case 44:strcat(salg, alg_ftl[45]);
		profrot(5, 45);
		return;
	case 0: strcat(salg, alg_ftl[46]);
		profrot(5, 46);
		return;
	}
	case 14:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[47]);
		profrot(5, 47);
		return;
	case 15:strcat(salg, alg_ftl[48]);
		profrot(5, 48);
		return;
	case 53:strcat(salg, alg_ftl[49]);
		profrot(5, 49);
		return;
	case 17://strcat(salg,alg_ftl[50]);
		//profrot(5,50);
		return; //null point
	case 24:strcat(salg, alg_ftl[51]);
		profrot(5, 51);
		return;
	case 51:strcat(salg, alg_ftl[52]);
		profrot(5, 52);
		return;
	case 26:strcat(salg, alg_ftl[53]);
		profrot(5, 53);
		return;
	case 33:strcat(salg, alg_ftl[54]);
		profrot(5, 54);
		return;
	case 45:strcat(salg, alg_ftl[55]);
		profrot(5, 55);
		return;
	case 35:strcat(salg, alg_ftl[56]);
		profrot(5, 56);
		return;
	case 6: strcat(salg, alg_ftl[57]);
		profrot(5, 57);
		return;
	case 47:strcat(salg, alg_ftl[58]);
		profrot(5, 58);
		return;
	case 2: strcat(salg, alg_ftl[59]);
		profrot(5, 59);
		return;
	case 38:strcat(salg, alg_ftl[60]);
		profrot(5, 60);
		return;
	case 9: strcat(salg, alg_ftl[61]);
		profrot(5, 61);
		return;
	case 11:strcat(salg, alg_ftl[62]);
		profrot(5, 62);
		return;
	case 36:strcat(salg, alg_ftl[63]);
		profrot(5, 63);
		return;
	case 18:strcat(salg, alg_ftl[64]);
		profrot(5, 64);
		return;
	case 20:strcat(salg, alg_ftl[65]);
		profrot(5, 65);
		return;
	case 42:strcat(salg, alg_ftl[66]);
		profrot(5, 66);
		return;
	case 27:strcat(salg, alg_ftl[67]);
		profrot(5, 67);
		return;
	case 29:strcat(salg, alg_ftl[68]);
		profrot(5, 68);
		return;
	case 44:strcat(salg, alg_ftl[69]);
		profrot(5, 69);
		return;
	case 0: strcat(salg, alg_ftl[70]);
		profrot(5, 70);
		return;
	}
	case 21:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[71]);
		profrot(5, 71);
		return;
	case 15:strcat(salg, alg_ftl[72]);
		profrot(5, 72);
		return;
	case 53:strcat(salg, alg_ftl[73]);
		profrot(5, 73);
		return;
	case 17:strcat(salg, alg_ftl[74]);
		profrot(5, 74);
		return;
	case 24:strcat(salg, alg_ftl[75]);
		profrot(5, 75);
		return;
	case 51:strcat(salg, alg_ftl[76]);
		profrot(5, 76);
		return;
	case 26:strcat(salg, alg_ftl[77]);
		profrot(5, 77);
		return;
	case 33:strcat(salg, alg_ftl[78]);
		profrot(5, 78);
		return;
	case 45:strcat(salg, alg_ftl[79]);
		profrot(5, 79);
		return;
	case 35:strcat(salg, alg_ftl[80]);
		profrot(5, 80);
		return;
	case 6: strcat(salg, alg_ftl[81]);
		profrot(5, 81);
		return;
	case 47:strcat(salg, alg_ftl[82]);
		profrot(5, 82);
		return;
	case 2: strcat(salg, alg_ftl[83]);
		profrot(5, 83);
		return;
	case 38:strcat(salg, alg_ftl[84]);
		profrot(5, 84);
		return;
	case 9: strcat(salg, alg_ftl[85]);
		profrot(5, 85);
		return;
	case 11:strcat(salg, alg_ftl[86]);
		profrot(5, 86);
		return;
	case 36:strcat(salg, alg_ftl[87]);
		profrot(5, 87);
		return;
	case 18:strcat(salg, alg_ftl[88]);
		profrot(5, 88);
		return;
	case 20:strcat(salg, alg_ftl[89]);
		profrot(5, 89);
		return;
	case 42:strcat(salg, alg_ftl[90]);
		profrot(5, 90);
		return;
	case 27:strcat(salg, alg_ftl[91]);
		profrot(5, 91);
		return;
	case 29:strcat(salg, alg_ftl[92]);
		profrot(5, 92);
		return;
	case 44:strcat(salg, alg_ftl[93]);
		profrot(5, 93);
		return;
	case 0: strcat(salg, alg_ftl[94]);
		profrot(5, 94);
		return;
	}
	case 23:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[95]);
		profrot(5, 95);
		return;
	case 15:strcat(salg, alg_ftl[96]);
		profrot(5, 96);
		return;
	case 53:strcat(salg, alg_ftl[97]);
		profrot(5, 97);
		return;
	case 17:strcat(salg, alg_ftl[98]);
		profrot(5, 98);
		return;
	case 24:strcat(salg, alg_ftl[99]);
		profrot(5, 99);
		return;
	case 51:strcat(salg, alg_ftl[100]);
		profrot(5, 100);
		return;
	case 26:strcat(salg, alg_ftl[101]);
		profrot(5, 101);
		return;
	case 33:strcat(salg, alg_ftl[102]);
		profrot(5, 102);
		return;
	case 45:strcat(salg, alg_ftl[103]);
		profrot(5, 103);
		return;
	case 35:strcat(salg, alg_ftl[104]);
		profrot(5, 104);
		return;
	case 6: strcat(salg, alg_ftl[105]);
		profrot(5, 105);
		return;
	case 47:strcat(salg, alg_ftl[106]);
		profrot(5, 106);
		return;
	case 2: strcat(salg, alg_ftl[107]);
		profrot(5, 107);
		return;
	case 38:strcat(salg, alg_ftl[108]);
		profrot(5, 108);
		return;
	case 9: strcat(salg, alg_ftl[109]);
		profrot(5, 109);
		return;
	case 11:strcat(salg, alg_ftl[110]);
		profrot(5, 110);
		return;
	case 36:strcat(salg, alg_ftl[111]);
		profrot(5, 111);
		return;
	case 18:strcat(salg, alg_ftl[112]);
		profrot(5, 112);
		return;
	case 20:strcat(salg, alg_ftl[113]);
		profrot(5, 113);
		return;
	case 42:strcat(salg, alg_ftl[114]);
		profrot(5, 114);
		return;
	case 27:strcat(salg, alg_ftl[115]);
		profrot(5, 115);
		return;
	case 29:strcat(salg, alg_ftl[116]);
		profrot(5, 116);
		return;
	case 44:strcat(salg, alg_ftl[117]);
		profrot(5, 117);
		return;
	case 0: strcat(salg, alg_ftl[118]);
		profrot(5, 118);
		return;
	}
	case 30:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[119]);
		profrot(5, 119);
		return;
	case 15:strcat(salg, alg_ftl[120]);
		profrot(5, 120);
		return;
	case 53:strcat(salg, alg_ftl[121]);
		profrot(5, 121);
		return;
	case 17:strcat(salg, alg_ftl[122]);
		profrot(5, 122);
		return;
	case 24:strcat(salg, alg_ftl[123]);
		profrot(5, 123);
		return;
	case 51:strcat(salg, alg_ftl[124]);
		profrot(5, 124);
		return;
	case 26:strcat(salg, alg_ftl[125]);
		profrot(5, 125);
		return;
	case 33:strcat(salg, alg_ftl[126]);
		profrot(5, 126);
		return;
	case 45:strcat(salg, alg_ftl[127]);
		profrot(5, 127);
		return;
	case 35:strcat(salg, alg_ftl[128]);
		profrot(5, 128);
		return;
	case 6: strcat(salg, alg_ftl[129]);
		profrot(5, 129);
		return;
	case 47:strcat(salg, alg_ftl[130]);
		profrot(5, 130);
		return;
	case 2: strcat(salg, alg_ftl[131]);
		profrot(5, 131);
		return;
	case 38:strcat(salg, alg_ftl[132]);
		profrot(5, 132);
		return;
	case 9: strcat(salg, alg_ftl[133]);
		profrot(5, 133);
		return;
	case 11:strcat(salg, alg_ftl[134]);
		profrot(5, 134);
		return;
	case 36:strcat(salg, alg_ftl[135]);
		profrot(5, 135);
		return;
	case 18:strcat(salg, alg_ftl[136]);
		profrot(5, 136);
		return;
	case 20:strcat(salg, alg_ftl[137]);
		profrot(5, 137);
		return;
	case 42:strcat(salg, alg_ftl[138]);
		profrot(5, 138);
		return;
	case 27:strcat(salg, alg_ftl[139]);
		profrot(5, 139);
		return;
	case 29:strcat(salg, alg_ftl[140]);
		profrot(5, 140);
		return;
	case 44:strcat(salg, alg_ftl[141]);
		profrot(5, 141);
		return;
	case 0: strcat(salg, alg_ftl[142]);
		profrot(5, 142);
		return;
	}
	case 32:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[143]);
		profrot(5, 143);
		return;
	case 15:strcat(salg, alg_ftl[144]);
		profrot(5, 144);
		return;
	case 53:strcat(salg, alg_ftl[145]);
		profrot(5, 145);
		return;
	case 17:strcat(salg, alg_ftl[146]);
		profrot(5, 146);
		return;
	case 24:strcat(salg, alg_ftl[147]);
		profrot(5, 147);
		return;
	case 51:strcat(salg, alg_ftl[148]);
		profrot(5, 148);
		return;
	case 26:strcat(salg, alg_ftl[149]);
		profrot(5, 149);
		return;
	case 33:strcat(salg, alg_ftl[150]);
		profrot(5, 150);
		return;
	case 45:strcat(salg, alg_ftl[151]);
		profrot(5, 151);
		return;
	case 35:strcat(salg, alg_ftl[152]);
		profrot(5, 152);
		return;
	case 6: strcat(salg, alg_ftl[153]);
		profrot(5, 153);
		return;
	case 47:strcat(salg, alg_ftl[154]);
		profrot(5, 154);
		return;
	case 2: strcat(salg, alg_ftl[155]);
		profrot(5, 155);
		return;
	case 38:strcat(salg, alg_ftl[156]);
		profrot(5, 156);
		return;
	case 9: strcat(salg, alg_ftl[157]);
		profrot(5, 157);
		return;
	case 11:strcat(salg, alg_ftl[158]);
		profrot(5, 158);
		return;
	case 36:strcat(salg, alg_ftl[159]);
		profrot(5, 159);
		return;
	case 18:strcat(salg, alg_ftl[160]);
		profrot(5, 160);
		return;
	case 20:strcat(salg, alg_ftl[161]);
		profrot(5, 161);
		return;
	case 42:strcat(salg, alg_ftl[162]);
		profrot(5, 162);
		return;
	case 27:strcat(salg, alg_ftl[163]);
		profrot(5, 163);
		return;
	case 29:strcat(salg, alg_ftl[164]);
		profrot(5, 164);
		return;
	case 44:strcat(salg, alg_ftl[165]);
		profrot(5, 165);
		return;
	case 0: strcat(salg, alg_ftl[166]);
		profrot(5, 166);
		return;
	}
	case 3: switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[167]);
		profrot(5, 167);
		return;
	case 15:strcat(salg, alg_ftl[168]);
		profrot(5, 168);
		return;
	case 53:strcat(salg, alg_ftl[169]);
		profrot(5, 169);
		return;
	case 17:strcat(salg, alg_ftl[170]);
		profrot(5, 170);
		return;
	case 24:strcat(salg, alg_ftl[171]);
		profrot(5, 171);
		return;
	case 51:strcat(salg, alg_ftl[172]);
		profrot(5, 172);
		return;
	case 26:strcat(salg, alg_ftl[173]);
		profrot(5, 173);
		return;
	case 33:strcat(salg, alg_ftl[174]);
		profrot(5, 174);
		return;
	case 45:strcat(salg, alg_ftl[175]);
		profrot(5, 175);
		return;
	case 35:strcat(salg, alg_ftl[176]);
		profrot(5, 176);
		return;
	case 6: strcat(salg, alg_ftl[177]);
		profrot(5, 177);
		return;
	case 47:strcat(salg, alg_ftl[178]);
		profrot(5, 178);
		return;
	case 2: strcat(salg, alg_ftl[179]);
		profrot(5, 179);
		return;
	case 38:strcat(salg, alg_ftl[180]);
		profrot(5, 180);
		return;
	case 9: strcat(salg, alg_ftl[181]);
		profrot(5, 181);
		return;
	case 11:strcat(salg, alg_ftl[182]);
		profrot(5, 182);
		return;
	case 36:strcat(salg, alg_ftl[183]);
		profrot(5, 183);
		return;
	case 18:strcat(salg, alg_ftl[184]);
		profrot(5, 184);
		return;
	case 20:strcat(salg, alg_ftl[185]);
		profrot(5, 185);
		return;
	case 42:strcat(salg, alg_ftl[186]);
		profrot(5, 186);
		return;
	case 27:strcat(salg, alg_ftl[187]);
		profrot(5, 187);
		return;
	case 29:strcat(salg, alg_ftl[188]);
		profrot(5, 188);
		return;
	case 44:strcat(salg, alg_ftl[189]);
		profrot(5, 189);
		return;
	case 0: strcat(salg, alg_ftl[190]);
		profrot(5, 190);
		return;
	}
	case 1: switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[191]);
		profrot(5, 191);
		return;
	case 15:strcat(salg, alg_ftl[192]);
		profrot(5, 192);
		return;
	case 53:strcat(salg, alg_ftl[193]);
		profrot(5, 193);
		return;
	case 17:strcat(salg, alg_ftl[194]);
		profrot(5, 194);
		return;
	case 24:strcat(salg, alg_ftl[195]);
		profrot(5, 195);
		return;
	case 51:strcat(salg, alg_ftl[196]);
		profrot(5, 196);
		return;
	case 26:strcat(salg, alg_ftl[197]);
		profrot(5, 197);
		return;
	case 33:strcat(salg, alg_ftl[198]);
		profrot(5, 198);
		return;
	case 45:strcat(salg, alg_ftl[199]);
		profrot(5, 199);
		return;
	case 35:strcat(salg, alg_ftl[200]);
		profrot(5, 200);
		return;
	case 6: strcat(salg, alg_ftl[201]);
		profrot(5, 201);
		return;
	case 47:strcat(salg, alg_ftl[202]);
		profrot(5, 202);
		return;
	case 2: strcat(salg, alg_ftl[203]);
		profrot(5, 203);
		return;
	case 38:strcat(salg, alg_ftl[204]);
		profrot(5, 204);
		return;
	case 9: strcat(salg, alg_ftl[205]);
		profrot(5, 205);
		return;
	case 11:strcat(salg, alg_ftl[206]);
		profrot(5, 206);
		return;
	case 36:strcat(salg, alg_ftl[207]);
		profrot(5, 207);
		return;
	case 18:strcat(salg, alg_ftl[208]);
		profrot(5, 208);
		return;
	case 20:strcat(salg, alg_ftl[209]);
		profrot(5, 209);
		return;
	case 42:strcat(salg, alg_ftl[210]);
		profrot(5, 210);
		return;
	case 27:strcat(salg, alg_ftl[211]);
		profrot(5, 211);
		return;
	case 29:strcat(salg, alg_ftl[212]);
		profrot(5, 212);
		return;
	case 44:strcat(salg, alg_ftl[213]);
		profrot(5, 213);
		return;
	case 0: strcat(salg, alg_ftl[214]);
		profrot(5, 214);
		return;
	}
	case 41:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[215]);
		profrot(5, 215);
		return;
	case 15:strcat(salg, alg_ftl[216]);
		profrot(5, 216);
		return;
	case 53:strcat(salg, alg_ftl[217]);
		profrot(5, 217);
		return;
	case 17:strcat(salg, alg_ftl[218]);
		profrot(5, 218);
		return;
	case 24:strcat(salg, alg_ftl[219]);
		profrot(5, 219);
		return;
	case 51:strcat(salg, alg_ftl[220]);
		profrot(5, 220);
		return;
	case 26:strcat(salg, alg_ftl[221]);
		profrot(5, 221);
		return;
	case 33:strcat(salg, alg_ftl[222]);
		profrot(5, 222);
		return;
	case 45:strcat(salg, alg_ftl[223]);
		profrot(5, 223);
		return;
	case 35:strcat(salg, alg_ftl[224]);
		profrot(5, 224);
		return;
	case 6: strcat(salg, alg_ftl[225]);
		profrot(5, 225);
		return;
	case 47:strcat(salg, alg_ftl[226]);
		profrot(5, 226);
		return;
	case 2: strcat(salg, alg_ftl[227]);
		profrot(5, 227);
		return;
	case 38:strcat(salg, alg_ftl[228]);
		profrot(5, 228);
		return;
	case 9: strcat(salg, alg_ftl[229]);/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		profrot(5, 229);

		return;
	case 11:strcat(salg, alg_ftl[230]);
		profrot(5, 230);
		return;
	case 36:strcat(salg, alg_ftl[231]);
		profrot(5, 231);
		return;
	case 18:strcat(salg, alg_ftl[232]);
		profrot(5, 232);
		return;
	case 20:strcat(salg, alg_ftl[233]);
		profrot(5, 233);
		return;
	case 42:strcat(salg, alg_ftl[234]);
		profrot(5, 234);
		return;
	case 27:strcat(salg, alg_ftl[235]);
		profrot(5, 235);
		return;
	case 29:strcat(salg, alg_ftl[236]);
		profrot(5, 236);
		return;
	case 44:strcat(salg, alg_ftl[237]);
		profrot(5, 237);
		return;
	case 0: strcat(salg, alg_ftl[238]);
		profrot(5, 238);
		return;
	}
	case 10:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[239]);
		profrot(5, 239);
		return;
	case 15:strcat(salg, alg_ftl[240]);
		profrot(5, 240);
		return;
	case 53:strcat(salg, alg_ftl[241]);
		profrot(5, 241);
		return;
	case 17:strcat(salg, alg_ftl[242]);
		profrot(5, 242);
		return;
	case 24:strcat(salg, alg_ftl[243]);
		profrot(5, 243);
		return;
	case 51:strcat(salg, alg_ftl[244]);
		profrot(5, 244);
		return;
	case 26:strcat(salg, alg_ftl[245]);
		profrot(5, 245);
		return;
	case 33:strcat(salg, alg_ftl[246]);
		profrot(5, 246);
		return;
	case 45:strcat(salg, alg_ftl[247]);
		profrot(5, 247);
		return;
	case 35:strcat(salg, alg_ftl[248]);
		profrot(5, 248);
		return;
	case 6: strcat(salg, alg_ftl[249]);
		profrot(5, 249);
		return;
	case 47:strcat(salg, alg_ftl[250]);
		profrot(5, 250);
		return;
	case 2: strcat(salg, alg_ftl[251]);
		profrot(5, 251);
		return;
	case 38:strcat(salg, alg_ftl[252]);
		profrot(5, 252);
		return;
	case 9: strcat(salg, alg_ftl[253]);
		profrot(5, 253);
		return;
	case 11:strcat(salg, alg_ftl[254]);
		profrot(5, 254);
		return;
	case 36:strcat(salg, alg_ftl[255]);
		profrot(5, 255);
		return;
	case 18:strcat(salg, alg_ftl[256]);
		profrot(5, 256);
		return;
	case 20:strcat(salg, alg_ftl[257]);
		profrot(5, 257);
		return;
	case 42:strcat(salg, alg_ftl[258]);
		profrot(5, 258);
		return;
	case 27:strcat(salg, alg_ftl[259]);
		profrot(5, 259);
		return;
	case 29:strcat(salg, alg_ftl[260]);
		profrot(5, 260);
		return;
	case 44:strcat(salg, alg_ftl[261]);
		profrot(5, 261);
		return;
	case 0: strcat(salg, alg_ftl[262]);
		profrot(5, 262);
		return;
	}
	case 37:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[263]);
		profrot(5, 263);
		return;
	case 15:strcat(salg, alg_ftl[264]);
		profrot(5, 264);
		return;
	case 53:strcat(salg, alg_ftl[265]);
		profrot(5, 265);
		return;
	case 17:strcat(salg, alg_ftl[266]);
		profrot(5, 266);
		return;
	case 24:strcat(salg, alg_ftl[267]);
		profrot(5, 267);
		return;
	case 51:strcat(salg, alg_ftl[268]);
		profrot(5, 268);
		return;
	case 26:strcat(salg, alg_ftl[269]);
		profrot(5, 269);
		return;
	case 33:strcat(salg, alg_ftl[270]);
		profrot(5, 270);
		return;
	case 45:strcat(salg, alg_ftl[271]);
		profrot(5, 271);
		return;
	case 35:strcat(salg, alg_ftl[272]);
		profrot(5, 272);
		return;
	case 6: strcat(salg, alg_ftl[273]);
		profrot(5, 273);
		return;
	case 47:strcat(salg, alg_ftl[274]);
		profrot(5, 274);
		return;
	case 2: strcat(salg, alg_ftl[275]);
		profrot(5, 275);
		return;
	case 38:strcat(salg, alg_ftl[276]);
		profrot(5, 276);
		return;
	case 9: strcat(salg, alg_ftl[277]);
		profrot(5, 277);
		return;
	case 11:strcat(salg, alg_ftl[278]);
		profrot(5, 278);
		return;
	case 36:strcat(salg, alg_ftl[279]);
		profrot(5, 279);
		return;
	case 18:strcat(salg, alg_ftl[280]);
		profrot(5, 280);
		return;
	case 20:strcat(salg, alg_ftl[281]);
		profrot(5, 281);
		return;
	case 42:strcat(salg, alg_ftl[282]);
		profrot(5, 282);
		return;
	case 27:strcat(salg, alg_ftl[283]);
		profrot(5, 283);
		return;
	case 29:strcat(salg, alg_ftl[284]);
		profrot(5, 284);
		return;
	case 44:strcat(salg, alg_ftl[285]);
		profrot(5, 285);
		return;
	case 0: strcat(salg, alg_ftl[286]);
		profrot(5, 286);
		return;
	}
	case 19:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[287]);
		profrot(5, 287);
		return;
	case 15:strcat(salg, alg_ftl[288]);
		profrot(5, 288);
		return;
	case 53:strcat(salg, alg_ftl[289]);
		profrot(5, 289);
		return;
	case 17:strcat(salg, alg_ftl[290]);
		profrot(5, 290);
		return;
	case 24:strcat(salg, alg_ftl[291]);
		profrot(5, 291);
		return;
	case 51:strcat(salg, alg_ftl[292]);
		profrot(5, 292);
		return;
	case 26:strcat(salg, alg_ftl[293]);
		profrot(5, 293);
		return;
	case 33:strcat(salg, alg_ftl[294]);
		profrot(5, 294);
		return;
	case 45:strcat(salg, alg_ftl[295]);
		profrot(5, 295);
		return;
	case 35:strcat(salg, alg_ftl[296]);
		profrot(5, 296);
		return;
	case 6: strcat(salg, alg_ftl[297]);
		profrot(5, 297);
		return;
	case 47:strcat(salg, alg_ftl[298]);
		profrot(5, 298);
		return;
	case 2: strcat(salg, alg_ftl[299]);
		profrot(5, 299);
		return;
	case 38:strcat(salg, alg_ftl[300]);
		profrot(5, 300);
		return;
	case 9: strcat(salg, alg_ftl[301]);
		profrot(5, 301);
		return;
	case 11:strcat(salg, alg_ftl[302]);
		profrot(5, 302);
		return;
	case 36:strcat(salg, alg_ftl[303]);
		profrot(5, 303);
		return;
	case 18:strcat(salg, alg_ftl[304]);
		profrot(5, 304);
		return;
	case 20:strcat(salg, alg_ftl[305]);
		profrot(5, 305);
		return;
	case 42:strcat(salg, alg_ftl[306]);
		profrot(5, 306);
		return;
	case 27:strcat(salg, alg_ftl[307]);
		profrot(5, 307);
		return;
	case 29:strcat(salg, alg_ftl[308]);
		profrot(5, 308);
		return;
	case 44:strcat(salg, alg_ftl[309]);
		profrot(5, 309);
		return;
	case 0: strcat(salg, alg_ftl[310]);
		profrot(5, 310);
		return;
	}
	case 39:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[311]);
		profrot(5, 311);
		return;
	case 15:strcat(salg, alg_ftl[312]);
		profrot(5, 312);
		return;
	case 53:strcat(salg, alg_ftl[313]);
		profrot(5, 313);
		return;
	case 17:strcat(salg, alg_ftl[314]);
		profrot(5, 314);
		return;
	case 24:strcat(salg, alg_ftl[315]);
		profrot(5, 315);
		return;
	case 51:strcat(salg, alg_ftl[316]);
		profrot(5, 316);
		return;
	case 26:strcat(salg, alg_ftl[317]);
		profrot(5, 317);
		return;
	case 33:strcat(salg, alg_ftl[318]);
		profrot(5, 318);
		return;
	case 45:strcat(salg, alg_ftl[319]);
		profrot(5, 319);
		return;
	case 35:strcat(salg, alg_ftl[320]);
		profrot(5, 320);
		return;
	case 6: strcat(salg, alg_ftl[321]);
		profrot(5, 321);
		return;
	case 47:strcat(salg, alg_ftl[322]);
		profrot(5, 322);
		return;
	case 2: strcat(salg, alg_ftl[323]);
		profrot(5, 323);
		return;
	case 38:strcat(salg, alg_ftl[324]);
		profrot(5, 324);
		return;
	case 9: strcat(salg, alg_ftl[325]);
		profrot(5, 325);
		return;
	case 11:strcat(salg, alg_ftl[326]);
		profrot(5, 326);
		return;
	case 36:strcat(salg, alg_ftl[327]);
		profrot(5, 327);
		return;
	case 18:strcat(salg, alg_ftl[328]);
		profrot(5, 328);
		return;
	case 20:strcat(salg, alg_ftl[329]);
		profrot(5, 329);
		return;
	case 42:strcat(salg, alg_ftl[330]);
		profrot(5, 330);
		return;
	case 27:strcat(salg, alg_ftl[331]);
		profrot(5, 331);
		return;
	case 29:strcat(salg, alg_ftl[332]);
		profrot(5, 332);
		return;
	case 44:strcat(salg, alg_ftl[333]);
		profrot(5, 333);
		return;
	case 0: strcat(salg, alg_ftl[334]);
		profrot(5, 334);
		return;
	}
	case 28:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[335]);
		profrot(5, 335);
		return;
	case 15:strcat(salg, alg_ftl[336]);
		profrot(5, 336);
		return;
	case 53:strcat(salg, alg_ftl[337]);
		profrot(5, 337);
		return;
	case 17:strcat(salg, alg_ftl[338]);
		profrot(5, 338);
		return;
	case 24:strcat(salg, alg_ftl[339]);
		profrot(5, 339);
		return;
	case 51:strcat(salg, alg_ftl[340]);
		profrot(5, 340);
		return;
	case 26:strcat(salg, alg_ftl[341]);
		profrot(5, 341);
		return;
	case 33:strcat(salg, alg_ftl[342]);
		profrot(5, 342);
		return;
	case 45:strcat(salg, alg_ftl[343]);
		profrot(5, 343);
		return;
	case 35:strcat(salg, alg_ftl[344]);
		profrot(5, 344);
		return;
	case 6: strcat(salg, alg_ftl[345]);
		profrot(5, 345);
		return;
	case 47:strcat(salg, alg_ftl[346]);
		profrot(5, 346);
		return;
	case 2: strcat(salg, alg_ftl[347]);
		profrot(5, 347);
		return;
	case 38:strcat(salg, alg_ftl[348]);
		profrot(5, 348);
		return;
	case 9: strcat(salg, alg_ftl[349]);
		profrot(5, 349);
		return;
	case 11:strcat(salg, alg_ftl[350]);
		profrot(5, 350);
		return;
	case 36:strcat(salg, alg_ftl[351]);
		profrot(5, 351);
		return;
	case 18:strcat(salg, alg_ftl[352]);
		profrot(5, 352);
		return;
	case 20:strcat(salg, alg_ftl[353]);
		profrot(5, 353);
		return;
	case 42:strcat(salg, alg_ftl[354]);
		profrot(5, 354);
		return;
	case 27:strcat(salg, alg_ftl[355]);
		profrot(5, 355);
		return;
	case 29:strcat(salg, alg_ftl[356]);
		profrot(5, 356);
		return;
	case 44:strcat(salg, alg_ftl[357]);
		profrot(5, 357);
		return;
	case 0: strcat(salg, alg_ftl[358]);
		profrot(5, 358);
		return;
	}
	case 43:switch (cc1)
	{
	case 8: strcat(salg, alg_ftl[359]);
		profrot(5, 359);
		return;
	case 15:strcat(salg, alg_ftl[360]);
		profrot(5, 360);
		return;
	case 53:strcat(salg, alg_ftl[361]);
		profrot(5, 361);
		return;
	case 17:strcat(salg, alg_ftl[362]);
		profrot(5, 362);
		return;
	case 24:strcat(salg, alg_ftl[363]);
		profrot(5, 363);
		return;
	case 51:strcat(salg, alg_ftl[364]);
		profrot(5, 364);
		return;
	case 26:strcat(salg, alg_ftl[365]);
		profrot(5, 365);
		return;
	case 33:strcat(salg, alg_ftl[366]);
		profrot(5, 366);
		return;
	case 45:strcat(salg, alg_ftl[367]);
		profrot(5, 367);
		return;
	case 35:strcat(salg, alg_ftl[368]);
		profrot(5, 368);
		return;
	case 6: strcat(salg, alg_ftl[369]);
		profrot(5, 369);
		return;
	case 47:strcat(salg, alg_ftl[370]);
		profrot(5, 370);
		return;
	case 2: strcat(salg, alg_ftl[371]);
		profrot(5, 371);
		return;
	case 38:strcat(salg, alg_ftl[372]);
		profrot(5, 372);
		return;
	case 9: strcat(salg, alg_ftl[373]);
		profrot(5, 373);
		return;
	case 11:strcat(salg, alg_ftl[374]);
		profrot(5, 374);
		return;
	case 36:strcat(salg, alg_ftl[375]);
		profrot(5, 375);
		return;
	case 18:strcat(salg, alg_ftl[376]);
		profrot(5, 376);
		return;
	case 20:strcat(salg, alg_ftl[377]);
		profrot(5, 377);
		return;
	case 42:strcat(salg, alg_ftl[378]);
		profrot(5, 378);
		return;
	case 27:strcat(salg, alg_ftl[379]);
		profrot(5, 379);
		return;
	case 29:strcat(salg, alg_ftl[380]);
		profrot(5, 380);
		return;
	case 44:strcat(salg, alg_ftl[381]);
		profrot(5, 381);
		return;
	case 0: strcat(salg, alg_ftl[382]);
		profrot(5, 382);
		return;
	}
	}
}

void f2l_RG()
{

	strcat(salg, " ");

	switch (ecc1)
	{
	case 5:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[52 - 2]));
		profrot(4, 52 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[53 - 2]));
		profrot(4, 53 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[54 - 2]));
		profrot(4, 54 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[55 - 2]));
		profrot(4, 55 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[56 - 2]));
		profrot(4, 56 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[57 - 2]));
		profrot(4, 57 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[58 - 2]));
		profrot(4, 58 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[59 - 2]));
		profrot(4, 59 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[60 - 2]));
		profrot(4, 60 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[49 - 2]));
		profrot(4, 49 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[50 - 2]));
		profrot(4, 50 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[51 - 2]));
		profrot(4, 51 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[64 - 2]));
		profrot(4, 64 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[65 - 2]));
		profrot(4, 65 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[66 - 2]));
		profrot(4, 66 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[67 - 2]));
		profrot(4, 67 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[68 - 2]));
		profrot(4, 68 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[69 - 2]));
		profrot(4, 69 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[70 - 2]));
		profrot(4, 70 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[71 - 2]));
		profrot(4, 71 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[72 - 2]));
		profrot(4, 72 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[61 - 2]));
		profrot(4, 61 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[62 - 2]));
		profrot(4, 62 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[63 - 2]));
		profrot(4, 63 - 2);
		return;
	}
	case 12:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[76 - 2]));
		profrot(4, 76 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[77 - 2]));
		profrot(4, 77 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[78 - 2]));
		profrot(4, 78 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[79 - 2]));
		profrot(4, 79 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[80 - 2]));
		profrot(4, 80 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[81 - 2]));
		profrot(4, 81 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[82 - 2]));
		profrot(4, 82 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[83 - 2]));
		profrot(4, 83 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[84 - 2]));
		profrot(4, 84 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[73 - 2]));
		profrot(4, 73 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[74 - 2]));
		profrot(4, 74 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[75 - 2]));
		profrot(4, 75 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[88 - 2]));
		profrot(4, 88 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[89 - 2]));
		profrot(4, 89 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[90 - 2]));
		profrot(4, 90 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[91 - 2]));
		profrot(4, 91 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[92 - 2]));
		profrot(4, 92 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[93 - 2]));
		profrot(4, 93 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[94 - 2]));
		profrot(4, 94 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[95 - 2]));
		profrot(4, 95 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[96 - 2]));
		profrot(4, 96 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[85 - 2]));
		profrot(4, 85 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[86 - 2]));
		profrot(4, 86 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[87 - 2]));
		profrot(4, 87 - 2);
		return;
	}
	case 14:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[100 - 2]));
		profrot(4, 100 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[101 - 2]));
		profrot(4, 101 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[102 - 2]));
		profrot(4, 102 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[103 - 2]));
		profrot(4, 103 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[104 - 2]));
		profrot(4, 104 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[105 - 2]));
		profrot(4, 105 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[106 - 2]));
		profrot(4, 106 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[107 - 2]));
		profrot(4, 107 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[108 - 2]));
		profrot(4, 108 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[97 - 2]));
		profrot(4, 97 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[98 - 2]));
		profrot(4, 98 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[99 - 2]));
		profrot(4, 99 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[112 - 2]));
		profrot(4, 112 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[113 - 2]));
		profrot(4, 113 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[114 - 2]));
		profrot(4, 114 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[115 - 2]));
		profrot(4, 115 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[116 - 2]));
		profrot(4, 116 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[117 - 2]));
		profrot(4, 117 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[118 - 2]));
		profrot(4, 118 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[119 - 2]));
		profrot(4, 119 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[120 - 2]));
		profrot(4, 120 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[109 - 2]));
		profrot(4, 109 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[110 - 2]));
		profrot(4, 110 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[111 - 2]));
		profrot(4, 111 - 2);
		return;
	}
	case 21:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[124 - 2]));
		profrot(4, 124 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[125 - 2]));
		profrot(4, 125 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[126 - 2]));
		profrot(4, 126 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[127 - 2]));
		profrot(4, 127 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[128 - 2]));
		profrot(4, 128 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[129 - 2]));
		profrot(4, 129 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[130 - 2]));
		profrot(4, 130 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[131 - 2]));
		profrot(4, 131 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[132 - 2]));
		profrot(4, 132 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[121 - 2]));
		profrot(4, 121 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[122 - 2]));
		profrot(4, 122 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[123 - 2]));
		profrot(4, 123 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[136 - 2]));
		profrot(4, 136 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[137 - 2]));
		profrot(4, 137 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[138 - 2]));
		profrot(4, 138 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[139 - 2]));
		profrot(4, 139 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[140 - 2]));
		profrot(4, 140 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[141 - 2]));
		profrot(4, 141 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[142 - 2]));
		profrot(4, 142 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[143 - 2]));
		profrot(4, 143 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[144 - 2]));
		profrot(4, 144 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[133 - 2]));
		profrot(4, 133 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[134 - 2]));
		profrot(4, 134 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[135 - 2]));
		profrot(4, 135 - 2);
		return;
	}
	case 23:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[148 - 2]));
		profrot(4, 148 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[149 - 2]));
		profrot(4, 149 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[150 - 2]));
		profrot(4, 150 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[151 - 2]));
		profrot(4, 151 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[152 - 2]));
		profrot(4, 152 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[153 - 2]));
		profrot(4, 153 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[154 - 2]));
		profrot(4, 154 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[155 - 2]));
		profrot(4, 155 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[156 - 2]));
		profrot(4, 156 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[145 - 2]));
		profrot(4, 145 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[146 - 2]));
		profrot(4, 146 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[147 - 2]));
		profrot(4, 147 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[160 - 2]));
		profrot(4, 160 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[161 - 2]));
		profrot(4, 161 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[162 - 2]));
		profrot(4, 162 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[163 - 2]));
		profrot(4, 163 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[164 - 2]));
		profrot(4, 164 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[165 - 2]));
		profrot(4, 165 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[166 - 2]));
		profrot(4, 166 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[167 - 2]));
		profrot(4, 167 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[168 - 2]));
		profrot(4, 168 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[157 - 2]));
		profrot(4, 157 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[158 - 2]));
		profrot(4, 158 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[159 - 2]));
		profrot(4, 159 - 2);
		return;
	}
	case 30:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[172 - 2]));
		profrot(4, 172 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[173 - 2]));
		profrot(4, 173 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[174 - 2]));
		profrot(4, 174 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[175 - 2]));
		profrot(4, 175 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[176 - 2]));
		profrot(4, 176 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[177 - 2]));
		profrot(4, 177 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[178 - 2]));
		profrot(4, 178 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[179 - 2]));
		profrot(4, 179 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[180 - 2]));
		profrot(4, 180 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[169 - 2]));
		profrot(4, 169 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[170 - 2]));
		profrot(4, 170 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[171 - 2]));
		profrot(4, 171 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[184 - 2]));
		profrot(4, 184 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[185 - 2]));
		profrot(4, 185 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[186 - 2]));
		profrot(4, 186 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[187 - 2]));
		profrot(4, 187 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[188 - 2]));
		profrot(4, 188 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[189 - 2]));
		profrot(4, 189 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[190 - 2]));
		profrot(4, 190 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[191 - 2]));
		profrot(4, 191 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[192 - 2]));
		profrot(4, 192 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[181 - 2]));
		profrot(4, 181 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[182 - 2]));
		profrot(4, 182 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[183 - 2]));
		profrot(4, 183 - 2);
		return;
	}
	case 32:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[4 - 2]));
		profrot(4, 4 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[5 - 2]));
		profrot(4, 5 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[6 - 2]));
		profrot(4, 6 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[7 - 2]));
		profrot(4, 7 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[8 - 2]));
		profrot(4, 8 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[9 - 2]));
		profrot(4, 9 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[10 - 2]));
		profrot(4, 10 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[11 - 2]));
		profrot(4, 11 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[12 - 2]));
		profrot(4, 12 - 2);
		return;
	case 35://null point
		return;
	case 6: strcat(salg, yd(alg_ftl[2 - 2]));
		profrot(4, 2 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[3 - 2]));
		profrot(4, 3 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[16 - 2]));
		profrot(4, 16 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[17 - 2]));
		profrot(4, 17 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[18 - 2]));
		profrot(4, 18 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[19 - 2]));
		profrot(4, 19 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[20 - 2]));
		profrot(4, 20 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[21 - 2]));
		profrot(4, 21 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[22 - 2]));
		profrot(4, 22 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[23 - 2]));
		profrot(4, 23 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[24 - 2]));
		profrot(4, 24 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[13 - 2]));
		profrot(4, 13 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[14 - 2]));
		profrot(4, 14 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[15 - 2]));
		profrot(4, 15 - 2);
		return;
	}
	case 3: switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[28 - 2]));
		profrot(4, 28 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[29 - 2]));
		profrot(4, 29 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[30 - 2]));
		profrot(4, 30 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[31 - 2]));
		profrot(4, 31 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[32 - 2]));
		profrot(4, 32 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[33 - 2]));
		profrot(4, 33 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[34 - 2]));
		profrot(4, 34 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[35 - 2]));
		profrot(4, 35 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[36 - 2]));
		profrot(4, 36 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[25 - 2]));
		profrot(4, 25 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[26 - 2]));
		profrot(4, 26 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[27 - 2]));
		profrot(4, 27 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[40 - 2]));
		profrot(4, 40 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[41 - 2]));
		profrot(4, 41 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[42 - 2]));
		profrot(4, 42 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[43 - 2]));
		profrot(4, 43 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[44 - 2]));
		profrot(4, 44 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[45 - 2]));
		profrot(4, 45 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[46 - 2]));
		profrot(4, 46 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[47 - 2]));
		profrot(4, 47 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[48 - 2]));
		profrot(4, 48 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[37 - 2]));
		profrot(4, 37 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[38 - 2]));
		profrot(4, 38 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[39 - 2]));
		profrot(4, 39 - 2);
		return;
	}
	case 1: switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[244 - 2]));
		profrot(4, 244 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[245 - 2]));
		profrot(4, 245 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[246 - 2]));
		profrot(4, 246 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[247 - 2]));
		profrot(4, 247 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[248 - 2]));
		profrot(4, 248 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[249 - 2]));
		profrot(4, 249 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[250 - 2]));
		profrot(4, 250 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[251 - 2]));
		profrot(4, 251 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[252 - 2]));
		profrot(4, 252 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[241 - 2]));
		profrot(4, 241 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[242 - 2]));
		profrot(4, 242 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[243 - 2]));
		profrot(4, 243 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[256 - 2]));
		profrot(4, 256 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[257 - 2]));
		profrot(4, 257 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[258 - 2]));
		profrot(4, 258 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[259 - 2]));
		profrot(4, 259 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[260 - 2]));
		profrot(4, 260 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[261 - 2]));
		profrot(4, 261 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[262 - 2]));
		profrot(4, 262 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[263 - 2]));
		profrot(4, 263 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[264 - 2]));
		profrot(4, 264 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[253 - 2]));
		profrot(4, 253 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[254 - 2]));
		profrot(4, 254 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[255 - 2]));
		profrot(4, 255 - 2);
		return;
	}
	case 41:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[268 - 2]));
		profrot(4, 268 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[269 - 2]));
		profrot(4, 269 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[270 - 2]));
		profrot(4, 270 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[271 - 2]));
		profrot(4, 271 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[272 - 2]));
		profrot(4, 272 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[273 - 2]));
		profrot(4, 273 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[274 - 2]));
		profrot(4, 274 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[275 - 2]));
		profrot(4, 275 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[276 - 2]));
		profrot(4, 276 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[265 - 2]));
		profrot(4, 265 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[266 - 2]));
		profrot(4, 266 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[267 - 2]));
		profrot(4, 267 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[280 - 2]));
		profrot(4, 280 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[281 - 2]));
		profrot(4, 281 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[282 - 2]));
		profrot(4, 282 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[283 - 2]));
		profrot(4, 283 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[284 - 2]));
		profrot(4, 284 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[285 - 2]));
		profrot(4, 285 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[286 - 2]));
		profrot(4, 286 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[287 - 2]));
		profrot(4, 287 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[288 - 2]));
		profrot(4, 288 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[277 - 2]));
		profrot(4, 277 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[278 - 2]));
		profrot(4, 278 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[279 - 2]));
		profrot(4, 279 - 2);
		return;
	}
	case 10:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[292 - 2]));
		profrot(4, 292 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[293 - 2]));
		profrot(4, 293 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[294 - 2]));
		profrot(4, 294 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[295 - 2]));
		profrot(4, 295 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[296 - 2]));
		profrot(4, 296 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[297 - 2]));
		profrot(4, 297 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[298 - 2]));
		profrot(4, 298 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[299 - 2]));
		profrot(4, 299 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[300 - 2]));
		profrot(4, 300 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[289 - 2]));
		profrot(4, 289 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[290 - 2]));
		profrot(4, 290 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[291 - 2]));
		profrot(4, 291 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[304 - 2]));
		profrot(4, 304 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[305 - 2]));
		profrot(4, 305 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[306 - 2]));
		profrot(4, 306 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[307 - 2]));
		profrot(4, 307 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[308 - 2]));
		profrot(4, 308 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[309 - 2]));
		profrot(4, 309 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[310 - 2]));
		profrot(4, 310 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[311 - 2]));
		profrot(4, 311 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[312 - 2]));
		profrot(4, 312 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[301 - 2]));
		profrot(4, 301 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[302 - 2]));
		profrot(4, 302 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[303 - 2]));
		profrot(4, 303 - 2);
		return;
	}
	case 37:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[316 - 2]));
		profrot(4, 316 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[317 - 2]));
		profrot(4, 317 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[318 - 2]));
		profrot(4, 318 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[319 - 2]));
		profrot(4, 319 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[320 - 2]));
		profrot(4, 320 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[321 - 2]));
		profrot(4, 321 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[322 - 2]));
		profrot(4, 322 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[323 - 2]));
		profrot(4, 323 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[324 - 2]));
		profrot(4, 324 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[313 - 2]));
		profrot(4, 313 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[314 - 2]));
		profrot(4, 314 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[315 - 2]));
		profrot(4, 315 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[328 - 2]));
		profrot(4, 328 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[329 - 2]));
		profrot(4, 329 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[330 - 2]));
		profrot(4, 330 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[331 - 2]));
		profrot(4, 331 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[332 - 2]));
		profrot(4, 332 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[333 - 2]));
		profrot(4, 333 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[334 - 2]));
		profrot(4, 334 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[335 - 2]));
		profrot(4, 335 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[336 - 2]));
		profrot(4, 336 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[325 - 2]));
		profrot(4, 325 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[326 - 2]));
		profrot(4, 326 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[327 - 2]));
		profrot(4, 327 - 2);
		return;
	}
	case 19:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[340 - 2]));
		profrot(4, 340 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[341 - 2]));
		profrot(4, 341 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[342 - 2]));
		profrot(4, 342 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[343 - 2]));
		profrot(4, 343 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[344 - 2]));
		profrot(4, 344 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[345 - 2]));
		profrot(4, 345 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[346 - 2]));
		profrot(4, 346 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[347 - 2]));
		profrot(4, 347 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[348 - 2]));
		profrot(4, 348 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[337 - 2]));
		profrot(4, 337 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[338 - 2]));
		profrot(4, 338 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[339 - 2]));
		profrot(4, 339 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[352 - 2]));
		profrot(4, 352 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[353 - 2]));
		profrot(4, 353 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[354 - 2]));
		profrot(4, 354 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[355 - 2]));
		profrot(4, 355 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[356 - 2]));
		profrot(4, 356 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[357 - 2]));
		profrot(4, 357 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[358 - 2]));
		profrot(4, 358 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[359 - 2]));
		profrot(4, 359 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[360 - 2]));
		profrot(4, 360 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[349 - 2]));
		profrot(4, 349 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[350 - 2]));
		profrot(4, 350 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[351 - 2]));
		profrot(4, 351 - 2);
		return;
	}
	case 39:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[364 - 2]));
		profrot(4, 364 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[365 - 2]));
		profrot(4, 365 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[366 - 2]));
		profrot(4, 366 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[367 - 2]));
		profrot(4, 367 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[368 - 2]));
		profrot(4, 368 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[369 - 2]));
		profrot(4, 369 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[370 - 2]));
		profrot(4, 370 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[371 - 2]));
		profrot(4, 371 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[372 - 2]));
		profrot(4, 372 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[361 - 2]));
		profrot(4, 361 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[362 - 2]));
		profrot(4, 362 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[363 - 2]));
		profrot(4, 363 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[376 - 2]));
		profrot(4, 376 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[377 - 2]));
		profrot(4, 377 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[378 - 2]));
		profrot(4, 378 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[379 - 2]));
		profrot(4, 379 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[380 - 2]));
		profrot(4, 380 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[381 - 2]));
		profrot(4, 381 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[382 - 2]));
		profrot(4, 382 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[383 - 2]));
		profrot(4, 383 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[384 - 2]));
		profrot(4, 384 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[373 - 2]));
		profrot(4, 373 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[374 - 2]));
		profrot(4, 374 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[375 - 2]));
		profrot(4, 375 - 2);
		return;
	}
	case 28:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[196 - 2]));
		profrot(4, 196 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[197 - 2]));
		profrot(4, 197 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[198 - 2]));
		profrot(4, 198 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[199 - 2]));
		profrot(4, 199 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[200 - 2]));
		profrot(4, 200 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[201 - 2]));
		profrot(4, 201 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[202 - 2]));
		profrot(4, 202 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[203 - 2]));
		profrot(4, 203 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[204 - 2]));
		profrot(4, 204 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[193 - 2]));
		profrot(4, 193 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[194 - 2]));
		profrot(4, 194 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[195 - 2]));
		profrot(4, 195 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[208 - 2]));
		profrot(4, 208 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[209 - 2]));
		profrot(4, 209 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[210 - 2]));
		profrot(4, 210 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[211 - 2]));
		profrot(4, 211 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[212 - 2]));
		profrot(4, 212 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[213 - 2]));
		profrot(4, 213 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[214 - 2]));
		profrot(4, 214 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[215 - 2]));
		profrot(4, 215 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[216 - 2]));
		profrot(4, 216 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[205 - 2]));
		profrot(4, 205 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[206 - 2]));
		profrot(4, 206 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[207 - 2]));
		profrot(4, 207 - 2);
		return;
	}
	case 43:switch (cc1)
	{
	case 8: strcat(salg, yd(alg_ftl[220 - 2]));
		profrot(4, 220 - 2);
		return;
	case 15:strcat(salg, yd(alg_ftl[221 - 2]));
		profrot(4, 221 - 2);
		return;
	case 53:strcat(salg, yd(alg_ftl[222 - 2]));
		profrot(4, 222 - 2);
		return;
	case 17:strcat(salg, yd(alg_ftl[223 - 2]));
		profrot(4, 223 - 2);
		return;
	case 24:strcat(salg, yd(alg_ftl[224 - 2]));
		profrot(4, 224 - 2);
		return;
	case 51:strcat(salg, yd(alg_ftl[225 - 2]));
		profrot(4, 225 - 2);
		return;
	case 26:strcat(salg, yd(alg_ftl[226 - 2]));
		profrot(4, 226 - 2);
		return;
	case 33:strcat(salg, yd(alg_ftl[227 - 2]));
		profrot(4, 227 - 2);
		return;
	case 45:strcat(salg, yd(alg_ftl[228 - 2]));
		profrot(4, 228 - 2);
		return;
	case 35:strcat(salg, yd(alg_ftl[217 - 2]));
		profrot(4, 217 - 2);
		return;
	case 6: strcat(salg, yd(alg_ftl[218 - 2]));
		profrot(4, 218 - 2);
		return;
	case 47:strcat(salg, yd(alg_ftl[219 - 2]));
		profrot(4, 219 - 2);
		return;
	case 2: strcat(salg, yd(alg_ftl[232 - 2]));
		profrot(4, 232 - 2);
		return;
	case 38:strcat(salg, yd(alg_ftl[233 - 2]));
		profrot(4, 233 - 2);
		return;
	case 9: strcat(salg, yd(alg_ftl[234 - 2]));
		profrot(4, 234 - 2);
		return;
	case 11:strcat(salg, yd(alg_ftl[235 - 2]));
		profrot(4, 235 - 2);
		return;
	case 36:strcat(salg, yd(alg_ftl[236 - 2]));
		profrot(4, 236 - 2);
		return;
	case 18:strcat(salg, yd(alg_ftl[237 - 2]));
		profrot(4, 237 - 2);
		return;
	case 20:strcat(salg, yd(alg_ftl[238 - 2]));
		profrot(4, 238 - 2);
		return;
	case 42:strcat(salg, yd(alg_ftl[239 - 2]));
		profrot(4, 239 - 2);
		return;
	case 27:strcat(salg, yd(alg_ftl[240 - 2]));
		profrot(4, 240 - 2);
		return;
	case 29:strcat(salg, yd(alg_ftl[229 - 2]));
		profrot(4, 229 - 2);
		return;
	case 44:strcat(salg, yd(alg_ftl[230 - 2]));
		profrot(4, 230 - 2);
		return;
	case 0: strcat(salg, yd(alg_ftl[231 - 2]));
		profrot(4, 231 - 2);
		return;
	}
	}
}

void f2l_BR()
{

	strcat(salg, " ");

	switch (ecc1)
	{
	case 5:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[103 - 2]));
		profrot(3, 103 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[104 - 2]));
		profrot(3, 104 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[105 - 2]));
		profrot(3, 105 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[106 - 2]));
		profrot(3, 106 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[107 - 2]));
		profrot(3, 107 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[108 - 2]));
		profrot(3, 108 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[97 - 2]));
		profrot(3, 97 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[98 - 2]));
		profrot(3, 98 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[99 - 2]));
		profrot(3, 99 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[100 - 2]));
		profrot(3, 100 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[101 - 2]));
		profrot(3, 101 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[102 - 2]));
		profrot(3, 102 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[115 - 2]));
		profrot(3, 115 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[116 - 2]));
		profrot(3, 116 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[117 - 2]));
		profrot(3, 117 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[118 - 2]));
		profrot(3, 118 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[119 - 2]));
		profrot(3, 119 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[120 - 2]));
		profrot(3, 120 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[109 - 2]));
		profrot(3, 109 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[110 - 2]));
		profrot(3, 110 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[111 - 2]));
		profrot(3, 111 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[112 - 2]));
		profrot(3, 112 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[113 - 2]));
		profrot(3, 113 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[114 - 2]));
		profrot(3, 114 - 2);
		return;
	}
	case 12:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[127 - 2]));
		profrot(3, 127 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[128 - 2]));
		profrot(3, 128 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[129 - 2]));
		profrot(3, 129 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[130 - 2]));
		profrot(3, 130 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[131 - 2]));
		profrot(3, 131 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[132 - 2]));
		profrot(3, 132 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[121 - 2]));
		profrot(3, 121 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[122 - 2]));
		profrot(3, 122 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[123 - 2]));
		profrot(3, 123 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[124 - 2]));
		profrot(3, 124 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[125 - 2]));
		profrot(3, 125 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[126 - 2]));
		profrot(3, 126 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[139 - 2]));
		profrot(3, 139 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[140 - 2]));
		profrot(3, 140 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[141 - 2]));
		profrot(3, 141 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[142 - 2]));
		profrot(3, 142 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[143 - 2]));
		profrot(3, 143 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[144 - 2]));
		profrot(3, 144 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[133 - 2]));
		profrot(3, 133 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[134 - 2]));
		profrot(3, 134 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[135 - 2]));
		profrot(3, 135 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[136 - 2]));
		profrot(3, 136 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[137 - 2]));
		profrot(3, 137 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[138 - 2]));
		profrot(3, 138 - 2);
		return;
	}
	case 14:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[151 - 2]));
		profrot(3, 151 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[152 - 2]));
		profrot(3, 152 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[153 - 2]));
		profrot(3, 153 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[154 - 2]));
		profrot(3, 154 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[155 - 2]));
		profrot(3, 155 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[156 - 2]));
		profrot(3, 156 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[145 - 2]));
		profrot(3, 145 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[146 - 2]));
		profrot(3, 146 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[147 - 2]));
		profrot(3, 147 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[148 - 2]));
		profrot(3, 148 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[149 - 2]));
		profrot(3, 149 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[150 - 2]));
		profrot(3, 150 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[163 - 2]));
		profrot(3, 163 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[164 - 2]));
		profrot(3, 164 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[165 - 2]));
		profrot(3, 165 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[166 - 2]));
		profrot(3, 166 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[167 - 2]));
		profrot(3, 167 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[168 - 2]));
		profrot(3, 168 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[157 - 2]));
		profrot(3, 157 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[158 - 2]));
		profrot(3, 158 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[159 - 2]));
		profrot(3, 159 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[160 - 2]));
		profrot(3, 160 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[161 - 2]));
		profrot(3, 161 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[162 - 2]));
		profrot(3, 162 - 2);
		return;
	}
	case 21:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[175 - 2]));
		profrot(3, 175 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[176 - 2]));
		profrot(3, 176 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[177 - 2]));
		profrot(3, 177 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[178 - 2]));
		profrot(3, 178 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[179 - 2]));
		profrot(3, 179 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[180 - 2]));
		profrot(3, 180 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[169 - 2]));
		profrot(3, 169 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[170 - 2]));
		profrot(3, 170 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[171 - 2]));
		profrot(3, 171 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[172 - 2]));
		profrot(3, 172 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[173 - 2]));
		profrot(3, 173 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[174 - 2]));
		profrot(3, 174 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[187 - 2]));
		profrot(3, 187 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[188 - 2]));
		profrot(3, 188 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[189 - 2]));
		profrot(3, 189 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[190 - 2]));
		profrot(3, 190 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[191 - 2]));
		profrot(3, 191 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[192 - 2]));
		profrot(3, 192 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[181 - 2]));
		profrot(3, 181 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[182 - 2]));
		profrot(3, 182 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[183 - 2]));
		profrot(3, 183 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[184 - 2]));
		profrot(3, 184 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[185 - 2]));
		profrot(3, 185 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[186 - 2]));
		profrot(3, 186 - 2);
		return;
	}
	case 23:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[7 - 2]));
		profrot(3, 7 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[8 - 2]));
		profrot(3, 8 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[9 - 2]));
		profrot(3, 9 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[10 - 2]));
		profrot(3, 10 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[11 - 2]));
		profrot(3, 11 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[12 - 2]));
		profrot(3, 12 - 2);
		return;
	case 26://null point
		return;
	case 33:strcat(salg, y2(alg_ftl[2 - 2]));
		profrot(3, 2 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[3 - 2]));
		profrot(3, 3 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[4 - 2]));
		profrot(3, 4 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[5 - 2]));
		profrot(3, 5 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[6 - 2]));
		profrot(3, 6 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[19 - 2]));
		profrot(3, 19 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[20 - 2]));
		profrot(3, 20 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[21 - 2]));
		profrot(3, 21 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[22 - 2]));
		profrot(3, 22 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[23 - 2]));
		profrot(3, 23 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[24 - 2]));
		profrot(3, 24 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[13 - 2]));
		profrot(3, 13 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[14 - 2]));
		profrot(3, 14 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[15 - 2]));
		profrot(3, 15 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[16 - 2]));
		profrot(3, 16 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[17 - 2]));
		profrot(3, 17 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[18 - 2]));
		profrot(3, 18 - 2);
		return;
	}
	case 30:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[31 - 2]));
		profrot(3, 31 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[32 - 2]));
		profrot(3, 32 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[33 - 2]));
		profrot(3, 33 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[34 - 2]));
		profrot(3, 34 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[35 - 2]));
		profrot(3, 35 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[36 - 2]));
		profrot(3, 36 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[25 - 2]));
		profrot(3, 25 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[26 - 2]));
		profrot(3, 26 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[27 - 2]));
		profrot(3, 27 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[28 - 2]));
		profrot(3, 28 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[29 - 2]));
		profrot(3, 29 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[30 - 2]));
		profrot(3, 30 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[43 - 2]));
		profrot(3, 43 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[44 - 2]));
		profrot(3, 44 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[45 - 2]));
		profrot(3, 45 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[46 - 2]));
		profrot(3, 46 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[47 - 2]));
		profrot(3, 47 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[48 - 2]));
		profrot(3, 48 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[37 - 2]));
		profrot(3, 37 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[38 - 2]));
		profrot(3, 38 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[39 - 2]));
		profrot(3, 39 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[40 - 2]));
		profrot(3, 40 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[41 - 2]));
		profrot(3, 41 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[42 - 2]));
		profrot(3, 42 - 2);
		return;
	}
	case 32:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[55 - 2]));
		profrot(3, 55 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[56 - 2]));
		profrot(3, 56 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[57 - 2]));
		profrot(3, 57 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[58 - 2]));
		profrot(3, 58 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[59 - 2]));
		profrot(3, 59 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[60 - 2]));
		profrot(3, 60 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[49 - 2]));
		profrot(3, 49 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[50 - 2]));
		profrot(3, 50 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[51 - 2]));
		profrot(3, 51 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[52 - 2]));
		profrot(3, 52 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[53 - 2]));
		profrot(3, 53 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[54 - 2]));
		profrot(3, 54 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[67 - 2]));
		profrot(3, 67 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[68 - 2]));
		profrot(3, 68 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[69 - 2]));
		profrot(3, 69 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[70 - 2]));
		profrot(3, 70 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[71 - 2]));
		profrot(3, 71 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[72 - 2]));
		profrot(3, 72 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[61 - 2]));
		profrot(3, 61 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[62 - 2]));
		profrot(3, 62 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[63 - 2]));
		profrot(3, 63 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[64 - 2]));
		profrot(3, 64 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[65 - 2]));
		profrot(3, 65 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[66 - 2]));
		profrot(3, 66 - 2);
		return;
	}
	case 3: switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[79 - 2]));
		profrot(3, 79 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[80 - 2]));
		profrot(3, 80 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[81 - 2]));
		profrot(3, 81 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[82 - 2]));
		profrot(3, 82 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[83 - 2]));
		profrot(3, 83 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[84 - 2]));
		profrot(3, 84 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[73 - 2]));
		profrot(3, 73 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[74 - 2]));
		profrot(3, 74 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[75 - 2]));
		profrot(3, 75 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[76 - 2]));
		profrot(3, 76 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[77 - 2]));
		profrot(3, 77 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[78 - 2]));
		profrot(3, 78 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[91 - 2]));
		profrot(3, 91 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[92 - 2]));
		profrot(3, 92 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[93 - 2]));
		profrot(3, 93 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[94 - 2]));
		profrot(3, 94 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[95 - 2]));
		profrot(3, 95 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[96 - 2]));
		profrot(3, 96 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[85 - 2]));
		profrot(3, 85 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[86 - 2]));
		profrot(3, 86 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[87 - 2]));
		profrot(3, 87 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[88 - 2]));
		profrot(3, 88 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[89 - 2]));
		profrot(3, 89 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[90 - 2]));
		profrot(3, 90 - 2);
		return;
	}
	case 1: switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[295 - 2]));
		profrot(3, 295 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[296 - 2]));
		profrot(3, 296 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[297 - 2]));
		profrot(3, 297 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[298 - 2]));
		profrot(3, 298 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[299 - 2]));
		profrot(3, 299 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[300 - 2]));
		profrot(3, 300 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[289 - 2]));
		profrot(3, 289 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[290 - 2]));
		profrot(3, 290 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[291 - 2]));
		profrot(3, 291 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[292 - 2]));
		profrot(3, 292 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[293 - 2]));
		profrot(3, 293 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[294 - 2]));
		profrot(3, 294 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[307 - 2]));
		profrot(3, 307 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[308 - 2]));
		profrot(3, 308 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[309 - 2]));
		profrot(3, 309 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[310 - 2]));
		profrot(3, 310 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[311 - 2]));
		profrot(3, 311 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[312 - 2]));
		profrot(3, 312 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[301 - 2]));
		profrot(3, 301 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[302 - 2]));
		profrot(3, 302 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[303 - 2]));
		profrot(3, 303 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[304 - 2]));
		profrot(3, 304 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[305 - 2]));
		profrot(3, 305 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[306 - 2]));
		profrot(3, 306 - 2);
		return;
	}
	case 41:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[319 - 2]));
		profrot(3, 319 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[320 - 2]));
		profrot(3, 320 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[321 - 2]));
		profrot(3, 321 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[322 - 2]));
		profrot(3, 322 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[323 - 2]));
		profrot(3, 323 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[324 - 2]));
		profrot(3, 324 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[313 - 2]));
		profrot(3, 313 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[314 - 2]));
		profrot(3, 314 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[315 - 2]));
		profrot(3, 315 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[316 - 2]));
		profrot(3, 316 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[317 - 2]));
		profrot(3, 317 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[318 - 2]));
		profrot(3, 318 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[331 - 2]));
		profrot(3, 331 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[332 - 2]));
		profrot(3, 332 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[333 - 2]));
		profrot(3, 333 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[334 - 2]));
		profrot(3, 334 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[335 - 2]));
		profrot(3, 335 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[336 - 2]));
		profrot(3, 336 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[325 - 2]));
		profrot(3, 325 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[326 - 2]));
		profrot(3, 326 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[327 - 2]));
		profrot(3, 327 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[328 - 2]));
		profrot(3, 328 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[329 - 2]));
		profrot(3, 329 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[330 - 2]));
		profrot(3, 330 - 2);
		return;
	}
	case 10:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[343 - 2]));
		profrot(3, 343 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[344 - 2]));
		profrot(3, 344 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[345 - 2]));
		profrot(3, 345 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[346 - 2]));
		profrot(3, 346 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[347 - 2]));
		profrot(3, 347 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[348 - 2]));
		profrot(3, 348 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[337 - 2]));
		profrot(3, 337 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[338 - 2]));
		profrot(3, 338 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[339 - 2]));
		profrot(3, 339 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[340 - 2]));
		profrot(3, 340 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[341 - 2]));
		profrot(3, 341 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[342 - 2]));
		profrot(3, 342 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[355 - 2]));
		profrot(3, 355 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[356 - 2]));
		profrot(3, 356 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[357 - 2]));
		profrot(3, 357 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[358 - 2]));
		profrot(3, 358 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[359 - 2]));
		profrot(3, 359 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[360 - 2]));
		profrot(3, 360 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[349 - 2]));
		profrot(3, 349 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[350 - 2]));
		profrot(3, 350 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[351 - 2]));
		profrot(3, 351 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[352 - 2]));
		profrot(3, 352 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[353 - 2]));
		profrot(3, 353 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[354 - 2]));
		profrot(3, 354 - 2);
		return;
	}
	case 37:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[367 - 2]));
		profrot(3, 367 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[368 - 2]));
		profrot(3, 368 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[369 - 2]));
		profrot(3, 369 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[370 - 2]));
		profrot(3, 370 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[371 - 2]));
		profrot(3, 371 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[372 - 2]));
		profrot(3, 372 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[361 - 2]));
		profrot(3, 361 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[362 - 2]));
		profrot(3, 362 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[363 - 2]));
		profrot(3, 363 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[364 - 2]));
		profrot(3, 364 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[365 - 2]));
		profrot(3, 365 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[366 - 2]));
		profrot(3, 366 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[379 - 2]));
		profrot(3, 379 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[380 - 2]));
		profrot(3, 380 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[381 - 2]));
		profrot(3, 381 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[382 - 2]));
		profrot(3, 382 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[383 - 2]));
		profrot(3, 383 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[384 - 2]));
		profrot(3, 384 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[373 - 2]));
		profrot(3, 373 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[374 - 2]));
		profrot(3, 374 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[375 - 2]));
		profrot(3, 375 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[376 - 2]));
		profrot(3, 376 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[377 - 2]));
		profrot(3, 377 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[378 - 2]));
		profrot(3, 378 - 2);
		return;
	}
	case 19:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[199 - 2]));
		profrot(3, 199 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[200 - 2]));
		profrot(3, 200 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[201 - 2]));
		profrot(3, 201 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[202 - 2]));
		profrot(3, 202 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[203 - 2]));
		profrot(3, 203 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[204 - 2]));
		profrot(3, 204 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[193 - 2]));
		profrot(3, 193 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[194 - 2]));
		profrot(3, 194 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[195 - 2]));
		profrot(3, 195 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[196 - 2]));
		profrot(3, 196 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[197 - 2]));
		profrot(3, 197 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[198 - 2]));
		profrot(3, 198 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[211 - 2]));
		profrot(3, 211 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[212 - 2]));
		profrot(3, 212 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[213 - 2]));
		profrot(3, 213 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[214 - 2]));
		profrot(3, 214 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[215 - 2]));
		profrot(3, 215 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[216 - 2]));
		profrot(3, 216 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[205 - 2]));
		profrot(3, 205 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[206 - 2]));
		profrot(3, 206 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[207 - 2]));
		profrot(3, 207 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[208 - 2]));
		profrot(3, 208 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[209 - 2]));
		profrot(3, 209 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[210 - 2]));
		profrot(3, 210 - 2);
		return;
	}
	case 39:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[223 - 2]));
		profrot(3, 223 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[224 - 2]));
		profrot(3, 224 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[225 - 2]));
		profrot(3, 225 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[226 - 2]));
		profrot(3, 226 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[227 - 2]));
		profrot(3, 227 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[228 - 2]));
		profrot(3, 228 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[217 - 2]));
		profrot(3, 217 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[218 - 2]));
		profrot(3, 218 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[219 - 2]));
		profrot(3, 219 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[220 - 2]));
		profrot(3, 220 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[221 - 2]));
		profrot(3, 221 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[222 - 2]));
		profrot(3, 222 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[235 - 2]));
		profrot(3, 235 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[236 - 2]));
		profrot(3, 236 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[237 - 2]));
		profrot(3, 237 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[238 - 2]));
		profrot(3, 238 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[239 - 2]));
		profrot(3, 239 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[240 - 2]));
		profrot(3, 240 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[229 - 2]));
		profrot(3, 229 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[230 - 2]));
		profrot(3, 230 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[231 - 2]));
		profrot(3, 231 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[232 - 2]));
		profrot(3, 232 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[233 - 2]));
		profrot(3, 233 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[234 - 2]));
		profrot(3, 234 - 2);
		return;
	}
	case 28:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[247 - 2]));
		profrot(3, 247 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[248 - 2]));
		profrot(3, 248 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[249 - 2]));
		profrot(3, 249 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[250 - 2]));
		profrot(3, 250 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[251 - 2]));
		profrot(3, 251 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[252 - 2]));
		profrot(3, 252 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[241 - 2]));
		profrot(3, 241 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[242 - 2]));
		profrot(3, 242 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[243 - 2]));
		profrot(3, 243 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[244 - 2]));
		profrot(3, 244 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[245 - 2]));
		profrot(3, 245 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[246 - 2]));
		profrot(3, 246 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[259 - 2]));
		profrot(3, 259 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[260 - 2]));
		profrot(3, 260 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[261 - 2]));
		profrot(3, 261 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[262 - 2]));
		profrot(3, 262 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[263 - 2]));
		profrot(3, 263 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[264 - 2]));
		profrot(3, 264 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[253 - 2]));
		profrot(3, 253 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[254 - 2]));
		profrot(3, 254 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[255 - 2]));
		profrot(3, 255 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[256 - 2]));
		profrot(3, 256 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[257 - 2]));
		profrot(3, 257 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[258 - 2]));
		profrot(3, 258 - 2);
		return;
	}
	case 43:switch (cc1)
	{
	case 8: strcat(salg, y2(alg_ftl[271 - 2]));
		profrot(3, 271 - 2);
		return;
	case 15:strcat(salg, y2(alg_ftl[272 - 2]));
		profrot(3, 272 - 2);
		return;
	case 53:strcat(salg, y2(alg_ftl[273 - 2]));
		profrot(3, 273 - 2);
		return;
	case 17:strcat(salg, y2(alg_ftl[274 - 2]));
		profrot(3, 274 - 2);
		return;
	case 24:strcat(salg, y2(alg_ftl[275 - 2]));
		profrot(3, 275 - 2);
		return;
	case 51:strcat(salg, y2(alg_ftl[276 - 2]));
		profrot(3, 276 - 2);
		return;
	case 26:strcat(salg, y2(alg_ftl[265 - 2]));
		profrot(3, 265 - 2);
		return;
	case 33:strcat(salg, y2(alg_ftl[266 - 2]));
		profrot(3, 266 - 2);
		return;
	case 45:strcat(salg, y2(alg_ftl[267 - 2]));
		profrot(3, 267 - 2);
		return;
	case 35:strcat(salg, y2(alg_ftl[268 - 2]));
		profrot(3, 268 - 2);
		return;
	case 6: strcat(salg, y2(alg_ftl[269 - 2]));
		profrot(3, 269 - 2);
		return;
	case 47:strcat(salg, y2(alg_ftl[270 - 2]));
		profrot(3, 270 - 2);
		return;
	case 2: strcat(salg, y2(alg_ftl[283 - 2]));
		profrot(3, 283 - 2);
		return;
	case 38:strcat(salg, y2(alg_ftl[284 - 2]));
		profrot(3, 284 - 2);
		return;
	case 9: strcat(salg, y2(alg_ftl[285 - 2]));
		profrot(3, 285 - 2);
		return;
	case 11:strcat(salg, y2(alg_ftl[286 - 2]));
		profrot(3, 286 - 2);
		return;
	case 36:strcat(salg, y2(alg_ftl[287 - 2]));
		profrot(3, 287 - 2);
		return;
	case 18:strcat(salg, y2(alg_ftl[288 - 2]));
		profrot(3, 288 - 2);
		return;
	case 20:strcat(salg, y2(alg_ftl[277 - 2]));
		profrot(3, 277 - 2);
		return;
	case 42:strcat(salg, y2(alg_ftl[278 - 2]));
		profrot(3, 278 - 2);
		return;
	case 27:strcat(salg, y2(alg_ftl[279 - 2]));
		profrot(3, 279 - 2);
		return;
	case 29:strcat(salg, y2(alg_ftl[280 - 2]));
		profrot(3, 280 - 2);
		return;
	case 44:strcat(salg, y2(alg_ftl[281 - 2]));
		profrot(3, 281 - 2);
		return;
	case 0: strcat(salg, y2(alg_ftl[282 - 2]));
		profrot(3, 282 - 2);
		return;
	}
	}
}

void f2l_OB(void)
{

	strcat(salg, " ");

	switch (ecc1)
	{
	case 5:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[154 - 2]));
		profrot(2, 154 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[155 - 2]));
		profrot(2, 155 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[156 - 2]));
		profrot(2, 156 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[145 - 2]));
		profrot(2, 145 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[146 - 2]));
		profrot(2, 146 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[147 - 2]));
		profrot(2, 147 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[148 - 2]));
		profrot(2, 148 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[149 - 2]));
		profrot(2, 149 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[150 - 2]));
		profrot(2, 150 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[151 - 2]));
		profrot(2, 151 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[152 - 2]));
		profrot(2, 152 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[153 - 2]));
		profrot(2, 153 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[166 - 2]));
		profrot(2, 166 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[167 - 2]));
		profrot(2, 167 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[168 - 2]));
		profrot(2, 168 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[157 - 2]));
		profrot(2, 157 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[158 - 2]));
		profrot(2, 158 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[159 - 2]));
		profrot(2, 159 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[160 - 2]));
		profrot(2, 160 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[161 - 2]));
		profrot(2, 161 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[162 - 2]));
		profrot(2, 162 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[163 - 2]));
		profrot(2, 163 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[164 - 2]));
		profrot(2, 164 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[165 - 2]));
		profrot(2, 165 - 2);
		return;
	}
	case 12:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[178 - 2]));
		profrot(2, 178 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[179 - 2]));
		profrot(2, 179 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[180 - 2]));
		profrot(2, 180 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[169 - 2]));
		profrot(2, 169 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[170 - 2]));
		profrot(2, 170 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[171 - 2]));
		profrot(2, 171 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[172 - 2]));
		profrot(2, 172 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[173 - 2]));
		profrot(2, 173 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[174 - 2]));
		profrot(2, 174 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[175 - 2]));
		profrot(2, 175 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[176 - 2]));
		profrot(2, 176 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[177 - 2]));
		profrot(2, 177 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[190 - 2]));
		profrot(2, 190 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[191 - 2]));
		profrot(2, 191 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[192 - 2]));
		profrot(2, 192 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[181 - 2]));
		profrot(2, 181 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[182 - 2]));
		profrot(2, 182 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[183 - 2]));
		profrot(2, 183 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[184 - 2]));
		profrot(2, 184 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[185 - 2]));
		profrot(2, 185 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[186 - 2]));
		profrot(2, 186 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[187 - 2]));
		profrot(2, 187 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[188 - 2]));
		profrot(2, 188 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[189 - 2]));
		profrot(2, 189 - 2);
		return;
	}
	case 14:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[10 - 2]));
		profrot(2, 10 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[11 - 2]));
		profrot(2, 11 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[12 - 2]));
		profrot(2, 12 - 2);
		return;
	case 17://null point
		return;
	case 24:strcat(salg, y(alg_ftl[2 - 2]));
		profrot(2, 2 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[3 - 2]));
		profrot(2, 3 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[4 - 2]));
		profrot(2, 4 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[5 - 2]));
		profrot(2, 5 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[6 - 2]));
		profrot(2, 6 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[7 - 2]));
		profrot(2, 7 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[8 - 2]));
		profrot(2, 8 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[9 - 2]));
		profrot(2, 9 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[22 - 2]));
		profrot(2, 22 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[23 - 2]));
		profrot(2, 23 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[24 - 2]));
		profrot(2, 24 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[13 - 2]));
		profrot(2, 13 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[14 - 2]));
		profrot(2, 14 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[15 - 2]));
		profrot(2, 15 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[16 - 2]));
		profrot(2, 16 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[17 - 2]));
		profrot(2, 17 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[18 - 2]));
		profrot(2, 18 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[19 - 2]));
		profrot(2, 19 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[20 - 2]));
		profrot(2, 20 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[21 - 2]));
		profrot(2, 21 - 2);
		return;
	}
	case 21:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[34 - 2]));
		profrot(2, 34 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[35 - 2]));
		profrot(2, 35 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[36 - 2]));
		profrot(2, 36 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[25 - 2]));
		profrot(2, 25 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[26 - 2]));
		profrot(2, 26 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[27 - 2]));
		profrot(2, 27 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[28 - 2]));
		profrot(2, 28 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[29 - 2]));
		profrot(2, 29 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[30 - 2]));
		profrot(2, 30 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[31 - 2]));
		profrot(2, 31 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[32 - 2]));
		profrot(2, 32 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[33 - 2]));
		profrot(2, 33 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[46 - 2]));
		profrot(2, 46 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[47 - 2]));
		profrot(2, 47 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[48 - 2]));
		profrot(2, 48 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[37 - 2]));
		profrot(2, 37 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[38 - 2]));
		profrot(2, 38 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[39 - 2]));
		profrot(2, 39 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[40 - 2]));
		profrot(2, 40 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[41 - 2]));
		profrot(2, 41 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[42 - 2]));
		profrot(2, 42 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[43 - 2]));
		profrot(2, 43 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[44 - 2]));
		profrot(2, 44 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[45 - 2]));
		profrot(2, 45 - 2);
		return;
	}
	case 23:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[58 - 2]));
		profrot(2, 58 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[59 - 2]));
		profrot(2, 59 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[60 - 2]));
		profrot(2, 60 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[49 - 2]));
		profrot(2, 49 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[50 - 2]));
		profrot(2, 50 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[51 - 2]));
		profrot(2, 51 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[52 - 2]));
		profrot(2, 52 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[53 - 2]));
		profrot(2, 53 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[54 - 2]));
		profrot(2, 54 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[55 - 2]));
		profrot(2, 55 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[56 - 2]));
		profrot(2, 56 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[57 - 2]));
		profrot(2, 57 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[70 - 2]));
		profrot(2, 70 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[71 - 2]));
		profrot(2, 71 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[72 - 2]));
		profrot(2, 72 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[61 - 2]));
		profrot(2, 61 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[62 - 2]));
		profrot(2, 62 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[63 - 2]));
		profrot(2, 63 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[64 - 2]));
		profrot(2, 64 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[65 - 2]));
		profrot(2, 65 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[66 - 2]));
		profrot(2, 66 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[67 - 2]));
		profrot(2, 67 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[68 - 2]));
		profrot(2, 68 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[69 - 2]));
		profrot(2, 69 - 2);
		return;
	}
	case 30:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[82 - 2]));
		profrot(2, 82 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[83 - 2]));
		profrot(2, 83 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[84 - 2]));
		profrot(2, 84 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[73 - 2]));
		profrot(2, 73 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[74 - 2]));
		profrot(2, 74 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[75 - 2]));
		profrot(2, 75 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[76 - 2]));
		profrot(2, 76 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[77 - 2]));
		profrot(2, 77 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[78 - 2]));
		profrot(2, 78 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[79 - 2]));
		profrot(2, 79 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[80 - 2]));
		profrot(2, 80 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[81 - 2]));
		profrot(2, 81 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[94 - 2]));
		profrot(2, 94 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[95 - 2]));
		profrot(2, 95 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[96 - 2]));
		profrot(2, 96 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[85 - 2]));
		profrot(2, 85 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[86 - 2]));
		profrot(2, 86 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[87 - 2]));
		profrot(2, 87 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[88 - 2]));
		profrot(2, 88 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[89 - 2]));
		profrot(2, 89 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[90 - 2]));
		profrot(2, 90 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[91 - 2]));
		profrot(2, 91 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[92 - 2]));
		profrot(2, 92 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[93 - 2]));
		profrot(2, 93 - 2);
		return;
	}
	case 32:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[106 - 2]));
		profrot(2, 106 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[107 - 2]));
		profrot(2, 107 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[108 - 2]));
		profrot(2, 108 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[97 - 2]));
		profrot(2, 97 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[98 - 2]));
		profrot(2, 98 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[99 - 2]));
		profrot(2, 99 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[100 - 2]));
		profrot(2, 100 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[101 - 2]));
		profrot(2, 101 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[102 - 2]));
		profrot(2, 102 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[103 - 2]));
		profrot(2, 103 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[104 - 2]));
		profrot(2, 104 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[105 - 2]));
		profrot(2, 105 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[118 - 2]));
		profrot(2, 118 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[119 - 2]));
		profrot(2, 119 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[120 - 2]));
		profrot(2, 120 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[109 - 2]));
		profrot(2, 109 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[110 - 2]));
		profrot(2, 110 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[111 - 2]));
		profrot(2, 111 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[112 - 2]));
		profrot(2, 112 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[113 - 2]));
		profrot(2, 113 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[114 - 2]));
		profrot(2, 114 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[115 - 2]));
		profrot(2, 115 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[116 - 2]));
		profrot(2, 116 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[117 - 2]));
		profrot(2, 117 - 2);
		return;
	}
	case 3: switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[130 - 2]));
		profrot(2, 130 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[131 - 2]));
		profrot(2, 131 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[132 - 2]));
		profrot(2, 132 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[121 - 2]));
		profrot(2, 121 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[122 - 2]));
		profrot(2, 122 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[123 - 2]));
		profrot(2, 123 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[124 - 2]));
		profrot(2, 124 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[125 - 2]));
		profrot(2, 125 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[126 - 2]));
		profrot(2, 126 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[127 - 2]));
		profrot(2, 127 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[128 - 2]));
		profrot(2, 128 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[129 - 2]));
		profrot(2, 129 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[142 - 2]));
		profrot(2, 142 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[143 - 2]));
		profrot(2, 143 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[144 - 2]));
		profrot(2, 144 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[133 - 2]));
		profrot(2, 133 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[134 - 2]));
		profrot(2, 134 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[135 - 2]));
		profrot(2, 135 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[136 - 2]));
		profrot(2, 136 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[137 - 2]));
		profrot(2, 137 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[138 - 2]));
		profrot(2, 138 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[139 - 2]));
		profrot(2, 139 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[140 - 2]));
		profrot(2, 140 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[141 - 2]));
		profrot(2, 141 - 2);
		return;
	}
	case 1: switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[346 - 2]));
		profrot(2, 346 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[347 - 2]));
		profrot(2, 347 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[348 - 2]));
		profrot(2, 348 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[337 - 2]));
		profrot(2, 337 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[338 - 2]));
		profrot(2, 338 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[339 - 2]));
		profrot(2, 339 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[340 - 2]));
		profrot(2, 340 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[341 - 2]));
		profrot(2, 341 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[342 - 2]));
		profrot(2, 342 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[343 - 2]));
		profrot(2, 343 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[344 - 2]));
		profrot(2, 344 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[345 - 2]));
		profrot(2, 345 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[358 - 2]));
		profrot(2, 358 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[359 - 2]));
		profrot(2, 359 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[360 - 2]));
		profrot(2, 360 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[349 - 2]));
		profrot(2, 349 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[350 - 2]));
		profrot(2, 350 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[351 - 2]));
		profrot(2, 351 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[352 - 2]));
		profrot(2, 352 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[353 - 2]));
		profrot(2, 353 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[354 - 2]));
		profrot(2, 354 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[355 - 2]));
		profrot(2, 355 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[356 - 2]));
		profrot(2, 356 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[357 - 2]));
		profrot(2, 357 - 2);
		return;
	}
	case 41:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[370 - 2]));
		profrot(2, 370 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[371 - 2]));
		profrot(2, 371 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[372 - 2]));
		profrot(2, 372 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[361 - 2]));
		profrot(2, 361 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[362 - 2]));
		profrot(2, 362 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[363 - 2]));
		profrot(2, 363 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[364 - 2]));
		profrot(2, 364 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[365 - 2]));
		profrot(2, 365 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[366 - 2]));
		profrot(2, 366 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[367 - 2]));
		profrot(2, 367 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[368 - 2]));
		profrot(2, 368 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[369 - 2]));
		profrot(2, 369 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[382 - 2]));
		profrot(2, 382 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[383 - 2]));
		profrot(2, 383 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[384 - 2]));
		profrot(2, 384 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[373 - 2]));
		profrot(2, 373 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[374 - 2]));
		profrot(2, 374 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[375 - 2]));
		profrot(2, 375 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[376 - 2]));
		profrot(2, 376 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[377 - 2]));
		profrot(2, 377 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[378 - 2]));
		profrot(2, 378 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[379 - 2]));
		profrot(2, 379 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[380 - 2]));
		profrot(2, 380 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[381 - 2]));
		profrot(2, 381 - 2);
		return;
	}
	case 10:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[202 - 2]));
		profrot(2, 202 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[203 - 2]));
		profrot(2, 203 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[204 - 2]));
		profrot(2, 204 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[193 - 2]));
		profrot(2, 193 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[194 - 2]));
		profrot(2, 194 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[195 - 2]));
		profrot(2, 195 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[196 - 2]));
		profrot(2, 196 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[197 - 2]));
		profrot(2, 197 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[198 - 2]));
		profrot(2, 198 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[199 - 2]));
		profrot(2, 199 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[200 - 2]));
		profrot(2, 200 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[201 - 2]));
		profrot(2, 201 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[214 - 2]));
		profrot(2, 214 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[215 - 2]));
		profrot(2, 215 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[216 - 2]));
		profrot(2, 216 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[205 - 2]));
		profrot(2, 205 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[206 - 2]));
		profrot(2, 206 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[207 - 2]));
		profrot(2, 207 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[208 - 2]));
		profrot(2, 208 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[209 - 2]));
		profrot(2, 209 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[210 - 2]));
		profrot(2, 210 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[211 - 2]));
		profrot(2, 211 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[212 - 2]));
		profrot(2, 212 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[213 - 2]));
		profrot(2, 213 - 2);
		return;
	}
	case 37:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[226 - 2]));
		profrot(2, 226 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[227 - 2]));
		profrot(2, 227 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[228 - 2]));
		profrot(2, 228 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[217 - 2]));
		profrot(2, 217 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[218 - 2]));
		profrot(2, 218 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[219 - 2]));
		profrot(2, 219 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[220 - 2]));
		profrot(2, 220 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[221 - 2]));
		profrot(2, 221 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[222 - 2]));
		profrot(2, 222 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[223 - 2]));
		profrot(2, 223 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[224 - 2]));
		profrot(2, 224 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[225 - 2]));
		profrot(2, 225 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[238 - 2]));
		profrot(2, 238 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[239 - 2]));
		profrot(2, 239 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[240 - 2]));
		profrot(2, 240 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[229 - 2]));
		profrot(2, 229 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[230 - 2]));
		profrot(2, 230 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[231 - 2]));
		profrot(2, 231 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[232 - 2]));
		profrot(2, 232 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[233 - 2]));
		profrot(2, 233 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[234 - 2]));
		profrot(2, 234 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[235 - 2]));
		profrot(2, 235 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[236 - 2]));
		profrot(2, 236 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[237 - 2]));
		profrot(2, 237 - 2);
		return;
	}
	case 19:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[250 - 2]));
		profrot(2, 250 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[251 - 2]));
		profrot(2, 251 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[252 - 2]));
		profrot(2, 252 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[241 - 2]));
		profrot(2, 241 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[242 - 2]));
		profrot(2, 242 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[243 - 2]));
		profrot(2, 243 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[244 - 2]));
		profrot(2, 244 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[245 - 2]));
		profrot(2, 245 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[246 - 2]));
		profrot(2, 246 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[247 - 2]));
		profrot(2, 247 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[248 - 2]));
		profrot(2, 248 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[249 - 2]));
		profrot(2, 249 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[262 - 2]));
		profrot(2, 262 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[263 - 2]));
		profrot(2, 263 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[264 - 2]));
		profrot(2, 264 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[253 - 2]));
		profrot(2, 253 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[254 - 2]));
		profrot(2, 254 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[255 - 2]));
		profrot(2, 255 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[256 - 2]));
		profrot(2, 256 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[257 - 2]));
		profrot(2, 257 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[258 - 2]));
		profrot(2, 258 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[259 - 2]));
		profrot(2, 259 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[260 - 2]));
		profrot(2, 260 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[261 - 2]));
		profrot(2, 261 - 2);
		return;
	}
	case 39:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[274 - 2]));
		profrot(2, 274 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[275 - 2]));
		profrot(2, 275 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[276 - 2]));
		profrot(2, 276 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[265 - 2]));
		profrot(2, 265 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[266 - 2]));
		profrot(2, 266 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[267 - 2]));
		profrot(2, 267 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[268 - 2]));
		profrot(2, 268 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[269 - 2]));
		profrot(2, 269 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[270 - 2]));
		profrot(2, 270 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[271 - 2]));
		profrot(2, 271 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[272 - 2]));
		profrot(2, 272 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[273 - 2]));
		profrot(2, 273 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[286 - 2]));
		profrot(2, 286 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[287 - 2]));
		profrot(2, 287 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[288 - 2]));
		profrot(2, 288 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[277 - 2]));
		profrot(2, 277 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[278 - 2]));
		profrot(2, 278 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[279 - 2]));
		profrot(2, 279 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[280 - 2]));
		profrot(2, 280 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[281 - 2]));
		profrot(2, 281 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[282 - 2]));
		profrot(2, 282 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[283 - 2]));
		profrot(2, 283 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[284 - 2]));
		profrot(2, 284 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[285 - 2]));
		profrot(2, 285 - 2);
		return;
	}
	case 28:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[298 - 2]));
		profrot(2, 298 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[299 - 2]));
		profrot(2, 299 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[300 - 2]));
		profrot(2, 300 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[289 - 2]));
		profrot(2, 289 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[290 - 2]));
		profrot(2, 290 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[291 - 2]));
		profrot(2, 291 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[292 - 2]));
		profrot(2, 292 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[293 - 2]));
		profrot(2, 293 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[294 - 2]));
		profrot(2, 294 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[295 - 2]));
		profrot(2, 295 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[296 - 2]));
		profrot(2, 296 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[297 - 2]));
		profrot(2, 297 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[310 - 2]));
		profrot(2, 310 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[311 - 2]));
		profrot(2, 311 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[312 - 2]));
		profrot(2, 312 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[301 - 2]));
		profrot(2, 301 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[302 - 2]));
		profrot(2, 302 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[303 - 2]));
		profrot(2, 303 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[304 - 2]));
		profrot(2, 304 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[305 - 2]));
		profrot(2, 305 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[306 - 2]));
		profrot(2, 306 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[307 - 2]));
		profrot(2, 307 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[308 - 2]));
		profrot(2, 308 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[309 - 2]));
		profrot(2, 309 - 2);
		return;
	}
	case 43:switch (cc1)
	{
	case 8: strcat(salg, y(alg_ftl[322 - 2]));
		profrot(2, 322 - 2);
		return;
	case 15:strcat(salg, y(alg_ftl[323 - 2]));
		profrot(2, 323 - 2);
		return;
	case 53:strcat(salg, y(alg_ftl[324 - 2]));
		profrot(2, 324 - 2);
		return;
	case 17:strcat(salg, y(alg_ftl[313 - 2]));
		profrot(2, 313 - 2);
		return;
	case 24:strcat(salg, y(alg_ftl[314 - 2]));
		profrot(2, 314 - 2);
		return;
	case 51:strcat(salg, y(alg_ftl[315 - 2]));
		profrot(2, 315 - 2);
		return;
	case 26:strcat(salg, y(alg_ftl[316 - 2]));
		profrot(2, 316 - 2);
		return;
	case 33:strcat(salg, y(alg_ftl[317 - 2]));
		profrot(2, 317 - 2);
		return;
	case 45:strcat(salg, y(alg_ftl[318 - 2]));
		profrot(2, 318 - 2);
		return;
	case 35:strcat(salg, y(alg_ftl[319 - 2]));
		profrot(2, 319 - 2);
		return;
	case 6: strcat(salg, y(alg_ftl[320 - 2]));
		profrot(2, 320 - 2);
		return;
	case 47:strcat(salg, y(alg_ftl[321 - 2]));
		profrot(2, 321 - 2);
		return;
	case 2: strcat(salg, y(alg_ftl[334 - 2]));
		profrot(2, 334 - 2);
		return;
	case 38:strcat(salg, y(alg_ftl[335 - 2]));
		profrot(2, 335 - 2);
		return;
	case 9: strcat(salg, y(alg_ftl[336 - 2]));
		profrot(2, 336 - 2);
		return;
	case 11:strcat(salg, y(alg_ftl[325 - 2]));
		profrot(2, 325 - 2);
		return;
	case 36:strcat(salg, y(alg_ftl[326 - 2]));
		profrot(2, 326 - 2);
		return;
	case 18:strcat(salg, y(alg_ftl[327 - 2]));
		profrot(2, 327 - 2);
		return;
	case 20:strcat(salg, y(alg_ftl[328 - 2]));
		profrot(2, 328 - 2);
		return;
	case 42:strcat(salg, y(alg_ftl[329 - 2]));
		profrot(2, 329 - 2);
		return;
	case 27:strcat(salg, y(alg_ftl[330 - 2]));
		profrot(2, 330 - 2);
		return;
	case 29:strcat(salg, y(alg_ftl[331 - 2]));
		profrot(2, 331 - 2);
		return;
	case 44:strcat(salg, y(alg_ftl[332 - 2]));
		profrot(2, 332 - 2);
		return;
	case 0: strcat(salg, y(alg_ftl[333 - 2]));
		profrot(2, 333 - 2);
		return;
	}
	}
}

char * yd(char algo[100])
{
	int i;
	char alg[100];
	std::string strio(algo);
	strcpy(alg, algo);
	std::string stio(alg);
	for (i = 0; i < strlen(alg); i++)
	{
		switch (alg[i])
		{
		case 'R': alg[i] = 'F'; break;
		case 'B': alg[i] = 'R'; break;
		case 'L': alg[i] = 'B'; break;
		case 'F': alg[i] = 'L'; break;
		}
	}
	std::string stiIo(alg);
	return alg;
}

char * y2(char algo[100])
{
	int i;
	char alg[100];

	std::string strio(algo);
	strcpy(alg, algo);
	std::string stio(alg);
	for (i = 0; i < strlen(alg); i++)
	{
		switch (alg[i])
		{
		case 'R': alg[i] = 'L'; break;
		case 'B': alg[i] = 'F'; break;
		case 'L': alg[i] = 'R'; break;
		case 'F': alg[i] = 'B'; break;
		}
	}
	std::string stiIo(alg);
	return alg;
}

char * y(char algo[100])
{
	int i;
	char alg[100];

	std::string strio(algo);

//	System::String^ fin8 = gcnew String(strio.c_str());
//	Windows::Forms::MessageBox::Show(fin8, "recieved");
	
	strcpy(alg, algo);

	std::string stio(alg);
//	System::String^ fingn = gcnew String(stio.c_str());
//	Windows::Forms::MessageBox::Show(fingn, "copied");


	for (i = 0; i < strlen(alg); i++)
	{
		switch (alg[i])
		{
		case 'R': alg[i] = 'B'; break;
		case 'B': alg[i] = 'L'; break;
		case 'L': alg[i] = 'F'; break;
		case 'F': alg[i] = 'R'; break;
		}
	}
	std::string stiIo(alg); 
	return alg;
}

void loadc(int i)
{
	switch (i)
	{
	case 0: cc1 = 29; cc2 = 44; break;
	case 2: cc1 = 9; cc2 = 38; break;
	case 6: cc1 = 35; cc2 = 47; break;
	case 8: cc1 = 15; cc2 = 53; break;
	case 9: cc1 = 2; cc2 = 38; break;
	case 11: cc1 = 36; cc2 = 18; break;
	case 15: cc1 = 8; cc2 = 53; break;
	case 17: cc1 = 24; cc2 = 51; break;
	case 18: cc1 = 36; cc2 = 11; break;
	case 20: cc1 = 42; cc2 = 27; break;
	case 24: cc1 = 17; cc2 = 51; break;
	case 26: cc1 = 33; cc2 = 45; break;
	case 27: cc1 = 20; cc2 = 42; break;
	case 29: cc1 = 0; cc2 = 44; break;
	case 33: cc1 = 26; cc2 = 45; break;
	case 35: cc1 = 6; cc2 = 47; break;
	case 36: cc1 = 18; cc2 = 11; break;
	case 38: cc1 = 2; cc2 = 9; break;
	case 42: cc1 = 20; cc2 = 27; break;
	case 44: cc1 = 29; cc2 = 0; break;
	case 45: cc1 = 26; cc2 = 33; break;
	case 47: cc1 = 35; cc2 = 6; break;
	case 51: cc1 = 24; cc2 = 17; break;
	case 53: cc1 = 8; cc2 = 15; break;
	}
}

void cross(int f, int wl)
{
	switch (f)
	{
	case 2: switch (wl)
	{
	case 1:  strcat(salg, " ");
		strcat(salg, alg[23]);
		profrot(1, 23);
		return;

	case 41: strcat(salg, " ");
		strcat(salg, alg[24]);
		profrot(1, 24);
		return;

	case 10: strcat(salg, " ");
		strcat(salg, alg[25]);
		profrot(1, 25);
		return;

	case 37: strcat(salg, " ");
		strcat(salg, alg[26]);
		profrot(1, 26);
		return;

	case 19: strcat(salg, " ");
		strcat(salg, alg[27]);
		profrot(1, 27);
		return;

	case 39: strcat(salg, " ");
		strcat(salg, alg[28]);
		profrot(1, 28);
		return;

	case 28: strcat(salg, " ");
		strcat(salg, alg[29]);
		profrot(1, 29);
		return;

	case 43: strcat(salg, " ");
		strcat(salg, alg[30]);
		profrot(1, 30);
		return;

	case 5:  strcat(salg, " ");
		strcat(salg, alg[31]);
		profrot(1, 31);
		return;

	case 12: strcat(salg, " ");
		strcat(salg, alg[32]);
		profrot(1, 32);
		return;

	case 14: strcat(salg, " ");
		strcat(salg, alg[33]);
		profrot(1, 33);
		return;

	case 21: strcat(salg, " ");
		strcat(salg, alg[34]);
		profrot(1, 34);
		return;

	case 23: strcat(salg, " ");
		strcat(salg, alg[35]);
		profrot(1, 35);
		return;

	case 30: strcat(salg, " ");
		strcat(salg, alg[36]);
		profrot(1, 36);
		return;

	case 32: strcat(salg, " ");
		strcat(salg, alg[37]);
		profrot(1, 37);
		return;

	case 3:  strcat(salg, " ");
		strcat(salg, alg[38]);
		profrot(1, 38);
		return;

	case 7:  strcat(salg, " ");
		strcat(salg, alg[39]);
		profrot(1, 39);
		return;

	case 16: strcat(salg, " ");
		strcat(salg, alg[40]);
		profrot(1, 40);
		return;

	case 52: strcat(salg, " ");
		strcat(salg, alg[41]);
		profrot(1, 41);
		return;

	case 25: strcat(salg, " ");
		strcat(salg, alg[42]);
		profrot(1, 42);
		return;

	case 48: strcat(salg, " ");
		strcat(salg, alg[43]);
		profrot(1, 43);
		return;

	case 34: strcat(salg, " ");
		strcat(salg, alg[44]);
		profrot(1, 44);
		return;

	case 46: strcat(salg, " ");
		strcat(salg, alg[45]);
		profrot(1, 45);
		return;
	}
	case 12:  switch (wl)
	{
	case 1:  strcat(salg, " ");
		strcat(salg, alg[0]);
		profrot(1, 0);
		return;

	case 41: strcat(salg, " ");
		strcat(salg, alg[1]);
		profrot(1, 1);
		return;

	case 10: strcat(salg, " ");
		strcat(salg, alg[2]);
		profrot(1, 2);
		return;

	case 37: strcat(salg, " ");
		strcat(salg, alg[3]);
		profrot(1, 3);
		return;

	case 19: strcat(salg, " ");
		strcat(salg, alg[4]);
		profrot(1, 4);
		return;

	case 39: strcat(salg, " ");
		strcat(salg, alg[5]);
		profrot(1, 5);
		return;

	case 28: strcat(salg, " ");
		strcat(salg, alg[6]);
		profrot(1, 6);
		return;

	case 43: strcat(salg, " ");
		strcat(salg, alg[7]);
		profrot(1, 7);
		return;

	case 5:  strcat(salg, " ");
		strcat(salg, alg[8]);
		profrot(1, 8);
		return;

	case 12: strcat(salg, " ");
		strcat(salg, alg[9]);
		profrot(1, 9);
		return;

	case 14: strcat(salg, " ");
		strcat(salg, alg[10]);
		profrot(1, 10);
		return;

	case 21: strcat(salg, " ");
		strcat(salg, alg[11]);
		profrot(1, 11);
		return;

	case 23: strcat(salg, " ");
		strcat(salg, alg[12]);
		profrot(1, 12);
		return;

	case 30: strcat(salg, " ");
		strcat(salg, alg[13]);
		profrot(1, 13);
		return;

	case 32: strcat(salg, " ");
		strcat(salg, alg[14]);
		profrot(1, 14);
		return;

	case 3:  strcat(salg, " ");
		strcat(salg, alg[15]);
		profrot(1, 15);
		return;

	case 7:  strcat(salg, " ");
		strcat(salg, alg[16]);
		profrot(1, 16);
		return;

	case 50: strcat(salg, " ");
		strcat(salg, alg[17]);
		profrot(1, 17);
		return;

	case 16: strcat(salg, " ");
		strcat(salg, alg[18]);
		profrot(1, 18);
		return;

	case 25: strcat(salg, " ");
		strcat(salg, alg[19]);
		profrot(1, 19);
		return;

	case 48: strcat(salg, " ");
		strcat(salg, alg[20]);
		profrot(1, 20);
		return;

	case 34: strcat(salg, " ");
		strcat(salg, alg[21]);
		profrot(1, 21);
		return;

	case 46: strcat(salg, " ");
		strcat(salg, alg[22]);
		profrot(1, 22);
		return;
	}
	case 1:   switch (wl)
	{
	case 1:  strcat(salg, " ");
		strcat(salg, alg[46]);
		profrot(1, 46);
		return;

	case 41: strcat(salg, " ");
		strcat(salg, alg[47]);
		profrot(1, 47);
		return;

	case 10: strcat(salg, " ");
		strcat(salg, alg[48]);
		profrot(1, 48);
		return;

	case 37: strcat(salg, " ");
		strcat(salg, alg[49]);
		profrot(1, 49);
		return;

	case 19: strcat(salg, " ");
		strcat(salg, alg[50]);
		profrot(1, 50);
		return;

	case 39: strcat(salg, " ");
		strcat(salg, alg[51]);
		profrot(1, 51);
		return;

	case 28: strcat(salg, " ");
		strcat(salg, alg[52]);
		profrot(1, 52);
		return;

	case 43: strcat(salg, " ");
		strcat(salg, alg[53]);
		profrot(1, 53);
		return;

	case 5:  strcat(salg, " ");
		strcat(salg, alg[54]);
		profrot(1, 54);
		return;

	case 12: strcat(salg, " ");
		strcat(salg, alg[55]);
		profrot(1, 55);
		return;

	case 14: strcat(salg, " ");
		strcat(salg, alg[56]);
		profrot(1, 56);
		return;

	case 21: strcat(salg, " ");
		strcat(salg, alg[57]);
		profrot(1, 57);
		return;

	case 23: strcat(salg, " ");
		strcat(salg, alg[58]);
		profrot(1, 58);
		return;

	case 30: strcat(salg, " ");
		strcat(salg, alg[59]);
		profrot(1, 59);
		return;

	case 32: strcat(salg, " ");
		strcat(salg, alg[60]);
		profrot(1, 60);
		return;

	case 3:  strcat(salg, " ");
		strcat(salg, alg[61]);
		profrot(1, 61);
		return;

	case 7:  strcat(salg, " ");
		strcat(salg, alg[62]);
		profrot(1, 62);
		return;

	case 50: strcat(salg, " ");
		strcat(salg, alg[63]);
		profrot(1, 63);
		return;

	case 16: strcat(salg, " ");
		strcat(salg, alg[64]);
		profrot(1, 64);
		return;

	case 52: strcat(salg, " ");
		strcat(salg, alg[65]);
		profrot(1, 65);
		return;

	case 25: strcat(salg, " ");
		strcat(salg, alg[66]);
		profrot(1, 66);
		return;

	case 34: strcat(salg, " ");
		strcat(salg, alg[67]);
		profrot(1, 67);
		return;

	case 46: strcat(salg, " ");
		strcat(salg, alg[68]);
		profrot(1, 68);
		return;
	}
	case 4:   switch (wl)
	{
	case 1:  strcat(salg, " ");
		strcat(salg, alg[69]);
		profrot(1, 69);
		return;

	case 41: strcat(salg, " ");
		strcat(salg, alg[70]);
		profrot(1, 70);
		return;

	case 10: strcat(salg, " ");
		strcat(salg, alg[71]);
		profrot(1, 71);
		return;

	case 37: strcat(salg, " ");
		strcat(salg, alg[72]);
		profrot(1, 72);
		return;

	case 19: strcat(salg, " ");
		strcat(salg, alg[73]);
		profrot(1, 73);
		return;

	case 39: strcat(salg, " ");
		strcat(salg, alg[74]);
		profrot(1, 74);
		return;

	case 28: strcat(salg, " ");
		strcat(salg, alg[75]);
		profrot(1, 75);
		return;

	case 43: strcat(salg, " ");
		strcat(salg, alg[76]);
		profrot(1, 76);
		return;

	case 5:  strcat(salg, " ");
		strcat(salg, alg[77]);
		profrot(1, 77);
		return;

	case 12: strcat(salg, " ");
		strcat(salg, alg[78]);
		profrot(1, 78);
		return;

	case 14: strcat(salg, " ");
		strcat(salg, alg[79]);
		profrot(1, 79);
		return;

	case 21: strcat(salg, " ");
		strcat(salg, alg[80]);
		profrot(1, 80);
		return;

	case 23: strcat(salg, " ");
		strcat(salg, alg[81]);
		profrot(1, 81);
		return;

	case 30: strcat(salg, " ");
		strcat(salg, alg[82]);
		profrot(1, 82);
		return;

	case 32: strcat(salg, " ");
		strcat(salg, alg[83]);
		profrot(1, 83);
		return;

	case 3:  strcat(salg, " ");
		strcat(salg, alg[84]);
		profrot(1, 84);
		return;

	case 7:  strcat(salg, " ");
		strcat(salg, alg[85]);
		profrot(1, 85);
		return;

	case 50: strcat(salg, " ");
		strcat(salg, alg[86]);
		profrot(1, 86);
		return;

	case 16: strcat(salg, " ");
		strcat(salg, alg[87]);
		profrot(1, 87);
		return;

	case 52: strcat(salg, " ");
		strcat(salg, alg[88]);
		profrot(1, 88);
		return;

	case 25: strcat(salg, " ");
		strcat(salg, alg[89]);
		profrot(1, 89);
		return;

	case 48: strcat(salg, " ");
		strcat(salg, alg[90]);
		profrot(1, 90);
		return;

	case 34: strcat(salg, " ");
		strcat(salg, alg[91]);
		profrot(1, 91);
		return;
	}


	}
}

void profrot(int st, int cn)
{
	int i, j, k, fa, dir, tim, a, b, c;
	char talg[100];
	switch (st)
	{
	case 1: strcpy(talg, alg[cn]); break;
	case 2: strcpy(talg, y(alg_ftl[cn])); break;
	case 3: strcpy(talg, y2(alg_ftl[cn])); break;
	case 4: strcpy(talg, yd(alg_ftl[cn])); break;
	case 5: strcpy(talg, alg_ftl[cn]); break;

	case 0: switch (cn)
	{
	case 0: strcpy(talg, " U");    break;
	case 1: strcpy(talg, " U'");   break;
	case 2: strcpy(talg, " U2");   break;
	}break;

	case 6: strcpy(talg, yd(alg_oll[cn]));   break;
	case 7: strcpy(talg, alg_oll[cn]);       break;
	case 8: strcpy(talg, y(alg_oll[cn]));    break;
	case 9: strcpy(talg, y2(alg_oll[cn]));   break;

	case 10: strcpy(talg, " U'");
		strcat(talg, alg_pll[cn]);
		break;
	case 11: strcpy(talg, alg_pll[cn]);
		break;
	case 12: strcpy(talg, " U");
		strcat(talg, alg_pll[cn]);
		break;
	case 13: strcpy(talg, " U2");
		strcat(talg, alg_pll[cn]);
		break;

	case 14: switch (cn)
			 {
			  case 1: strcpy(talg, "R"); break;
			  case 2: strcpy(talg, "R'"); break;
			  case 3: strcpy(talg, "R2"); break;
			 }break;
	case 15: switch (cn)
			 {
			  case 1: strcpy(talg, "U"); break;
			  case 2: strcpy(talg, "U'"); break;
			  case 3: strcpy(talg, "U2"); break;
			 }break;
	case 16: switch (cn)
			 {
			  case 1: strcpy(talg, "F"); break;
			  case 2: strcpy(talg, "F'"); break;
			  case 3: strcpy(talg, "F2"); break;
			 }break;
	case 17: switch (cn)
			 {
			  case 1: strcpy(talg, "B"); break;
			  case 2: strcpy(talg, "B'"); break;
			  case 3: strcpy(talg, "B2"); break;
			 }break;
	case 18: switch (cn)
			 {
			  case 1: strcpy(talg, "L"); break;
			  case 2: strcpy(talg, "L'"); break;
			  case 3: strcpy(talg, "L2"); break;
			 }break;
	case 19: switch (cn)
			 {
			  case 1: strcpy(talg, "D"); break;
			  case 2: strcpy(talg, "D'"); break;
			  case 3: strcpy(talg, "D2"); break;
			 }break;
	}
	/*
	switch(s)
	{
	case 0:switch(cn)
	{
	case 0: strcpy(talg," U");    break;
	case 1: strcpy(talg," U'");   break;
	case 2: strcpy(talg," U2");   break;
	}
	break;
	case 1:switch(n)
	{
	case 1: strcpy(talg,alg_oll[cn]);       break;
	case 2: strcpy(talg,y(alg_oll[cn]));    break;
	case 3: strcpy(talg,y2(alg_oll[cn]));   break;
	case 0: strcpy(talg,yd(alg_oll[cn]));   break;
	}
	break;
	case 2:switch(n)
	{
	case 1: strcpy(talg,alg_pll[cn]);
	break;
	case 2: strcpy(talg,"U ");
	strcat(talg,alg_pll[cn]);
	break;
	case 3: strcpy(talg,"U2 ");
	strcat(talg,alg_pll[cn]);
	break;
	case 0: strcpy(talg,"U' ");
	strcat(talg,alg_pll[cn]);
	break;
	}
	break;
	}
	/*/

	i = 0;
ts:

	if (talg[i] == '\0')
		return;

	if (talg[i] == ' ')
	{
		i++;
		goto ts;
	}
	else
		if (talg[i] == 'R' || talg[i] == 'U' || talg[i] == 'F' || talg[i] == 'D' || talg[i] == 'B' || talg[i] == 'L')
		{
			switch (tolower(talg[i]))
			{
			case 'r': fa = 1; break;
			case 'u': fa = 2; break;
			case 'f': fa = 3; break;
			case 'l': fa = 4; break;
			case 'b': fa = 5; break;
			case 'd': fa = 6; break;
			}
		}
	if (talg[i + 1] == 39)
	{
		dir = -1;
		tim = 1;
		i++;
	}
	else if (talg[i + 1] == '2')
	{
		dir = 1;
		tim = 2;
		i++;
	}
	else if (talg[i] != 'R'&&talg[i] != 'U'&&talg[i] != 'F'&&talg[i] != 'D'&&talg[i] != 'B'&&talg[i] != 'L')
	{
		i++;
		goto ts;
	}
	else
	{
		dir = 1;
		tim = 1;
	}

//////////////////////////////////////

	if (sp_flag == true)
	{
		sp_flag = false;
		goto sp_b_show;
	}

//////////////////////////////////////


	//loaded fa,tim and dir;

	switch (fa)
	{
	case 1: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp[8]; b = sp[5]; c = sp[2];
		sp[8] = sp[51]; sp[5] = sp[52]; sp[2] = sp[53];
		sp[51] = sp[18]; sp[52] = sp[21]; sp[53] = sp[24];
		sp[18] = sp[38]; sp[21] = sp[37]; sp[24] = sp[36];
		sp[38] = a; sp[37] = b; sp[36] = c;

		a = sp[9];            b = sp[10];
		sp[9] = sp[15];  sp[10] = sp[12];
		sp[15] = sp[17]; sp[12] = sp[16];
		sp[17] = sp[11]; sp[16] = sp[14];
		sp[11] = a;      sp[14] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp[2]; b = sp[5]; c = sp[8];
				sp[2] = sp[36]; sp[5] = sp[37]; sp[8] = sp[38];
				sp[36] = sp[24]; sp[37] = sp[21]; sp[38] = sp[18];
				sp[24] = sp[53]; sp[21] = sp[52]; sp[18] = sp[51];
				sp[53] = a; sp[52] = b; sp[51] = c;

				b = sp[10];          a = sp[9];
				sp[10] = sp[14]; sp[9] = sp[11];
				sp[14] = sp[16]; sp[11] = sp[17];
				sp[16] = sp[12]; sp[17] = sp[15];
				sp[12] = b;     sp[15] = a;

				i++; goto ts;
			}

	case 2:  a = sp[8]; b = sp[5]; c = sp[2];
		sp[8] = sp[51]; sp[5] = sp[52]; sp[2] = sp[53];
		sp[51] = sp[18]; sp[52] = sp[21]; sp[53] = sp[24];
		sp[18] = sp[38]; sp[21] = sp[37]; sp[24] = sp[36];
		sp[38] = a; sp[37] = b; sp[36] = c;

		a = sp[9];            b = sp[10];
		sp[9] = sp[15];  sp[10] = sp[12];
		sp[15] = sp[17]; sp[12] = sp[16];
		sp[17] = sp[11]; sp[16] = sp[14];
		sp[11] = a;      sp[14] = b;

		a = sp[8]; b = sp[5]; c = sp[2];
		sp[8] = sp[51]; sp[5] = sp[52]; sp[2] = sp[53];
		sp[51] = sp[18]; sp[52] = sp[21]; sp[53] = sp[24];
		sp[18] = sp[38]; sp[21] = sp[37]; sp[24] = sp[36];
		sp[38] = a; sp[37] = b; sp[36] = c;

		a = sp[9];            b = sp[10];
		sp[9] = sp[15];  sp[10] = sp[12];
		sp[15] = sp[17]; sp[12] = sp[16];
		sp[17] = sp[11]; sp[16] = sp[14];
		sp[11] = a;      sp[14] = b;

		i++; goto ts;
	}

	case 2: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp[2]; b = sp[1]; c = sp[0];
		sp[2] = sp[11]; sp[1] = sp[10]; sp[0] = sp[9];
		sp[11] = sp[20]; sp[10] = sp[19]; sp[9] = sp[18];
		sp[20] = sp[29]; sp[19] = sp[28]; sp[18] = sp[27];
		sp[29] = a; sp[28] = b; sp[27] = c;

		a = sp[42];           b = sp[39];
		sp[42] = sp[44]; sp[39] = sp[43];
		sp[44] = sp[38]; sp[43] = sp[41];
		sp[38] = sp[36]; sp[41] = sp[37];
		sp[36] = a;       sp[37] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp[0]; b = sp[1]; c = sp[2];
				sp[0] = sp[27]; sp[1] = sp[28]; sp[2] = sp[29];
				sp[27] = sp[18]; sp[28] = sp[19]; sp[29] = sp[20];
				sp[18] = sp[9]; sp[19] = sp[10]; sp[20] = sp[11];
				sp[9] = a; sp[10] = b; sp[11] = c;

				a = sp[42];			  b = sp[39];
				sp[42] = sp[36]; sp[39] = sp[37];
				sp[36] = sp[38]; sp[37] = sp[41];
				sp[38] = sp[44]; sp[41] = sp[43];
				sp[44] = a;      sp[43] = b;

				i++; goto ts;
			}

	case 2: a = sp[2]; b = sp[1]; c = sp[0];
		sp[2] = sp[11]; sp[1] = sp[10]; sp[0] = sp[9];
		sp[11] = sp[20]; sp[10] = sp[19]; sp[9] = sp[18];
		sp[20] = sp[29]; sp[19] = sp[28]; sp[18] = sp[27];
		sp[29] = a; sp[28] = b; sp[27] = c;

		a = sp[42];           b = sp[39];
		sp[42] = sp[44]; sp[39] = sp[43];
		sp[44] = sp[38]; sp[43] = sp[41];
		sp[38] = sp[36]; sp[41] = sp[37];
		sp[36] = a;       sp[37] = b;

		a = sp[2]; b = sp[1]; c = sp[0];
		sp[2] = sp[11]; sp[1] = sp[10]; sp[0] = sp[9];
		sp[11] = sp[20]; sp[10] = sp[19]; sp[9] = sp[18];
		sp[20] = sp[29]; sp[19] = sp[28]; sp[18] = sp[27];
		sp[29] = a; sp[28] = b; sp[27] = c;

		a = sp[42];           b = sp[39];
		sp[42] = sp[44]; sp[39] = sp[43];
		sp[44] = sp[38]; sp[43] = sp[41];
		sp[38] = sp[36]; sp[41] = sp[37];
		sp[36] = a;       sp[37] = b;

		i++; goto ts;
	}

	case 3: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp[38]; b = sp[41]; c = sp[44];
		sp[38] = sp[29]; sp[41] = sp[32]; sp[44] = sp[35];
		sp[29] = sp[47]; sp[32] = sp[50]; sp[35] = sp[53];
		sp[47] = sp[15]; sp[50] = sp[12]; sp[53] = sp[9];
		sp[15] = a; sp[12] = b; sp[9] = c;

		a = sp[0];		   b = sp[1];
		sp[0] = sp[6]; sp[1] = sp[3];
		sp[6] = sp[8]; sp[3] = sp[7];
		sp[8] = sp[2]; sp[7] = sp[5];
		sp[2] = a;     sp[5] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp[38]; b = sp[41]; c = sp[44];
				sp[38] = sp[15]; sp[41] = sp[12]; sp[44] = sp[9];
				sp[15] = sp[47]; sp[12] = sp[50]; sp[9] = sp[53];
				sp[47] = sp[29]; sp[50] = sp[32]; sp[53] = sp[35];
				sp[29] = a; sp[32] = b; sp[35] = c;

				a = sp[0];         b = sp[1];
				sp[0] = sp[2]; sp[1] = sp[5];
				sp[2] = sp[8]; sp[5] = sp[7];
				sp[8] = sp[6]; sp[7] = sp[3];
				sp[6] = a;     sp[3] = b;

				i++; goto ts;
			}

	case 2: a = sp[38]; b = sp[41]; c = sp[44];
		sp[38] = sp[29]; sp[41] = sp[32]; sp[44] = sp[35];
		sp[29] = sp[47]; sp[32] = sp[50]; sp[35] = sp[53];
		sp[47] = sp[15]; sp[50] = sp[12]; sp[53] = sp[9];
		sp[15] = a; sp[12] = b; sp[9] = c;

		a = sp[0];		   b = sp[1];
		sp[0] = sp[6]; sp[1] = sp[3];
		sp[6] = sp[8]; sp[3] = sp[7];
		sp[8] = sp[2]; sp[7] = sp[5];
		sp[2] = a;     sp[5] = b;

		a = sp[38]; b = sp[41]; c = sp[44];
		sp[38] = sp[29]; sp[41] = sp[32]; sp[44] = sp[35];
		sp[29] = sp[47]; sp[32] = sp[50]; sp[35] = sp[53];
		sp[47] = sp[15]; sp[50] = sp[12]; sp[53] = sp[9];
		sp[15] = a; sp[12] = b; sp[9] = c;

		a = sp[0];		   b = sp[1];
		sp[0] = sp[6]; sp[1] = sp[3];
		sp[6] = sp[8]; sp[3] = sp[7];
		sp[8] = sp[2]; sp[7] = sp[5];
		sp[2] = a;     sp[5] = b;

		i++; goto ts;
	}

	case 4: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp[0]; b = sp[3]; c = sp[6];
		sp[0] = sp[42];   sp[3] = sp[43]; sp[6] = sp[44];
		sp[42] = sp[26]; sp[43] = sp[23]; sp[44] = sp[20];
		sp[26] = sp[47]; sp[23] = sp[46]; sp[20] = sp[45];
		sp[47] = a; sp[46] = b; sp[45] = c;

		a = sp[27];           b = sp[28];
		sp[27] = sp[33]; sp[28] = sp[30];
		sp[33] = sp[35]; sp[30] = sp[34];
		sp[35] = sp[29]; sp[34] = sp[32];
		sp[29] = a;      sp[32] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp[6]; b = sp[3]; c = sp[0];
				sp[6] = sp[45]; sp[3] = sp[46]; sp[0] = sp[47];
				sp[45] = sp[20]; sp[46] = sp[23]; sp[47] = sp[26];
				sp[20] = sp[44]; sp[23] = sp[43]; sp[26] = sp[42];
				sp[44] = a; sp[43] = b; sp[42] = c;

				a = sp[27];           b = sp[28];
				sp[27] = sp[29]; sp[28] = sp[32];
				sp[29] = sp[35]; sp[32] = sp[34];
				sp[35] = sp[33]; sp[34] = sp[30];
				sp[33] = a;      sp[30] = b;

				i++; goto ts;
			}

	case 2: a = sp[0]; b = sp[3]; c = sp[6];
		sp[0] = sp[42];   sp[3] = sp[43]; sp[6] = sp[44];
		sp[42] = sp[26]; sp[43] = sp[23]; sp[44] = sp[20];
		sp[26] = sp[47]; sp[23] = sp[46]; sp[20] = sp[45];
		sp[47] = a; sp[46] = b; sp[45] = c;

		a = sp[27];           b = sp[28];
		sp[27] = sp[33]; sp[28] = sp[30];
		sp[33] = sp[35]; sp[30] = sp[34];
		sp[35] = sp[29]; sp[34] = sp[32];
		sp[29] = a;      sp[32] = b;

		a = sp[0]; b = sp[3]; c = sp[6];
		sp[0] = sp[42];   sp[3] = sp[43]; sp[6] = sp[44];
		sp[42] = sp[26]; sp[43] = sp[23]; sp[44] = sp[20];
		sp[26] = sp[47]; sp[23] = sp[46]; sp[20] = sp[45];
		sp[47] = a; sp[46] = b; sp[45] = c;

		a = sp[27];           b = sp[28];
		sp[27] = sp[33]; sp[28] = sp[30];
		sp[33] = sp[35]; sp[30] = sp[34];
		sp[35] = sp[29]; sp[34] = sp[32];
		sp[29] = a;      sp[32] = b;

		i++; goto ts;
	}

	case 5: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp[36]; b = sp[39]; c = sp[42];
		sp[36] = sp[17]; sp[39] = sp[14]; sp[42] = sp[11];
		sp[17] = sp[45]; sp[14] = sp[48]; sp[11] = sp[51];
		sp[45] = sp[27]; sp[48] = sp[30]; sp[51] = sp[33];
		sp[27] = a; sp[30] = b; sp[33] = c;

		a = sp[18];           b = sp[19];
		sp[18] = sp[24]; sp[19] = sp[21];
		sp[24] = sp[26]; sp[21] = sp[25];
		sp[26] = sp[20]; sp[25] = sp[23];
		sp[20] = a;      sp[23] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp[42]; b = sp[39]; c = sp[36];
				sp[42] = sp[33]; sp[39] = sp[30]; sp[36] = sp[27];
				sp[33] = sp[51]; sp[30] = sp[48]; sp[27] = sp[45];
				sp[51] = sp[11]; sp[48] = sp[14]; sp[45] = sp[17];
				sp[11] = a; sp[14] = b; sp[17] = c;

				b = sp[19];      a = sp[18];
				sp[19] = sp[23]; sp[18] = sp[20];
				sp[23] = sp[25]; sp[20] = sp[26];
				sp[25] = sp[21]; sp[26] = sp[24];
				sp[21] = b;      sp[24] = a;

				i++; goto ts;
			}

	case 2: a = sp[36]; b = sp[39]; c = sp[42];
		sp[36] = sp[17]; sp[39] = sp[14]; sp[42] = sp[11];
		sp[17] = sp[45]; sp[14] = sp[48]; sp[11] = sp[51];
		sp[45] = sp[27]; sp[48] = sp[30]; sp[51] = sp[33];
		sp[27] = a; sp[30] = b; sp[33] = c;

		a = sp[18];           b = sp[19];
		sp[18] = sp[24]; sp[19] = sp[21];
		sp[24] = sp[26]; sp[21] = sp[25];
		sp[26] = sp[20]; sp[25] = sp[23];
		sp[20] = a;      sp[23] = b;

		a = sp[36]; b = sp[39]; c = sp[42];
		sp[36] = sp[17]; sp[39] = sp[14]; sp[42] = sp[11];
		sp[17] = sp[45]; sp[14] = sp[48]; sp[11] = sp[51];
		sp[45] = sp[27]; sp[48] = sp[30]; sp[51] = sp[33];
		sp[27] = a; sp[30] = b; sp[33] = c;

		a = sp[18];           b = sp[19];
		sp[18] = sp[24]; sp[19] = sp[21];
		sp[24] = sp[26]; sp[21] = sp[25];
		sp[26] = sp[20]; sp[25] = sp[23];
		sp[20] = a;      sp[23] = b;

		i++; goto ts;
	}

	case 6: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp[6]; b = sp[7]; c = sp[8];
		sp[6] = sp[33]; sp[7] = sp[34]; sp[8] = sp[35];
		sp[33] = sp[24]; sp[34] = sp[25]; sp[35] = sp[26];
		sp[24] = sp[15]; sp[25] = sp[16]; sp[26] = sp[17];
		sp[15] = a; sp[16] = b; sp[17] = c;

		a = sp[47];           b = sp[50];
		sp[47] = sp[45]; sp[50] = sp[46];
		sp[45] = sp[51]; sp[46] = sp[48];
		sp[51] = sp[53]; sp[48] = sp[52];
		sp[53] = a;      sp[52] = b;

		i++; goto ts;

	}
			else if (dir == -1)
			{
				a = sp[8]; b = sp[7]; c = sp[6];
				sp[8] = sp[17]; sp[7] = sp[16]; sp[6] = sp[15];
				sp[17] = sp[26]; sp[16] = sp[25]; sp[15] = sp[24];
				sp[26] = sp[35]; sp[25] = sp[34]; sp[24] = sp[33];
				sp[35] = a; sp[34] = b; sp[33] = c;

				b = sp[50];           a = sp[47];
				sp[50] = sp[52]; sp[47] = sp[53];
				sp[52] = sp[48]; sp[53] = sp[51];
				sp[48] = sp[46];  sp[51] = sp[45];
				sp[46] = b;      sp[45] = a;

				i++; goto ts;
			}

	case 2: a = sp[6]; b = sp[7]; c = sp[8];
		sp[6] = sp[33]; sp[7] = sp[34]; sp[8] = sp[35];
		sp[33] = sp[24]; sp[34] = sp[25]; sp[35] = sp[26];
		sp[24] = sp[15]; sp[25] = sp[16]; sp[26] = sp[17];
		sp[15] = a; sp[16] = b; sp[17] = c;

		a = sp[47];           b = sp[50];
		sp[47] = sp[45]; sp[50] = sp[46];
		sp[45] = sp[51]; sp[46] = sp[48];
		sp[51] = sp[53]; sp[48] = sp[52];
		sp[53] = a;      sp[52] = b;

		a = sp[6]; b = sp[7]; c = sp[8];
		sp[6] = sp[33]; sp[7] = sp[34]; sp[8] = sp[35];
		sp[33] = sp[24]; sp[34] = sp[25]; sp[35] = sp[26];
		sp[24] = sp[15]; sp[25] = sp[16]; sp[26] = sp[17];
		sp[15] = a; sp[16] = b; sp[17] = c;

		a = sp[47];           b = sp[50];
		sp[47] = sp[45]; sp[50] = sp[46];
		sp[45] = sp[51]; sp[46] = sp[48];
		sp[51] = sp[53]; sp[48] = sp[52];
		sp[53] = a;      sp[52] = b;

		i++; goto ts;
	}
	}

sp_b_show:


	//loaded fa,tim and dir;

	switch (fa)
	{
	case 1: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp_b[8]; b = sp_b[5]; c = sp_b[2];
		sp_b[8] = sp_b[51]; sp_b[5] = sp_b[52]; sp_b[2] = sp_b[53];
		sp_b[51] = sp_b[18]; sp_b[52] = sp_b[21]; sp_b[53] = sp_b[24];
		sp_b[18] = sp_b[38]; sp_b[21] = sp_b[37]; sp_b[24] = sp_b[36];
		sp_b[38] = a; sp_b[37] = b; sp_b[36] = c;

		a = sp_b[9];            b = sp_b[10];
		sp_b[9] = sp_b[15];  sp_b[10] = sp_b[12];
		sp_b[15] = sp_b[17]; sp_b[12] = sp_b[16];
		sp_b[17] = sp_b[11]; sp_b[16] = sp_b[14];
		sp_b[11] = a;      sp_b[14] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp_b[2]; b = sp_b[5]; c = sp_b[8];
				sp_b[2] = sp_b[36]; sp_b[5] = sp_b[37]; sp_b[8] = sp_b[38];
				sp_b[36] = sp_b[24]; sp_b[37] = sp_b[21]; sp_b[38] = sp_b[18];
				sp_b[24] = sp_b[53]; sp_b[21] = sp_b[52]; sp_b[18] = sp_b[51];
				sp_b[53] = a; sp_b[52] = b; sp_b[51] = c;

				b = sp_b[10];          a = sp_b[9];
				sp_b[10] = sp_b[14]; sp_b[9] = sp_b[11];
				sp_b[14] = sp_b[16]; sp_b[11] = sp_b[17];
				sp_b[16] = sp_b[12]; sp_b[17] = sp_b[15];
				sp_b[12] = b;     sp_b[15] = a;

				i++; goto ts;
			}

	case 2:  a = sp_b[8]; b = sp_b[5]; c = sp_b[2];
		sp_b[8] = sp_b[51]; sp_b[5] = sp_b[52]; sp_b[2] = sp_b[53];
		sp_b[51] = sp_b[18]; sp_b[52] = sp_b[21]; sp_b[53] = sp_b[24];
		sp_b[18] = sp_b[38]; sp_b[21] = sp_b[37]; sp_b[24] = sp_b[36];
		sp_b[38] = a; sp_b[37] = b; sp_b[36] = c;

		a = sp_b[9];            b = sp_b[10];
		sp_b[9] = sp_b[15];  sp_b[10] = sp_b[12];
		sp_b[15] = sp_b[17]; sp_b[12] = sp_b[16];
		sp_b[17] = sp_b[11]; sp_b[16] = sp_b[14];
		sp_b[11] = a;      sp_b[14] = b;

		a = sp_b[8]; b = sp_b[5]; c = sp_b[2];
		sp_b[8] = sp_b[51]; sp_b[5] = sp_b[52]; sp_b[2] = sp_b[53];
		sp_b[51] = sp_b[18]; sp_b[52] = sp_b[21]; sp_b[53] = sp_b[24];
		sp_b[18] = sp_b[38]; sp_b[21] = sp_b[37]; sp_b[24] = sp_b[36];
		sp_b[38] = a; sp_b[37] = b; sp_b[36] = c;

		a = sp_b[9];            b = sp_b[10];
		sp_b[9] = sp_b[15];  sp_b[10] = sp_b[12];
		sp_b[15] = sp_b[17]; sp_b[12] = sp_b[16];
		sp_b[17] = sp_b[11]; sp_b[16] = sp_b[14];
		sp_b[11] = a;      sp_b[14] = b;

		i++; goto ts;
	}

	case 2: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp_b[2]; b = sp_b[1]; c = sp_b[0];
		sp_b[2] = sp_b[11]; sp_b[1] = sp_b[10]; sp_b[0] = sp_b[9];
		sp_b[11] = sp_b[20]; sp_b[10] = sp_b[19]; sp_b[9] = sp_b[18];
		sp_b[20] = sp_b[29]; sp_b[19] = sp_b[28]; sp_b[18] = sp_b[27];
		sp_b[29] = a; sp_b[28] = b; sp_b[27] = c;

		a = sp_b[42];           b = sp_b[39];
		sp_b[42] = sp_b[44]; sp_b[39] = sp_b[43];
		sp_b[44] = sp_b[38]; sp_b[43] = sp_b[41];
		sp_b[38] = sp_b[36]; sp_b[41] = sp_b[37];
		sp_b[36] = a;       sp_b[37] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp_b[0]; b = sp_b[1]; c = sp_b[2];
				sp_b[0] = sp_b[27]; sp_b[1] = sp_b[28]; sp_b[2] = sp_b[29];
				sp_b[27] = sp_b[18]; sp_b[28] = sp_b[19]; sp_b[29] = sp_b[20];
				sp_b[18] = sp_b[9]; sp_b[19] = sp_b[10]; sp_b[20] = sp_b[11];
				sp_b[9] = a; sp_b[10] = b; sp_b[11] = c;

				a = sp_b[42];			  b = sp_b[39];
				sp_b[42] = sp_b[36]; sp_b[39] = sp_b[37];
				sp_b[36] = sp_b[38]; sp_b[37] = sp_b[41];
				sp_b[38] = sp_b[44]; sp_b[41] = sp_b[43];
				sp_b[44] = a;      sp_b[43] = b;

				i++; goto ts;
			}

	case 2: a = sp_b[2]; b = sp_b[1]; c = sp_b[0];
		sp_b[2] = sp_b[11]; sp_b[1] = sp_b[10]; sp_b[0] = sp_b[9];
		sp_b[11] = sp_b[20]; sp_b[10] = sp_b[19]; sp_b[9] = sp_b[18];
		sp_b[20] = sp_b[29]; sp_b[19] = sp_b[28]; sp_b[18] = sp_b[27];
		sp_b[29] = a; sp_b[28] = b; sp_b[27] = c;

		a = sp_b[42];           b = sp_b[39];
		sp_b[42] = sp_b[44]; sp_b[39] = sp_b[43];
		sp_b[44] = sp_b[38]; sp_b[43] = sp_b[41];
		sp_b[38] = sp_b[36]; sp_b[41] = sp_b[37];
		sp_b[36] = a;       sp_b[37] = b;

		a = sp_b[2]; b = sp_b[1]; c = sp_b[0];
		sp_b[2] = sp_b[11]; sp_b[1] = sp_b[10]; sp_b[0] = sp_b[9];
		sp_b[11] = sp_b[20]; sp_b[10] = sp_b[19]; sp_b[9] = sp_b[18];
		sp_b[20] = sp_b[29]; sp_b[19] = sp_b[28]; sp_b[18] = sp_b[27];
		sp_b[29] = a; sp_b[28] = b; sp_b[27] = c;

		a = sp_b[42];           b = sp_b[39];
		sp_b[42] = sp_b[44]; sp_b[39] = sp_b[43];
		sp_b[44] = sp_b[38]; sp_b[43] = sp_b[41];
		sp_b[38] = sp_b[36]; sp_b[41] = sp_b[37];
		sp_b[36] = a;       sp_b[37] = b;

		i++; goto ts;
	}

	case 3: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp_b[38]; b = sp_b[41]; c = sp_b[44];
		sp_b[38] = sp_b[29]; sp_b[41] = sp_b[32]; sp_b[44] = sp_b[35];
		sp_b[29] = sp_b[47]; sp_b[32] = sp_b[50]; sp_b[35] = sp_b[53];
		sp_b[47] = sp_b[15]; sp_b[50] = sp_b[12]; sp_b[53] = sp_b[9];
		sp_b[15] = a; sp_b[12] = b; sp_b[9] = c;

		a = sp_b[0];		   b = sp_b[1];
		sp_b[0] = sp_b[6]; sp_b[1] = sp_b[3];
		sp_b[6] = sp_b[8]; sp_b[3] = sp_b[7];
		sp_b[8] = sp_b[2]; sp_b[7] = sp_b[5];
		sp_b[2] = a;     sp_b[5] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp_b[38]; b = sp_b[41]; c = sp_b[44];
				sp_b[38] = sp_b[15]; sp_b[41] = sp_b[12]; sp_b[44] = sp_b[9];
				sp_b[15] = sp_b[47]; sp_b[12] = sp_b[50]; sp_b[9] = sp_b[53];
				sp_b[47] = sp_b[29]; sp_b[50] = sp_b[32]; sp_b[53] = sp_b[35];
				sp_b[29] = a; sp_b[32] = b; sp_b[35] = c;

				a = sp_b[0];         b = sp_b[1];
				sp_b[0] = sp_b[2]; sp_b[1] = sp_b[5];
				sp_b[2] = sp_b[8]; sp_b[5] = sp_b[7];
				sp_b[8] = sp_b[6]; sp_b[7] = sp_b[3];
				sp_b[6] = a;     sp_b[3] = b;

				i++; goto ts;
			}

	case 2: a = sp_b[38]; b = sp_b[41]; c = sp_b[44];
		sp_b[38] = sp_b[29]; sp_b[41] = sp_b[32]; sp_b[44] = sp_b[35];
		sp_b[29] = sp_b[47]; sp_b[32] = sp_b[50]; sp_b[35] = sp_b[53];
		sp_b[47] = sp_b[15]; sp_b[50] = sp_b[12]; sp_b[53] = sp_b[9];
		sp_b[15] = a; sp_b[12] = b; sp_b[9] = c;

		a = sp_b[0];		   b = sp_b[1];
		sp_b[0] = sp_b[6]; sp_b[1] = sp_b[3];
		sp_b[6] = sp_b[8]; sp_b[3] = sp_b[7];
		sp_b[8] = sp_b[2]; sp_b[7] = sp_b[5];
		sp_b[2] = a;     sp_b[5] = b;

		a = sp_b[38]; b = sp_b[41]; c = sp_b[44];
		sp_b[38] = sp_b[29]; sp_b[41] = sp_b[32]; sp_b[44] = sp_b[35];
		sp_b[29] = sp_b[47]; sp_b[32] = sp_b[50]; sp_b[35] = sp_b[53];
		sp_b[47] = sp_b[15]; sp_b[50] = sp_b[12]; sp_b[53] = sp_b[9];
		sp_b[15] = a; sp_b[12] = b; sp_b[9] = c;

		a = sp_b[0];		   b = sp_b[1];
		sp_b[0] = sp_b[6]; sp_b[1] = sp_b[3];
		sp_b[6] = sp_b[8]; sp_b[3] = sp_b[7];
		sp_b[8] = sp_b[2]; sp_b[7] = sp_b[5];
		sp_b[2] = a;     sp_b[5] = b;

		i++; goto ts;
	}

	case 4: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp_b[0]; b = sp_b[3]; c = sp_b[6];
		sp_b[0] = sp_b[42];   sp_b[3] = sp_b[43]; sp_b[6] = sp_b[44];
		sp_b[42] = sp_b[26]; sp_b[43] = sp_b[23]; sp_b[44] = sp_b[20];
		sp_b[26] = sp_b[47]; sp_b[23] = sp_b[46]; sp_b[20] = sp_b[45];
		sp_b[47] = a; sp_b[46] = b; sp_b[45] = c;

		a = sp_b[27];           b = sp_b[28];
		sp_b[27] = sp_b[33]; sp_b[28] = sp_b[30];
		sp_b[33] = sp_b[35]; sp_b[30] = sp_b[34];
		sp_b[35] = sp_b[29]; sp_b[34] = sp_b[32];
		sp_b[29] = a;      sp_b[32] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp_b[6]; b = sp_b[3]; c = sp_b[0];
				sp_b[6] = sp_b[45]; sp_b[3] = sp_b[46]; sp_b[0] = sp_b[47];
				sp_b[45] = sp_b[20]; sp_b[46] = sp_b[23]; sp_b[47] = sp_b[26];
				sp_b[20] = sp_b[44]; sp_b[23] = sp_b[43]; sp_b[26] = sp_b[42];
				sp_b[44] = a; sp_b[43] = b; sp_b[42] = c;

				a = sp_b[27];           b = sp_b[28];
				sp_b[27] = sp_b[29]; sp_b[28] = sp_b[32];
				sp_b[29] = sp_b[35]; sp_b[32] = sp_b[34];
				sp_b[35] = sp_b[33]; sp_b[34] = sp_b[30];
				sp_b[33] = a;      sp_b[30] = b;

				i++; goto ts;
			}

	case 2: a = sp_b[0]; b = sp_b[3]; c = sp_b[6];
		sp_b[0] = sp_b[42];   sp_b[3] = sp_b[43]; sp_b[6] = sp_b[44];
		sp_b[42] = sp_b[26]; sp_b[43] = sp_b[23]; sp_b[44] = sp_b[20];
		sp_b[26] = sp_b[47]; sp_b[23] = sp_b[46]; sp_b[20] = sp_b[45];
		sp_b[47] = a; sp_b[46] = b; sp_b[45] = c;

		a = sp_b[27];           b = sp_b[28];
		sp_b[27] = sp_b[33]; sp_b[28] = sp_b[30];
		sp_b[33] = sp_b[35]; sp_b[30] = sp_b[34];
		sp_b[35] = sp_b[29]; sp_b[34] = sp_b[32];
		sp_b[29] = a;      sp_b[32] = b;

		a = sp_b[0]; b = sp_b[3]; c = sp_b[6];
		sp_b[0] = sp_b[42];   sp_b[3] = sp_b[43]; sp_b[6] = sp_b[44];
		sp_b[42] = sp_b[26]; sp_b[43] = sp_b[23]; sp_b[44] = sp_b[20];
		sp_b[26] = sp_b[47]; sp_b[23] = sp_b[46]; sp_b[20] = sp_b[45];
		sp_b[47] = a; sp_b[46] = b; sp_b[45] = c;

		a = sp_b[27];           b = sp_b[28];
		sp_b[27] = sp_b[33]; sp_b[28] = sp_b[30];
		sp_b[33] = sp_b[35]; sp_b[30] = sp_b[34];
		sp_b[35] = sp_b[29]; sp_b[34] = sp_b[32];
		sp_b[29] = a;      sp_b[32] = b;

		i++; goto ts;
	}

	case 5: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp_b[36]; b = sp_b[39]; c = sp_b[42];
		sp_b[36] = sp_b[17]; sp_b[39] = sp_b[14]; sp_b[42] = sp_b[11];
		sp_b[17] = sp_b[45]; sp_b[14] = sp_b[48]; sp_b[11] = sp_b[51];
		sp_b[45] = sp_b[27]; sp_b[48] = sp_b[30]; sp_b[51] = sp_b[33];
		sp_b[27] = a; sp_b[30] = b; sp_b[33] = c;

		a = sp_b[18];           b = sp_b[19];
		sp_b[18] = sp_b[24]; sp_b[19] = sp_b[21];
		sp_b[24] = sp_b[26]; sp_b[21] = sp_b[25];
		sp_b[26] = sp_b[20]; sp_b[25] = sp_b[23];
		sp_b[20] = a;      sp_b[23] = b;

		i++; goto ts;
	}
			else if (dir == -1)
			{
				a = sp_b[42]; b = sp_b[39]; c = sp_b[36];
				sp_b[42] = sp_b[33]; sp_b[39] = sp_b[30]; sp_b[36] = sp_b[27];
				sp_b[33] = sp_b[51]; sp_b[30] = sp_b[48]; sp_b[27] = sp_b[45];
				sp_b[51] = sp_b[11]; sp_b[48] = sp_b[14]; sp_b[45] = sp_b[17];
				sp_b[11] = a; sp_b[14] = b; sp_b[17] = c;

				b = sp_b[19];      a = sp_b[18];
				sp_b[19] = sp_b[23]; sp_b[18] = sp_b[20];
				sp_b[23] = sp_b[25]; sp_b[20] = sp_b[26];
				sp_b[25] = sp_b[21]; sp_b[26] = sp_b[24];
				sp_b[21] = b;      sp_b[24] = a;

				i++; goto ts;
			}

	case 2: a = sp_b[36]; b = sp_b[39]; c = sp_b[42];
		sp_b[36] = sp_b[17]; sp_b[39] = sp_b[14]; sp_b[42] = sp_b[11];
		sp_b[17] = sp_b[45]; sp_b[14] = sp_b[48]; sp_b[11] = sp_b[51];
		sp_b[45] = sp_b[27]; sp_b[48] = sp_b[30]; sp_b[51] = sp_b[33];
		sp_b[27] = a; sp_b[30] = b; sp_b[33] = c;

		a = sp_b[18];           b = sp_b[19];
		sp_b[18] = sp_b[24]; sp_b[19] = sp_b[21];
		sp_b[24] = sp_b[26]; sp_b[21] = sp_b[25];
		sp_b[26] = sp_b[20]; sp_b[25] = sp_b[23];
		sp_b[20] = a;      sp_b[23] = b;

		a = sp_b[36]; b = sp_b[39]; c = sp_b[42];
		sp_b[36] = sp_b[17]; sp_b[39] = sp_b[14]; sp_b[42] = sp_b[11];
		sp_b[17] = sp_b[45]; sp_b[14] = sp_b[48]; sp_b[11] = sp_b[51];
		sp_b[45] = sp_b[27]; sp_b[48] = sp_b[30]; sp_b[51] = sp_b[33];
		sp_b[27] = a; sp_b[30] = b; sp_b[33] = c;

		a = sp_b[18];           b = sp_b[19];
		sp_b[18] = sp_b[24]; sp_b[19] = sp_b[21];
		sp_b[24] = sp_b[26]; sp_b[21] = sp_b[25];
		sp_b[26] = sp_b[20]; sp_b[25] = sp_b[23];
		sp_b[20] = a;      sp_b[23] = b;

		i++; goto ts;
	}

	case 6: switch (tim)
	{
	case 1: if (dir == 1)
	{
		a = sp_b[6]; b = sp_b[7]; c = sp_b[8];
		sp_b[6] = sp_b[33]; sp_b[7] = sp_b[34]; sp_b[8] = sp_b[35];
		sp_b[33] = sp_b[24]; sp_b[34] = sp_b[25]; sp_b[35] = sp_b[26];
		sp_b[24] = sp_b[15]; sp_b[25] = sp_b[16]; sp_b[26] = sp_b[17];
		sp_b[15] = a; sp_b[16] = b; sp_b[17] = c;

		a = sp_b[47];           b = sp_b[50];
		sp_b[47] = sp_b[45]; sp_b[50] = sp_b[46];
		sp_b[45] = sp_b[51]; sp_b[46] = sp_b[48];
		sp_b[51] = sp_b[53]; sp_b[48] = sp_b[52];
		sp_b[53] = a;      sp_b[52] = b;

		i++; goto ts;

	}
			else if (dir == -1)
			{
				a = sp_b[8]; b = sp_b[7]; c = sp_b[6];
				sp_b[8] = sp_b[17]; sp_b[7] = sp_b[16]; sp_b[6] = sp_b[15];
				sp_b[17] = sp_b[26]; sp_b[16] = sp_b[25]; sp_b[15] = sp_b[24];
				sp_b[26] = sp_b[35]; sp_b[25] = sp_b[34]; sp_b[24] = sp_b[33];
				sp_b[35] = a; sp_b[34] = b; sp_b[33] = c;

				b = sp_b[50];           a = sp_b[47];
				sp_b[50] = sp_b[52]; sp_b[47] = sp_b[53];
				sp_b[52] = sp_b[48]; sp_b[53] = sp_b[51];
				sp_b[48] = sp_b[46];  sp_b[51] = sp_b[45];
				sp_b[46] = b;      sp_b[45] = a;

				i++; goto ts;
			}

	case 2: a = sp_b[6]; b = sp_b[7]; c = sp_b[8];
		sp_b[6] = sp_b[33]; sp_b[7] = sp_b[34]; sp_b[8] = sp_b[35];
		sp_b[33] = sp_b[24]; sp_b[34] = sp_b[25]; sp_b[35] = sp_b[26];
		sp_b[24] = sp_b[15]; sp_b[25] = sp_b[16]; sp_b[26] = sp_b[17];
		sp_b[15] = a; sp_b[16] = b; sp_b[17] = c;

		a = sp_b[47];           b = sp_b[50];
		sp_b[47] = sp_b[45]; sp_b[50] = sp_b[46];
		sp_b[45] = sp_b[51]; sp_b[46] = sp_b[48];
		sp_b[51] = sp_b[53]; sp_b[48] = sp_b[52];
		sp_b[53] = a;      sp_b[52] = b;

		a = sp_b[6]; b = sp_b[7]; c = sp_b[8];
		sp_b[6] = sp_b[33]; sp_b[7] = sp_b[34]; sp_b[8] = sp_b[35];
		sp_b[33] = sp_b[24]; sp_b[34] = sp_b[25]; sp_b[35] = sp_b[26];
		sp_b[24] = sp_b[15]; sp_b[25] = sp_b[16]; sp_b[26] = sp_b[17];
		sp_b[15] = a; sp_b[16] = b; sp_b[17] = c;

		a = sp_b[47];           b = sp_b[50];
		sp_b[47] = sp_b[45]; sp_b[50] = sp_b[46];
		sp_b[45] = sp_b[51]; sp_b[46] = sp_b[48];
		sp_b[51] = sp_b[53]; sp_b[48] = sp_b[52];
		sp_b[53] = a;      sp_b[52] = b;

		i++; goto ts;
	}
	}

}