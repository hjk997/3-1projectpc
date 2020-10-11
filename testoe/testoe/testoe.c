
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[34];
};
static const struct sqlcxp sqlfpn =
{
    33,
    "C:\\dbfile\\testoe\\testoe\\testoe.pc"
};


static unsigned int sqlctx = 652329587;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[6];
   unsigned int   sqhstl[6];
            int   sqhsts[6];
            void  *sqindv[6];
            int   sqinds[6];
   unsigned int   sqharm[6];
   unsigned int   *sqharc[6];
   unsigned short  sqadto[6];
   unsigned short  sqtdso[6];
} sqlstm = {13,6};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

 static const char *sq0001 = 
"select *  from BLACKLIST            ";

 static const char *sq0008 = 
"select PCSALE.SALEID ,PCSALE.MEMBERID ,MEMBER.NAME ,TO_CHAR(DATETIME,'RRRR-\
MM-DD') ,PRODUCTNAME ,PRICE  from PCSALE ,MEMBER where MEMBER.MEMBERID=PCSALE\
.MEMBERID           ";

 static const char *sq0009 = 
"select FOODSALE.SALEID ,FOODSALE.MEMBERID ,MEMBER.NAME ,TO_CHAR(DATETIME,'R\
RRR-MM-DD') ,PRODUCTNAME ,PRICE  from FOODSALE ,MEMBER where FOODSALE.MEMBERI\
D=MEMBER.MEMBERID           ";

 static const char *sq0010 = 
"select MEMBERID ,NAME ,TO_CHAR(BIRTHDAY,'RRRR-MM-DD') ,PAIDMONEY ,LEFTMINT \
 from MEMBER where memberid<>'NULL'           ";

 static const char *sq0011 = 
"select productname ,stock ,price ,purchaseprice  from stock            ";

 static const char *sq0012 = 
"select seat.seatid ,NVL(member.name,'이름 없음') , case  when LENGTH(seat.g\
amename) between 0 and 3 then seat.gamename else DECODE(seat.gamename,'NULL',\
' ',(SUBSTR(seat.gamename,1,3)||'..'))  end  \"LOC\"  from seat ,member where\
 seat.memberid=member.memberid           ";

 static const char *sq0023 = 
"select gamename  from gameinfo            ";

 static const char *sq0035 = 
"select FOODSALE.SALEID ,FOODSALE.MEMBERID ,MEMBER.NAME ,TO_CHAR(DATETIME,'R\
RRR-MM-DD') ,PRODUCTNAME ,PRICE  from FOODSALE ,MEMBER where FOODSALE.MEMBERI\
D=MEMBER.MEMBERID union select PCSALE.SALEID ,PCSALE.MEMBERID ,MEMBER.NAME ,T\
O_CHAR(DATETIME,'RRRR-MM-DD') ,PCSALE.PRODUCTNAME ,PRICE  from PCSALE ,MEMBER\
 where PCSALE.MEMBERID=MEMBER.MEMBERID           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,840,0,0,
5,0,0,1,36,0,9,337,0,0,0,0,0,1,0,
20,0,0,1,0,0,13,341,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
47,0,0,1,0,0,15,364,0,0,0,0,0,1,0,
62,0,0,2,126,0,3,401,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,3,
0,0,
101,0,0,3,0,0,29,402,0,0,0,0,0,1,0,
116,0,0,4,0,0,29,405,0,0,0,0,0,1,0,
131,0,0,5,180,0,4,434,0,0,6,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,3,0,0,1,
97,0,0,
170,0,0,6,121,0,5,496,0,0,6,6,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
1,97,0,0,
209,0,0,7,0,0,29,506,0,0,0,0,0,1,0,
224,0,0,8,172,0,9,526,0,0,0,0,0,1,0,
239,0,0,8,0,0,13,534,0,0,6,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,
0,0,
278,0,0,8,0,0,15,580,0,0,0,0,0,1,0,
293,0,0,9,180,0,9,603,0,0,0,0,0,1,0,
308,0,0,9,0,0,13,611,0,0,6,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,
0,0,
347,0,0,9,0,0,15,651,0,0,0,0,0,1,0,
362,0,0,10,121,0,9,675,0,0,0,0,0,1,0,
377,0,0,10,0,0,13,678,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,3,0,0,
412,0,0,10,0,0,15,726,0,0,0,0,0,1,0,
427,0,0,11,71,0,9,744,0,0,0,0,0,1,0,
442,0,0,11,0,0,13,747,0,0,4,0,0,1,0,2,9,0,0,2,3,0,0,2,3,0,0,2,3,0,0,
473,0,0,10,0,0,15,793,0,0,0,0,0,1,0,
488,0,0,12,268,0,9,815,0,0,0,0,0,1,0,
503,0,0,12,0,0,13,818,0,0,3,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,
530,0,0,10,0,0,15,878,0,0,0,0,0,1,0,
545,0,0,13,301,0,4,896,0,0,6,1,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,1,
3,0,0,
584,0,0,14,253,0,4,946,0,0,6,1,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,1,
3,0,0,
623,0,0,15,211,0,4,997,0,0,4,1,0,1,0,2,3,0,0,2,9,0,0,2,3,0,0,1,3,0,0,
654,0,0,16,57,0,4,1028,0,0,1,0,0,1,0,2,9,0,0,
673,0,0,17,61,0,5,1033,0,0,2,2,0,1,0,1,9,0,0,1,3,0,0,
696,0,0,18,0,0,29,1040,0,0,0,0,0,1,0,
711,0,0,19,98,0,4,1069,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,3,0,0,
738,0,0,20,99,0,4,1094,0,0,5,2,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,1,97,0,0,1,97,0,0,
773,0,0,21,46,0,5,1120,0,0,2,2,0,1,0,1,9,0,0,1,3,0,0,
796,0,0,22,0,0,29,1123,0,0,0,0,0,1,0,
811,0,0,24,165,0,4,1158,0,0,4,1,0,1,0,2,3,0,0,2,3,0,0,2,9,0,0,1,3,0,0,
842,0,0,23,42,0,9,1178,0,0,0,0,0,1,0,
857,0,0,23,0,0,13,1186,0,0,1,0,0,1,0,2,9,0,0,
876,0,0,23,0,0,15,1216,0,0,0,0,0,1,0,
891,0,0,25,46,0,5,1219,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
914,0,0,26,0,0,29,1222,0,0,0,0,0,1,0,
929,0,0,27,43,0,3,1257,0,0,4,4,0,1,0,1,9,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
960,0,0,28,0,0,29,1258,0,0,0,0,0,1,0,
975,0,0,29,0,0,29,1261,0,0,0,0,0,1,0,
990,0,0,30,103,0,4,1281,0,0,4,1,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,1,9,0,0,
1021,0,0,31,77,0,5,1304,0,0,4,4,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,9,0,0,
1052,0,0,32,0,0,29,1312,0,0,0,0,0,1,0,
1067,0,0,33,41,0,2,1324,0,0,1,1,0,1,0,1,9,0,0,
1086,0,0,34,0,0,29,1325,0,0,0,0,0,1,0,
1101,0,0,35,355,0,9,1352,0,0,0,0,0,1,0,
1116,0,0,35,0,0,13,1359,0,0,6,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,3,0,0,
1155,0,0,35,0,0,15,1396,0,0,0,0,0,1,0,
1170,0,0,36,120,0,4,1423,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,
1197,0,0,37,51,0,3,1441,0,0,0,0,0,1,0,
1212,0,0,38,71,0,3,1442,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1239,0,0,39,88,0,5,1444,0,0,1,1,0,1,0,1,97,0,0,
1258,0,0,40,51,0,3,1452,0,0,0,0,0,1,0,
1273,0,0,41,71,0,3,1453,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1300,0,0,42,87,0,5,1455,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1323,0,0,43,51,0,3,1463,0,0,0,0,0,1,0,
1338,0,0,44,71,0,3,1464,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1365,0,0,45,87,0,5,1466,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1388,0,0,46,51,0,3,1474,0,0,0,0,0,1,0,
1403,0,0,47,71,0,3,1475,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1430,0,0,48,87,0,5,1477,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1453,0,0,49,0,0,29,1487,0,0,0,0,0,1,0,
1468,0,0,50,0,0,29,1490,0,0,0,0,0,1,0,
1483,0,0,51,110,0,4,1505,0,0,3,1,0,1,0,2,9,0,0,2,3,0,0,1,3,0,0,
1510,0,0,52,87,0,5,1517,0,0,3,3,0,1,0,1,3,0,0,1,3,0,0,1,9,0,0,
1537,0,0,53,37,0,2,1522,0,0,1,1,0,1,0,1,3,0,0,
1556,0,0,54,0,0,29,1524,0,0,0,0,0,1,0,
1571,0,0,55,106,0,4,1557,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1594,0,0,56,51,0,3,1569,0,0,0,0,0,1,0,
1609,0,0,57,73,0,3,1570,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1636,0,0,58,63,0,5,1572,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1659,0,0,59,55,0,5,1576,0,0,1,1,0,1,0,1,97,0,0,
1678,0,0,60,51,0,3,1583,0,0,0,0,0,1,0,
1693,0,0,61,73,0,3,1584,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1720,0,0,62,63,0,5,1586,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1743,0,0,63,55,0,5,1590,0,0,1,1,0,1,0,1,97,0,0,
1762,0,0,64,51,0,3,1597,0,0,0,0,0,1,0,
1777,0,0,65,73,0,3,1598,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1804,0,0,66,63,0,5,1600,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1827,0,0,67,55,0,5,1603,0,0,1,1,0,1,0,1,97,0,0,
1846,0,0,68,51,0,3,1610,0,0,0,0,0,1,0,
1861,0,0,69,73,0,3,1611,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1888,0,0,70,63,0,5,1613,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1911,0,0,71,55,0,5,1616,0,0,1,1,0,1,0,1,97,0,0,
1930,0,0,72,51,0,3,1623,0,0,0,0,0,1,0,
1945,0,0,73,73,0,3,1624,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
1972,0,0,74,64,0,5,1626,0,0,1,1,0,1,0,1,97,0,0,
1991,0,0,75,55,0,5,1629,0,0,1,1,0,1,0,1,97,0,0,
2010,0,0,76,0,0,29,1638,0,0,0,0,0,1,0,
2025,0,0,77,0,0,29,1641,0,0,0,0,0,1,0,
2040,0,0,78,131,0,4,1657,0,0,4,1,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,1,3,0,0,
2071,0,0,79,63,0,5,1665,0,0,2,2,0,1,0,1,3,0,0,1,9,0,0,
2094,0,0,80,0,0,29,1668,0,0,0,0,0,1,0,
2109,0,0,81,55,0,5,1670,0,0,1,1,0,1,0,1,9,0,0,
2128,0,0,82,0,0,29,1673,0,0,0,0,0,1,0,
2143,0,0,83,39,0,2,1675,0,0,1,1,0,1,0,1,3,0,0,
2162,0,0,84,0,0,29,1677,0,0,0,0,0,1,0,
2177,0,0,85,19,0,1,1683,0,0,0,0,0,1,0,
2192,0,0,86,19,0,1,1684,0,0,0,0,0,1,0,
2207,0,0,87,23,0,1,1685,0,0,0,0,0,1,0,
2222,0,0,88,17,0,1,1686,0,0,0,0,0,1,0,
2237,0,0,89,19,0,1,1687,0,0,0,0,0,1,0,
2252,0,0,90,15,0,1,1688,0,0,0,0,0,1,0,
2267,0,0,91,16,0,1,1689,0,0,0,0,0,1,0,
2282,0,0,92,15,0,1,1690,0,0,0,0,0,1,0,
2297,0,0,93,19,0,1,1691,0,0,0,0,0,1,0,
2312,0,0,94,21,0,1,1692,0,0,0,0,0,1,0,
2327,0,0,95,20,0,1,1693,0,0,0,0,0,1,0,
2342,0,0,96,17,0,1,1694,0,0,0,0,0,1,0,
2357,0,0,97,230,0,44,1696,0,0,0,0,0,1,0,
2372,0,0,98,174,0,44,1705,0,0,0,0,0,1,0,
2387,0,0,99,112,0,44,1712,0,0,0,0,0,1,0,
2402,0,0,100,116,0,44,1718,0,0,0,0,0,1,0,
2417,0,0,101,226,0,44,1724,0,0,0,0,0,1,0,
2432,0,0,102,175,0,44,1733,0,0,0,0,0,1,0,
2447,0,0,103,76,0,44,1740,0,0,0,0,0,1,0,
2462,0,0,104,336,0,44,1745,0,0,0,0,0,1,0,
2477,0,0,105,287,0,44,1757,0,0,0,0,0,1,0,
2492,0,0,106,1280,0,44,1767,0,0,0,0,0,1,0,
2507,0,0,107,110,0,44,1786,0,0,0,0,0,1,0,
2522,0,0,108,282,0,44,1791,0,0,0,0,0,1,0,
2537,0,0,109,152,0,3,1801,0,0,0,0,0,1,0,
2552,0,0,110,151,0,3,1803,0,0,0,0,0,1,0,
2567,0,0,111,151,0,3,1805,0,0,0,0,0,1,0,
2582,0,0,112,155,0,3,1807,0,0,0,0,0,1,0,
2597,0,0,113,119,0,3,1809,0,0,0,0,0,1,0,
2612,0,0,114,144,0,3,1810,0,0,0,0,0,1,0,
2627,0,0,115,148,0,3,1812,0,0,0,0,0,1,0,
2642,0,0,116,49,0,5,1814,0,0,0,0,0,1,0,
2657,0,0,117,94,0,3,1815,0,0,0,0,0,1,0,
2672,0,0,118,142,0,3,1817,0,0,0,0,0,1,0,
2687,0,0,119,72,0,3,1819,0,0,0,0,0,1,0,
2702,0,0,120,69,0,3,1821,0,0,0,0,0,1,0,
2717,0,0,121,67,0,3,1822,0,0,0,0,0,1,0,
2732,0,0,122,101,0,3,1823,0,0,0,0,0,1,0,
2747,0,0,123,102,0,3,1825,0,0,0,0,0,1,0,
2762,0,0,124,81,0,3,1827,0,0,0,0,0,1,0,
2777,0,0,125,81,0,3,1829,0,0,0,0,0,1,0,
2792,0,0,126,81,0,3,1831,0,0,0,0,0,1,0,
2807,0,0,127,81,0,3,1833,0,0,0,0,0,1,0,
2822,0,0,128,81,0,3,1835,0,0,0,0,0,1,0,
2837,0,0,129,81,0,3,1837,0,0,0,0,0,1,0,
2852,0,0,130,81,0,3,1839,0,0,0,0,0,1,0,
2867,0,0,131,82,0,3,1841,0,0,0,0,0,1,0,
2882,0,0,132,102,0,3,1843,0,0,0,0,0,1,0,
2897,0,0,133,93,0,3,1845,0,0,0,0,0,1,0,
2912,0,0,134,86,0,3,1847,0,0,0,0,0,1,0,
2927,0,0,135,87,0,3,1849,0,0,0,0,0,1,0,
2942,0,0,136,88,0,3,1851,0,0,0,0,0,1,0,
2957,0,0,137,87,0,3,1854,0,0,0,0,0,1,0,
2972,0,0,138,44,0,3,1856,0,0,0,0,0,1,0,
2987,0,0,139,44,0,3,1858,0,0,0,0,0,1,0,
3002,0,0,140,44,0,3,1860,0,0,0,0,0,1,0,
3017,0,0,141,44,0,3,1862,0,0,0,0,0,1,0,
3032,0,0,142,44,0,3,1864,0,0,0,0,0,1,0,
3047,0,0,143,44,0,3,1866,0,0,0,0,0,1,0,
3062,0,0,144,44,0,3,1868,0,0,0,0,0,1,0,
3077,0,0,145,44,0,3,1870,0,0,0,0,0,1,0,
3092,0,0,146,44,0,3,1872,0,0,0,0,0,1,0,
3107,0,0,147,45,0,3,1874,0,0,0,0,0,1,0,
3122,0,0,148,46,0,3,1877,0,0,0,0,0,1,0,
3137,0,0,149,53,0,3,1878,0,0,0,0,0,1,0,
3152,0,0,150,65,0,3,1879,0,0,0,0,0,1,0,
3167,0,0,151,51,0,3,1880,0,0,0,0,0,1,0,
3182,0,0,152,64,0,3,1881,0,0,0,0,0,1,0,
3197,0,0,153,52,0,3,1882,0,0,0,0,0,1,0,
3212,0,0,154,91,0,3,1883,0,0,0,0,0,1,0,
3227,0,0,155,87,0,3,1884,0,0,0,0,0,1,0,
3242,0,0,156,27,0,1,1885,0,0,0,0,0,1,0,
3257,0,0,157,88,0,44,1886,0,0,0,0,0,1,0,
3272,0,0,158,51,0,3,1887,0,0,0,0,0,1,0,
3287,0,0,159,109,0,3,1889,0,0,0,0,0,1,0,
3302,0,0,160,51,0,3,1891,0,0,0,0,0,1,0,
3317,0,0,161,109,0,3,1893,0,0,0,0,0,1,0,
3332,0,0,162,51,0,3,1895,0,0,0,0,0,1,0,
3347,0,0,163,112,0,3,1897,0,0,0,0,0,1,0,
3362,0,0,164,51,0,3,1899,0,0,0,0,0,1,0,
3377,0,0,165,111,0,3,1901,0,0,0,0,0,1,0,
3392,0,0,166,51,0,3,1903,0,0,0,0,0,1,0,
3407,0,0,167,123,0,3,1904,0,0,0,0,0,1,0,
3422,0,0,168,51,0,3,1905,0,0,0,0,0,1,0,
3437,0,0,169,123,0,3,1906,0,0,0,0,0,1,0,
3452,0,0,170,51,0,3,1907,0,0,0,0,0,1,0,
3467,0,0,171,113,0,3,1908,0,0,0,0,0,1,0,
3482,0,0,172,0,0,29,1910,0,0,0,0,0,1,0,
3497,0,0,0,0,0,27,1920,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
3528,0,0,174,0,0,31,1938,0,0,0,0,0,1,0,
};


#define _CRT_SECURE_NO_WARNINGS
/*
   SQL - 요구하고 응답하는 단순 질의어 - 관리자가 씀
   PL/SQL - SQL+Programming - 오라클 Programming
   PRO*C - SQL + PL/SQL + C - exe 배포 일반
   PROC는 SQL 명령 앞에 EXEC를 적어야 함
   마지막에 ;
   주키  : not null, unique
   외래키 : 생략 가능, null 가능, unique 해야 함
   
*/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>
void init(); // 초기화 함수임 초기화 메뉴
void DB_connect(); // DB 연결
void sql_error(char *msg); // sql 에러
void selectMember(); // 멤버 출력
void selectStock(); // 재고 출력
void selectSeat(); // 좌석 출력 
void memberInsert(); // 멤버 추가
void memberUpdate(); // 멤버 변경
void memberMode();
void seatMode();
void stockMode();
void saleMode();
void selectPCSale();
void selectFoodSale();
void PCSaleMode();
void foodSaleMode();
void selectSeatUser();
void seatUserFinUpdate();
void seatUserStartUpdate();
void seatUserGameUpdate();
void insertStock();
void updateStock();
void deleteStock();
void selectSale();
void PCInsert();
void PCDelete();
void FoodInsert();
void FoodDelete();
void selectBlackList();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

   
/* EXEC SQL END DECLARE SECTION; */ 


#define getch()  _getch()

void main() {
	DB_connect();

	system("title 햄버거 조의 고급 PC방");

	int flag = 0;

	  do {
	  printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	  printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	printf("-------------------   어서 오세요. 고급 PC방입니다.  --------------------\n");
	printf("-------------------           PC방 이용 수칙         --------------------\n");
	printf("--------------  1. 본체 및 PC방 부품을 훼손하지 않는다.  ----------------\n");
	printf("--------------  2. 사용한 자리는 치운다. (알바생이 힘들어요)  -----------\n");
	printf("--------------  3. 야간 사용은 하지 않는다. (집에 갑시다)  --------------\n");
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	  printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");

      printf("메뉴를 선택해주세요. \n");
      printf("1. 회원   2. 좌석   3. 재고   4. 매출   5. 초기화  (0. 시스템 종료) \n");
      scanf("%d", &flag);


      switch(flag){
		case -1: // 블랙리스트 
			printf("\n");
			system("cls");
			selectBlackList();
			break;
         case 0:
            break;
         case 1: //회원
            printf("\n");
			system("cls");
            printf("회원 테이블을 확인합니다.\n");
            printf("\n");
            memberMode();
            break;
         case 2:
            printf("\n");
			system("cls");
            printf("좌석 테이블을 확인합니다.\n");
            printf("\n");
            seatMode();
            break;
         case 3:
            printf("\n");
			system("cls");
            printf("재고 테이블을 확인합니다.\n");
            stockMode();
            printf("\n");
            break;
         case 4:
            printf("\n");
			system("cls");
            printf("매출 테이블을 확인합니다.\n");
            saleMode();
            printf("\n");
            break;
		case 5:
			init();
			break;
		default:
			break;
            
      }
   } while(flag != 0);
  
   getch();

}

void memberMode(){
	int flag = 0;
	do{
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	printf("------------------                                  -------------------\n");
	printf("------------------           회원 정보 확인         -------------------\n");
	printf("------------------                                  -------------------\n");
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
		selectMember();
		printf("실행할 옵션을 선택해주세요.   0을 누르면 메인 화면으로 돌아갑니다.\n");
		printf("1. 회원 추가 2. 회원 정보 변경 \n");
		scanf("%d", &flag);

		switch(flag){
			case 0:
				break;
			case 1: // 회원 추가
				memberInsert();
				system("cls");
				break;
			case 2: // 회원 정보 변경
				memberUpdate();
				system("cls");
				break;
			default:
				break;
		}
	}while(flag != 0);
	system("cls");
}

void seatMode(){
	int flag = 0;
	do{
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	printf("------------------                                  -------------------\n");
	printf("------------------           좌석 정보 확인         -------------------\n");
	printf("------------------                                  -------------------\n");
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
		selectSeat();
		printf("실행할 옵션을 선택해주세요.   0을 누르면 메인 화면으로 돌아갑니다.\n");
		printf("1. 자리 상태 확인 2. 좌석 사용 설정 3. 좌석 사용 종료 4. 게임 상태 변경 \n");
		scanf("%d", &flag);

		switch(flag){
			case 0:
				break;
			case 1: // 자리 상태 확인
				selectSeatUser();
				system("cls");
				break;
			case 2: // 좌석 사용 설정
				seatUserStartUpdate();
				system("cls");
				break;
			case 3: // 좌석 사용 종료
				seatUserFinUpdate();
				system("cls");
				break;
			case 4: // 게임 상태 변경
				seatUserGameUpdate();
				system("cls");
				break;
			default:
				break;
		}
	}while(flag != 0);
	system("cls");
}

void stockMode(){
	int flag = 0;
	do{
	
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	printf("------------------                                  -------------------\n");
	printf("------------------           재고 정보 확인         -------------------\n");
	printf("------------------                                  -------------------\n");
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
		selectStock();
		printf("실행할 옵션을 선택해주세요.   0을 누르면 메인 화면으로 돌아갑니다.\n");
		printf("1. 물품 추가 2. 재고 수정 3. 물품 삭제 \n");
		scanf("%d", &flag);

		switch(flag){
			case 0:
				break;
			case 1: // 물품 추가
				insertStock();
				system("cls");
				break;
			case 2: // 재고 수정
				updateStock();
				system("cls");
				break;
			case 3: // 물품 삭제
				deleteStock();
				system("cls");
				break;
			default:
				break;
		}
	}while(flag != 0);
	system("cls");
}

void saleMode(){
	int flag = 0;
	do{
	
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
	printf("------------------                                  -------------------\n");
	printf("------------------           매출 정보 확인         -------------------\n");
	printf("------------------                                  -------------------\n");
	printf("--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--\n");
		printf("실행할 옵션을 선택해주세요.   0을 누르면 메인 화면으로 돌아갑니다.\n");
		printf("1. 전체 매출 확인 2. pc 매출 확인 3. 음식 매출 확인 \n");
		scanf("%d", &flag);

		switch(flag){
			case 0:
				break;
			case 1: //전체 매출 리스트 출력만
				selectSale();
				system("cls");
				break;
			case 2: // PC 매출 모드
				PCSaleMode();
				system("cls");
				break;
			case 3: // 음식 매출 모드 
				foodSaleMode();
				system("cls");
				break;
			default:
				break;
		}
	}while(flag != 0);
	system("cls");
}

void PCSaleMode(){
   int flag = 0;
   do{
      selectPCSale();
      printf("실행할 옵션을 선택해주세요.   0을 누르면 메인 화면으로 돌아갑니다.\n");
      printf(" 1. 이용권 구매 2. 금액 환불 \n");
      scanf("%d", &flag);
      switch(flag){
         case 0:
            break;
         case 1:  // 이용권 구매
            PCInsert();
			system("cls");
            break;
         case 2: // 금액 환불
         PCDelete();
		 system("cls");
            break;
         default:
            break;
      }
   }while(flag != 0);
   system("cls");
}

void foodSaleMode(){
   int flag = 0;
   do{
      selectFoodSale();
      printf("실행할 옵션을 선택해주세요.   0을 누르면 메인 화면으로 돌아갑니다.\n");
      printf("1. 음식 구매 2. 금액 환불 \n");
      scanf("%d", &flag);
      switch(flag){
         case 0:
            break;
         case 1:  // 음식 구매
         FoodInsert();
		 system("cls");
            break;
         case 2: // 금액 환불
         FoodDelete();
		 system("cls");
            break;
         default:
            break;
      }
   }while(flag != 0);
   system("cls");
}


void selectBlackList(){
   int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* VARCHAR blackListMemberID[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } blackListMemberID[100];

    /* VARCHAR name[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name[100];

    /* VARCHAR reason[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } reason[100];

    /* EXEC SQL END DECLARE SECTION; */ 

   /* EXEC SQL DECLARE BLACKLISTCURSOR CURSOR FOR SELECT * FROM BLACKLIST; */ 

    
    /* EXEC SQL OPEN BLACKLISTCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 0;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0001;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	printf("--*--*--*--*--*--*--*--* 블 랙 리 스 트 -*--*--*--*--*--*--*--*--*--\n");

   while (end_flag) {
        /* EXEC SQL FETCH BLACKLISTCURSOR INTO :blackListMemberID, :name, :reason ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 3;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )100;
        sqlstm.offset = (unsigned int  )20;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)blackListMemberID;
        sqlstm.sqhstl[0] = (unsigned int  )52;
        sqlstm.sqhsts[0] = (         int  )52;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)name;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )52;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)reason;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )52;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if (sqlca.sqlcode != 0) {
            if (sqlca.sqlcode == 1403) {
                end_flag = 0;
            } else {
                printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
            }
         count = sqlca.sqlerrd[2] - bfCount;
         bfCount = sqlca.sqlerrd[2];
         
         for( i = 0 ; i < count ; i++){
         blackListMemberID[i].arr[blackListMemberID[i].len] = '\0';
         name[i].arr[name[i].len] = '\0';
         reason[i].arr[reason[i].len] = '\0';
         printf("아이디 : %s\n", blackListMemberID[i].arr);
         printf("이름 : %s\n", name[i].arr);
         printf("사유 : %s\n",reason[i].arr);
         }
        
     }
   
    }
    
    /* EXEC SQL CLOSE BLACKLISTCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 3;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )47;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	getch();
	system("cls");
}

void memberInsert(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* VARCHAR memberID[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID;

	/* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

	/* VARCHAR password[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } password;

	/* VARCHAR birthday[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } birthday;

	int year;
	int month;
	int date;

	int paidmoney = 0;
	int leftmint = 0;

	/* EXEC SQL END DECLARE SECTION; */ 

	
		printf("회원을 추가합니다. \n");

		printf("member ID : ");
		scanf("%s", memberID.arr);
		memberID.len = strlen(memberID.arr); 
		printf("member name : ");
		scanf("%s", name.arr);
		name.len = strlen(name.arr); 
		printf("member password : ");
		scanf("%s", password.arr);
		password.len = strlen(password.arr); 
		printf("member birthday : ");
		scanf("%s", birthday.arr);
		birthday.len = strlen(birthday.arr); 
		
		/* EXEC SQL INSERT INTO member(memberid, name, password, birthday, paidmoney, leftmint) VALUES (:memberID ,:name ,:password ,TO_DATE(:birthday, 'RRRR-MM-DD') ,:paidmoney, :leftmint); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into member (memberid,name,password,birthday,paidmo\
ney,leftmint) values (:b0,:b1,:b2,TO_DATE(:b3,'RRRR-MM-DD'),:b4,:b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )62;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&memberID;
  sqlstm.sqhstl[0] = (unsigned int  )52;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&name;
  sqlstm.sqhstl[1] = (unsigned int  )52;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&password;
  sqlstm.sqhstl[2] = (unsigned int  )52;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&birthday;
  sqlstm.sqhstl[3] = (unsigned int  )52;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&paidmoney;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&leftmint;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		/* EXEC SQL COMMIT WORK; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )101;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		printf("%s 님을 추가하였습니다. \n\n", name.arr);
	
	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )116;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
	getch();
}

void memberUpdate(){

   /* EXEC SQL BEGIN DECLARE SECTION; */ 


   char memberID[50];
   /* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

   /* VARCHAR password[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } password;

   /* VARCHAR birthday[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } birthday;


   char m_ID[50];
   char m_name[50];
   char m_password[50];
   char m_birthday[20];
   int m_paidmoney;
   int m_leftmint;

   int paidmoney;
   int leftmint;

   /* EXEC SQL END DECLARE SECTION; */ 


   printf("수정할 회원의 ID를 입력해주세요. : ");
   scanf("%s", memberID);
   
	printf("회원 ID: %s\n", memberID);
	/* EXEC SQL SELECT NAME, PASSWORD, TO_CHAR (BIRTHDAY, 'RRRR-MM-DD'), PAIDMONEY, LEFTMINT 
	INTO :name, :password, :birthday, :paidmoney, :leftmint
	FROM MEMBER
	WHERE MEMBERID IN (SELECT memberid FROM member WHERE memberid = :memberID); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select NAME ,PASSWORD ,TO_CHAR(BIRTHDAY,'RRRR-MM-DD') ,PAID\
MONEY ,LEFTMINT into :b0,:b1,:b2,:b3,:b4  from MEMBER where MEMBERID in (sele\
ct memberid  from member where memberid=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )131;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&name;
 sqlstm.sqhstl[0] = (unsigned int  )52;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&password;
 sqlstm.sqhstl[1] = (unsigned int  )52;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&birthday;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&paidmoney;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&leftmint;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)memberID;
 sqlstm.sqhstl[5] = (unsigned int  )50;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("해당 회원이 존재하지 않습니다.\n");
			return;
		}
	}

	printf("\n");
	
	name.arr[name.len]='\0';
	printf("이름 : %s\n", name.arr);
	
	birthday.arr[birthday.len]='\0';
	printf("생년월일: %s\n", birthday.arr);
	
	printf("지불 금액: %d\n", paidmoney);
	
	printf("남은 시간: %d\n", leftmint); 
	printf("\n");

	printf("갱신 정보를 입력해주세요. -1을 입력하면 기존 정보로 설정됩니다.\n");

	printf("이름 : ");
	scanf("%s", m_name);
	if(strcmp(m_name, "-1")==0){
		strcpy(m_name,name.arr);
		strncpy(m_name,name.arr, name.len);
		m_name[name.len] = '\0';
	}

   printf("비밀번호 : ");
   scanf("%s", m_password);
   if(strcmp(m_password, "-1")==0){
	  strncpy(m_password,password.arr, password.len);
	  m_password[password.len] = '\0';
   }

   printf("생년월일 : ");
   scanf("%s", m_birthday);
   if(strcmp(m_birthday, "-1")==0){
	  strncpy(m_birthday,birthday.arr, birthday.len);
	  m_birthday[birthday.len] = '\0';
   }

   printf("지불 금액 : ");
   scanf("%d", &m_paidmoney);
   if(m_paidmoney == -1){
		m_paidmoney = paidmoney;
   }

   printf("남은 시간 : ");
   scanf("%d", &m_leftmint);
   if(m_leftmint == -1){
		m_leftmint = leftmint;
   }

   
   /* EXEC SQL UPDATE member
	  SET name = :m_name,
	  password = :m_password,
	  birthday = TO_DATE(:m_birthday,'RRRR-MM-DD'),
	  paidmoney = :m_paidmoney,
	  leftmint = :m_leftmint
	  WHERE memberid = :memberID; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update member  set name=:b0,password=:b1,birthday=TO_DATE\
(:b2,'RRRR-MM-DD'),paidmoney=:b3,leftmint=:b4 where memberid=:b5";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )170;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)m_name;
   sqlstm.sqhstl[0] = (unsigned int  )50;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)m_password;
   sqlstm.sqhstl[1] = (unsigned int  )50;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)m_birthday;
   sqlstm.sqhstl[2] = (unsigned int  )20;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&m_paidmoney;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&m_leftmint;
   sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)memberID;
   sqlstm.sqhstl[5] = (unsigned int  )50;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
   printf("%s 님의 정보를 수정하였습니다.. \n", memberID);
   
   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )209;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   getch();
}

void selectPCSale() {
    int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   int saleID[100];
    /* VARCHAR memberID[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID[100];

    /* VARCHAR name[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name[100];

    /* VARCHAR DATE[100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } DATE[100];

    /* VARCHAR productName[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } productName[100];

    int price[100];
    /* EXEC SQL DECLARE PCSALECURSOR CURSOR FOR SELECT PCSALE.SALEID, PCSALE.MEMBERID, MEMBER.NAME, TO_CHAR(DATETIME,'RRRR-MM-DD'),PRODUCTNAME ,PRICE 
   FROM PCSALE, MEMBER
    WHERE MEMBER.MEMBERID = PCSALE.MEMBERID; */ 

    /* EXEC SQL END DECLARE SECTION; */ 

    /* EXEC SQL OPEN PCSALECURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0008;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )224;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
   printf("---------------------------------------------------------------------------------------\n");
   printf("|  no.  |       ID       |   name   |  purchase date  |   product name   | paid money |\n");
   printf("---------------------------------------------------------------------------------------\n");
   // <space> no. : 7 , ID : 16 , name : 10 , purchase date : 17 , product name : 18 paid money : 12

    while (end_flag) {
        /* EXEC SQL FETCH PCSALECURSOR INTO:
        saleID, :memberID, :name, :DATE, :productName, :price; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )100;
        sqlstm.offset = (unsigned int  )239;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)saleID;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )sizeof(int);
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)memberID;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )52;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)name;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )52;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)DATE;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )24;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)productName;
        sqlstm.sqhstl[4] = (unsigned int  )52;
        sqlstm.sqhsts[4] = (         int  )52;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqharc[4] = (unsigned int   *)0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)price;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[5] = (         int  )sizeof(int);
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqharc[5] = (unsigned int   *)0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if (sqlca.sqlcode != 0) {
            if (sqlca.sqlcode == 1403) {
                end_flag = 0;
            } else {
                //printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
            }
         count = sqlca.sqlerrd[2] - bfCount;
         bfCount = sqlca.sqlerrd[2];
       
         for( i = 0 ; i < count ; i++){
            printf("|  ");
            printf("%-5d", saleID[i]);
            printf("|  ");

            memberID[i].arr[memberID[i].len]='\0';

            printf("%-14s", memberID[i].arr);
            printf("|  ");

            name[i].arr[name[i].len]='\0';

            printf("%-8s", name[i].arr);
            printf("|  ");

            DATE[i].arr[DATE[i].len]='\0';

            printf("%-15s", DATE[i].arr);
            printf("|  ");

         productName[i].arr[productName[i].len]='\0';

            printf("%-16s", productName[i].arr);
            printf("|  ");

            printf("%-10d", price[i]);
            printf("|");
            printf("\n");
         }
            
        }
      
   printf("---------------------------------------------------------------------------------------\n");
   printf("select count : %d\n",sqlca.sqlerrd[2]);
    }
    /* EXEC SQL CLOSE PCSALECURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )278;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}



void selectFoodSale(){
int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   int saleID[100];
    /* VARCHAR memberID[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID[100];

    /* VARCHAR name[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name[100];

    /* VARCHAR DATE[100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } DATE[100];

   /* VARCHAR productName[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } productName[100];

    int price[100];

    /* EXEC SQL DECLARE FOODCURSOR CURSOR FOR SELECT FOODSALE.SALEID, FOODSALE.MEMBERID, MEMBER.NAME, TO_CHAR(DATETIME, 'RRRR-MM-DD'), PRODUCTNAME, PRICE
    FROM FOODSALE, MEMBER
    WHERE FOODSALE.MEMBERID = MEMBER.MEMBERID; */ 

    
   /* EXEC SQL END DECLARE SECTION; */ 

    /* EXEC SQL OPEN FOODCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0009;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )293;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   printf("---------------------------------------------------------------------------------------\n");
   printf("|  no.  |       ID       |   name   |  purchase date  |   product name   | paid money |\n");
   printf("---------------------------------------------------------------------------------------\n");
   // <space> no. : 7 , ID : 16 , name : 10 , purchase date : 17 , product name : 18 paid money : 12

    while (end_flag) {
        /* EXEC SQL FETCH FOODCURSOR INTO:
        saleID, :memberID, :name, :DATE, :productName, :price; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )100;
        sqlstm.offset = (unsigned int  )308;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)saleID;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )sizeof(int);
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)memberID;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )52;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)name;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )52;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)DATE;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )24;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)productName;
        sqlstm.sqhstl[4] = (unsigned int  )52;
        sqlstm.sqhsts[4] = (         int  )52;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqharc[4] = (unsigned int   *)0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)price;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[5] = (         int  )sizeof(int);
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqharc[5] = (unsigned int   *)0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if (sqlca.sqlcode != 0) {
            if (sqlca.sqlcode == 1403) {
                end_flag = 0;
            } else {
                printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
            }
         count = sqlca.sqlerrd[2] - bfCount;
         bfCount = sqlca.sqlerrd[2];
         
         for( i = 0 ; i < count ; i++){
         printf("|  ");
         printf("%-5d", saleID[i]);
         printf("|  ");

            memberID[i].arr[memberID[i].len]='\0';
            printf("%-14s", memberID[i].arr);
         printf("|  ");
            
         name[i].arr[name[i].len]='\0';
            printf("%-8s", name[i].arr);
            printf("|  ");

         DATE[i].arr[DATE[i].len]='\0';
            printf("%-15s", DATE[i].arr);
            printf("|  ");

         productName[i].arr[productName[i].len]='\0';
            printf("%-16s", productName[i].arr);
            printf("|  ");

         printf("%-10d", price[i]);
         printf("|\n");
         }
            
        }
      printf("---------------------------------------------------------------------------------------\n");
      printf("select count : %d\n",sqlca.sqlerrd[2]);
    }
    /* EXEC SQL CLOSE FOODCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )347;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}


void selectMember() {
    int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* VARCHAR memberID[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID[100];

    /* VARCHAR name[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name[100];

    /* VARCHAR DATE[100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } DATE[100];

    int paidMoney[100];
    int leftMin[100];

    /* EXEC SQL DECLARE MEMBERCURSOR CURSOR FOR SELECT MEMBERID, NAME, TO_CHAR (BIRTHDAY, 'RRRR-MM-DD'),
    PAIDMONEY, LEFTMINT
    FROM MEMBER
	WHERE memberid !='NULL'; */ 


    /* EXEC SQL END DECLARE SECTION; */ 


    /* EXEC SQL OPEN MEMBERCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0010;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )362;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
	while (end_flag) {
        /* EXEC SQL FETCH MEMBERCURSOR INTO:
        memberID, :name, :DATE, :paidMoney, :leftMin; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )100;
        sqlstm.offset = (unsigned int  )377;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)memberID;
        sqlstm.sqhstl[0] = (unsigned int  )52;
        sqlstm.sqhsts[0] = (         int  )52;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)name;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )52;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)DATE;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )24;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)paidMoney;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[3] = (         int  )sizeof(int);
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)leftMin;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )sizeof(int);
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqharc[4] = (unsigned int   *)0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        
		if (sqlca.sqlcode != 0) {
			if (sqlca.sqlcode == 1403) {
				end_flag = 0;
			} else {
				printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
			}
			count = sqlca.sqlerrd[2] - bfCount;
			bfCount = sqlca.sqlerrd[2];
			printf("select count : %d\n",sqlca.sqlerrd[2]);

			printf("-----------------------------------------------------------------------------------------\n");
			printf("|  no.  |          ID          |   name   |   Birthday   |  paid money  |  left minute  |\n");
			printf("-----------------------------------------------------------------------------------------\n");
			// <space> no. : 7 , ID : 22 , name : 10 ,  password : 20 , birthday : 14 , paid money : 14 , left minute : 15

			 for( i = 0 ; i < count ; i++){
				printf("|  ");
				printf("%-5d", i+1);
				printf("|  ");

				memberID[i].arr[memberID[i].len]='\0';

				printf("%-20s", memberID[i].arr);
				printf("|  ");

				name[i].arr[name[i].len]='\0';

				printf("%-8s", name[i].arr);
				printf("|  ");

				DATE[i].arr[DATE[i].len]='\0';

				printf("%-12s", DATE[i].arr);
				printf("|  ");

				printf("%-12d", paidMoney[i]);
				printf("|  ");

				printf("%-13d", leftMin[i]); 
				printf("|  ");
				printf("\n");
			 }
        }
		printf("-----------------------------------------------------------------------------------------\n");
    }
    /* EXEC SQL CLOSE MEMBERCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )412;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void selectStock() {
    int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 


    /* VARCHAR productname[50][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } productname[50];

    int stock[50];
    int price[50];
    int purchaseprice[50];
    
    /* EXEC SQL DECLARE STOCKCURSOR CURSOR FOR SELECT productname, stock, price, purchaseprice
    FROM stock; */ 

    /* EXEC SQL END DECLARE SECTION; */ 

    /* EXEC SQL OPEN STOCKCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0011;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )427;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
	while (end_flag) {
        /* EXEC SQL FETCH STOCKCURSOR INTO
		:productname, :stock, :price, :purchaseprice; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )50;
        sqlstm.offset = (unsigned int  )442;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)productname;
        sqlstm.sqhstl[0] = (unsigned int  )52;
        sqlstm.sqhsts[0] = (         int  )52;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)stock;
        sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[1] = (         int  )sizeof(int);
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)price;
        sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[2] = (         int  )sizeof(int);
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)purchaseprice;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[3] = (         int  )sizeof(int);
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        
		if (sqlca.sqlcode != 0) {
        if (sqlca.sqlcode == 1403) {
            end_flag = 0;
        } else {
            printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
        }

        count = sqlca.sqlerrd[2] - bfCount;
        bfCount = sqlca.sqlerrd[2];
        printf("select count : %d\n",sqlca.sqlerrd[2]);

        printf("---------------------------------------------------------------------------------------\n");
		printf("|   no.   |     product name     |     stock     |    price    |    purchase price    |\n");
		printf("---------------------------------------------------------------------------------------\n");
		// <space> no. : 9 , product name : 22 , stock : 15 , price : 13 , purchase price : 22

         for( i = 0 ; i < count ; i++){
			printf("|");
			printf("%-9d", i+1);
			printf("|");

            productname[i].arr[productname[i].len]='\0';

            printf("%-22s", productname[i].arr);
			printf("|");


            printf("%-15d", stock[i]);
			printf("|");


            printf("%-13d", price[i]);
			printf("|");


            printf("%-22d", purchaseprice[i]);
			printf("|");
			printf("\n");
         }
            
        }
		printf("---------------------------------------------------------------------------------------\n");
    }
    /* EXEC SQL CLOSE MEMBERCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )473;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void selectSeat(){
    int i = 0;
	int j = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 


    int seatID[10];
    /* VARCHAR name[50][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name[50];

    /* VARCHAR gamename[50][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } gamename[50];

	
	/* EXEC SQL DECLARE SEATCURSOR CURSOR FOR SELECT seat.seatid, NVL(member.name, '이름 없음'), 
		CASE WHEN LENGTH(seat.gamename) BETWEEN 0 AND 3 THEN seat.gamename
			ELSE DECODE(seat.gamename, 'NULL', ' ', SUBSTR(seat.gamename, 1, 3)||'..')
      END "LOC"
    FROM seat, member
	WHERE seat.memberid = member.memberid; */ 

    /* EXEC SQL END DECLARE SECTION; */ 

    /* EXEC SQL OPEN SEATCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0012;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )488;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
	while (end_flag) {
        /* EXEC SQL FETCH SEATCURSOR INTO
		:seatID, :name, :gamename; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )10;
        sqlstm.offset = (unsigned int  )503;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)seatID;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )sizeof(int);
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)name;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )52;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)gamename;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )52;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        
		if (sqlca.sqlcode != 0) {
        if (sqlca.sqlcode == 1403) {
            end_flag = 0;
        } else {
            printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
        }

        count = sqlca.sqlerrd[2] - bfCount;
        bfCount = sqlca.sqlerrd[2];
        printf("select count : %d\n",sqlca.sqlerrd[2]);

        
		printf("-----------------------------------------------------------------\n");
		printf("|           ||           ||           ||           ||           |\n");
		// <space> no. : 5 , name : 8 , stock : 15 , price : 13 , purchase price : 22

         for( i = 0 ; i < count ; i++){
			
			printf("| %-10d|", i+1);

			if(i % 5 == 4){
				printf("\n");

				j = i-4;
				do{
					name[j].arr[name[j].len]='\0';
					printf("| %-10s|", name[j].arr);
					j++;
				} while(j % 5 != 0);
				
				printf("\n");
				
				j = i-4;
				do{
					gamename[j].arr[gamename[j].len]='\0';
					printf("| %-10s|", gamename[j].arr);
					j++;
				}while(j % 5 != 0);
				
				printf("\n");
				printf("|           ||           ||           ||           ||           |\n");
				printf("|           ||           ||           ||           ||           |\n");
				printf("-----------------------------------------------------------------\n");
				
				printf("\n\n\n\n");
				
				printf("-----------------------------------------------------------------\n");
				printf("|           ||           ||           ||           ||           |\n");
		
			}
         }  

        }
    }
	printf("|    고     ||     급    ||     P     ||     C     ||     방    |\n");
	printf("|           ||           ||           ||           ||           |\n");
	printf("-----------------------------------------------------------------\n");
    /* EXEC SQL CLOSE MEMBERCURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )530;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void selectSeatUser(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	int i_seatID;

	int seatID;
	/* VARCHAR seattype[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } seattype;

	/* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

	/* VARCHAR gamename[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } gamename;

	int leftmint;

	/* EXEC SQL END DECLARE SECTION; */ 


	printf("조회할 좌석 번호를 입력해주세요. : ");
	scanf("%d", &i_seatID);

	/* EXEC SQL SELECT seat.seatid, seatinfo.seattype, NVL(member.name, '이름 없음'), DECODE(seat.gamename, '카트라이더', '로스라이더', seat.gamename), member.leftmint
	INTO :seatID, :seattype, :name, :gamename, :leftmint
	FROM seat, seatinfo, member
	WHERE seat.memberid = member.memberid and seat.seattypeid = seatinfo.seattypeid and seat.seatID = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select seat.seatid ,seatinfo.seattype ,NVL(member.name,'이\
름 없음') ,DECODE(seat.gamename,'카트라이더','로스라이더',seat.gamename) ,mem\
ber.leftmint into :b0,:b1,:b2,:b3,:b4  from seat ,seatinfo ,member where ((se\
at.memberid=member.memberid and seat.seattypeid=seatinfo.seattypeid) and seat\
.seatID=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )545;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&seatID;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&seattype;
 sqlstm.sqhstl[1] = (unsigned int  )52;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&name;
 sqlstm.sqhstl[2] = (unsigned int  )52;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&gamename;
 sqlstm.sqhstl[3] = (unsigned int  )52;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&leftmint;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&i_seatID;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("해당 좌석이 존재하지 않습니다.\n");
			return;
		}
	}

	printf("\n");
	
	printf("좌석 번호 : %d\n", seatID);
	
	seattype.arr[seattype.len] = '\0';
	printf("좌석 유형 : %s\n", seattype.arr);
	
	name.arr[name.len] = '\0';
	printf("사용 회원 : %s\n", name.arr);
	if(strcmp(name.arr, "빈자리") == 0){
		printf("\n");
		return;
	}
	
	gamename.arr[gamename.len] = '\0';
	printf("실행 중인 게임 : %s\n", gamename.arr); 

	printf("남은 시간 : %d\n", leftmint); 

	printf("\n");
	getch();
}

void seatUserUpdate(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	int i_seatID;

	int seatID;
	/* VARCHAR seattype[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } seattype;

	/* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

	/* VARCHAR gamename[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } gamename;

	int leftmint;

	/* EXEC SQL END DECLARE SECTION; */ 


	printf("조회할 좌석 번호를 입력해주세요. : ");
	scanf("%d", &i_seatID);

	/* EXEC SQL SELECT seat.seatid, seatinfo.seattype, NVL(member.name, '이름 없음'), seat.gamename, member.leftmint
	INTO :seatID, :seattype, :name, :gamename, :leftmint
	FROM seat, seatinfo, member
	WHERE seat.memberid = member.memberid and seat.seattypeid = seatinfo.seattypeid and seat.seatID = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select seat.seatid ,seatinfo.seattype ,NVL(member.name,'이\
름 없음') ,seat.gamename ,member.leftmint into :b0,:b1,:b2,:b3,:b4  from seat\
 ,seatinfo ,member where ((seat.memberid=member.memberid and seat.seattypeid=\
seatinfo.seattypeid) and seat.seatID=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )584;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&seatID;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&seattype;
 sqlstm.sqhstl[1] = (unsigned int  )52;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&name;
 sqlstm.sqhstl[2] = (unsigned int  )52;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&gamename;
 sqlstm.sqhstl[3] = (unsigned int  )52;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&leftmint;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&i_seatID;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("해당 좌석이 존재하지 않습니다.\n");
			return;
		}
	}

	printf("\n");
	
	printf("좌석 번호 : %d\n", seatID);
	
	seattype.arr[seattype.len] = '\0';
	printf("좌석 유형 : %s\n", seattype.arr);
	
	name.arr[name.len] = '\0';
	printf("사용 회원 : %s\n", name.arr);
	if(strcmp(name.arr, "빈자리") == 0){
		printf("\n");
		return;
	}
	
	gamename.arr[gamename.len] = '\0';
	printf("실행 중인 게임 : %s\n", gamename.arr); 

	printf("남은 시간 : %d\n", leftmint); 

	printf("\n");
	getch();
}

void seatUserFinUpdate(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	int i_seatID;
	char flag[10];

	int seatID;
	/* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

	int leftmint;

	/* VARCHAR empty_memberID[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } empty_memberID;


	/* EXEC SQL END DECLARE SECTION; */ 


	printf("사용을 종료할 좌석 번호를 입력해주세요. : ");
	scanf("%d", &i_seatID);

	/* EXEC SQL SELECT seat.seatid, NVL(member.name, '이름 없음'), member.leftmint
	INTO :seatID, :name, :leftmint
	FROM seat, seatinfo, member
	WHERE seat.memberid = member.memberid and seat.seattypeid = seatinfo.seattypeid and seat.seatID = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select seat.seatid ,NVL(member.name,'이름 없음') ,member.le\
ftmint into :b0,:b1,:b2  from seat ,seatinfo ,member where ((seat.memberid=me\
mber.memberid and seat.seattypeid=seatinfo.seattypeid) and seat.seatID=:b3)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )623;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&seatID;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&name;
 sqlstm.sqhstl[1] = (unsigned int  )52;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&leftmint;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&i_seatID;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("해당 좌석이 존재하지 않습니다.\n");
			return;
		}
	}

	name.arr[name.len] = '\0';
	if(strcmp(name.arr, "빈자리") == 0){
		printf("해당 좌석은 비어있습니다.\n");
		return;
	}

	printf("\n");
	
	printf("좌석 번호 : %d\n", seatID);
	printf("사용 회원 : %s\n", name.arr);
	printf("남은 시간 : %d\n", leftmint); 
	
	printf("\n");

	printf("정말 종료하시겠습니까? (Y/N)\n");
	scanf("%s", flag);

	if(strcmp(flag, "Y")==0 || strcmp(flag, "y")==0){
	
		/* EXEC SQL SELECT memberid
		INTO :empty_memberID
		FROM member
		WHERE name ='빈자리'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select memberid into :b0  from member where name='빈자리'";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )654;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&empty_memberID;
  sqlstm.sqhstl[0] = (unsigned int  )52;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		/* EXEC SQL UPDATE seat
		SET memberid = :empty_memberID,
		gamename = null
		WHERE seatid = :i_seatID; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update seat  set memberid=:b0,gamename=null  where seatid=\
:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )673;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&empty_memberID;
  sqlstm.sqhstl[0] = (unsigned int  )52;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&i_seatID;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
		printf("성공적으로 사용 종료 하였습니다. \n");
   
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )696;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		

	}else if(strcmp(flag, "N")==0 || strcmp(flag, "n")==0){
	printf("취소합니다. \n");
		return;
	}
	getch();
}

void seatUserStartUpdate(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	int i_seatID;
	int memberid_state;

	char i_memberid[50];
	char i_password[50];
	/* VARCHAR memberid[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberid;

	/* VARCHAR password[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } password;


	int seatID;
	/* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

	int leftmint;

	/* EXEC SQL END DECLARE SECTION; */ 


	printf("사용할 좌석 번호를 입력해주세요. : ");
	scanf("%d", &i_seatID);

	/* EXEC SQL SELECT seat.seatid, DECODE(seat.memberid, 'NULL', 0, 1) 
	INTO :seatID, :memberid_state
	FROM seat
	WHERE seat.seatID = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select seat.seatid ,DECODE(seat.memberid,'NULL',0,1) into :\
b0,:b1  from seat where seat.seatID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )711;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&seatID;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&memberid_state;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&i_seatID;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("해당 좌석이 존재하지 않습니다.\n");
			getch();
			return;
		}
	}

	if(memberid_state == 1){
		printf("좌석이 이미 사용중입니다.\n");
		getch();
		return;
	}

	printf("회원 아이디를 입력해주세요. : ");
	scanf("%s", i_memberid);

	printf("비밀번호를 입력해주세요. : ");
	scanf("%s", i_password);
	
	/* EXEC SQL SELECT memberid, name, leftmint
	INTO :memberid, :name, :leftmint
	FROM member
	WHERE memberid =:i_memberid and password=:i_password; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select memberid ,name ,leftmint into :b0,:b1,:b2  from memb\
er where (memberid=:b3 and password=:b4)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )738;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&memberid;
 sqlstm.sqhstl[0] = (unsigned int  )52;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&name;
 sqlstm.sqhstl[1] = (unsigned int  )52;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&leftmint;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)i_memberid;
 sqlstm.sqhstl[3] = (unsigned int  )50;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)i_password;
 sqlstm.sqhstl[4] = (unsigned int  )50;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("계정 혹은 비밀번호가 잘못되었습니다.\n");
			getch();
			return;
		}
	}

	memberid.arr[memberid.len] = '\0';
	if(strcmp(memberid.arr, "NULL") == 0){
		printf("사용할 수 없는 계정입니다.");
		getch();
		return;
	}

	if(leftmint < 5){
		printf("충전된 시간이 부족합니다.\n");
		getch();
		return;
	}
	
	/* EXEC SQL UPDATE seat
		SET memberid = :memberid
		WHERE seatid = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update seat  set memberid=:b0 where seatid=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )773;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&memberid;
 sqlstm.sqhstl[0] = (unsigned int  )52;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&i_seatID;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )796;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	getch();
}

void seatUserGameUpdate(){

	int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
	int gamenum=0;

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	int i_seatID;
	int memberid_state;
	/* VARCHAR currentgame[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } currentgame;

	/* VARCHAR gamelist[50][100]; */ 
struct { unsigned short len; unsigned char arr[102]; } gamelist[50];

	char i_memberid[50];
	char i_password[50];
	/* VARCHAR memberid[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberid;

	/* VARCHAR password[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } password;

	char new_gamename[50]="";


	int seatID;
	/* VARCHAR name[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name;

	int leftmint;

	/* EXEC SQL DECLARE GAMECURSOR CURSOR FOR SELECT gamename
	FROM gameinfo; */ 

    /* EXEC SQL END DECLARE SECTION; */ 

    
	printf("게임 상태를 변경할 좌석 번호를 입력해주세요. : ");
	scanf("%d", &i_seatID);

	/* EXEC SQL SELECT seat.seatid, DECODE(seat.memberid, 'NULL', 0, 1), NVL(DECODE(seat.gamename, 'NULL', '없음', seat.gamename), '없음')
	INTO :seatID, :memberid_state, :currentgame
	FROM seat
	WHERE seat.seatID = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select seat.seatid ,DECODE(seat.memberid,'NULL',0,1) ,NVL(D\
ECODE(seat.gamename,'NULL','없음',seat.gamename),'없음') into :b0,:b1,:b2  fr\
om seat where seat.seatID=:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )811;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&seatID;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&memberid_state;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&currentgame;
 sqlstm.sqhstl[2] = (unsigned int  )52;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&i_seatID;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("해당 좌석이 존재하지 않습니다.\n");
			return;
		}
	}

	if(memberid_state == 0){
		printf("좌석이 비어있습니다.\n");
		return;
	}
	
	currentgame.arr[currentgame.len] = '\0';
	printf("현재 플레이 중인 게임 : %s\n\n", currentgame.arr);

	/* EXEC SQL OPEN GAMECURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0023;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )842;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   printf("-------------------------------------------------\n");
   printf("| no.   |               게임 목록               |\n");
   printf("-------------------------------------------------\n");
   // <space> 7 / 35
   
    while (end_flag) {
        /* EXEC SQL FETCH GAMECURSOR INTO :gamelist; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )50;
        sqlstm.offset = (unsigned int  )857;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)gamelist;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )104;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if (sqlca.sqlcode != 0) {
            if (sqlca.sqlcode == 1403) {
                end_flag = 0;
            } else {
                printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
            }
         count = sqlca.sqlerrd[2] - bfCount;
         bfCount = sqlca.sqlerrd[2];
         
         for( i = 0 ; i < count ; i++){
			printf("|  ");
			printf("%-5d", i+1);
			
			gamelist[i].arr[gamelist[i].len]='\0';
			printf("|  ");
			printf("%-33s", gamelist[i].arr);
			printf("|  ");

			printf("|\n");
         }
		printf("변경할 게임 번호를 선택해주세요. : ");
		scanf("%d", &gamenum);
		if(gamenum > count || gamenum < 0){
			printf("허용 값 범위를 초과하였습니다.\n");
			return;
		}
		strcpy(new_gamename, gamelist[gamenum-1].arr);
        }
    }
    /* EXEC SQL CLOSE GAMECURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )876;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
	
	/* EXEC SQL UPDATE seat
		SET gamename = :new_gamename
		WHERE seatid = :i_seatID; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update seat  set gamename=:b0 where seatid=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )891;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)new_gamename;
 sqlstm.sqhstl[0] = (unsigned int  )50;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&i_seatID;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )914;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
	if(sqlca.sqlcode == 1403){
		if(sqlca.sqlerrd[2] == 0){
			printf("\n");
			return;
		}
	}
	printf("정상적으로 수정되었습니다.\n\n");
	getch();
}


void insertStock(){
   /* EXEC SQL BEGIN DECLARE SECTION; */ 


   /* VARCHAR productName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } productName;

   int stock;
   int price;
   int purchasePrice;
   /* EXEC SQL END DECLARE SECTION; */ 

   
      printf("재고를 추가합니다. \n");

      printf("물품명 : ");
      scanf("%s", productName.arr);
      productName.len = strlen(productName.arr); 
      printf("재고수 : ");
     fflush(stdin);
     scanf("%d", &stock);
     printf("구매가격 : ");
     scanf("%d", &price);
     printf("판매가격 : ");
     scanf("%d", &purchasePrice);
      
      /* EXEC SQL INSERT INTO STOCK VALUES (:productName ,:stock ,:price ,:purchasePrice); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into STOCK  values (:b0,:b1,:b2,:b3)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )929;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&productName;
      sqlstm.sqhstl[0] = (unsigned int  )52;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&stock;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&purchasePrice;
      sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL COMMIT WORK; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )960;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      printf("%s를 추가하였습니다. \n\n", productName.arr);
   
   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )975;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   getch();
}

void updateStock(){
   int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR checkProductName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } checkProductName;

   int checkStock;
   int checkPrice;
   int checkPurchasePrice;
    /* EXEC SQL END DECLARE SECTION; */ 

    
   printf("업데이트 하고 싶은 상품의 상품명을 입력하세요. -1 입력시 기존 값 사용.\n");
   scanf("%s",checkProductName.arr);
   checkProductName.len = strlen(checkProductName.arr);
   
    /* EXEC SQL SELECT STOCK.STOCK, STOCK.PRICE, STOCK.PURCHASEPRICE INTO :checkStock, :checkPrice, :checkPurchasePrice 
   FROM STOCK 
   WHERE PRODUCTNAME = :checkProductName; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select STOCK.STOCK ,STOCK.PRICE ,STOCK.PURCHASEPRICE int\
o :b0,:b1,:b2  from STOCK where PRODUCTNAME=:b3";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )990;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&checkStock;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&checkPrice;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&checkPurchasePrice;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&checkProductName;
    sqlstm.sqhstl[3] = (unsigned int  )52;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("재고 기존값 : %d\n",checkStock);
   printf("재고 새 값 : ");
   int tempInput;
   scanf("%d",&tempInput);
   if(tempInput!=-1){
      checkStock=tempInput;
   }
   printf("상품 가격 기존값 : %d\n",checkPrice);
   printf("상품 가격 새 값 : ");
   scanf("%d",&tempInput);
   if(tempInput!=-1){
      checkPrice=tempInput;
   }
   printf("판매가 가격 기존값 : %d\n",checkPurchasePrice);
   printf("판매가 가격 새 값 : ");
   scanf("%d",&tempInput);
   if(tempInput!=-1){
      checkPurchasePrice = tempInput;
   }

   /* EXEC SQL UPDATE STOCK
     SET STOCK = :checkStock,
     PRICE = :checkPrice,
     PURCHASEPRICE = :checkPurchasePrice
     WHERE PRODUCTNAME = :checkProductName; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update STOCK  set STOCK=:b0,PRICE=:b1,PURCHASEPRICE=:b2 w\
here PRODUCTNAME=:b3";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1021;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&checkStock;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&checkPrice;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&checkPurchasePrice;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&checkProductName;
   sqlstm.sqhstl[3] = (unsigned int  )52;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
   printf("%s의 정보를 수정하였습니다.. \n", checkProductName.arr);
   
   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1052;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

  
   getch();
}

void deleteStock(){
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR productName[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } productName;

   /* EXEC SQL END DECLARE SECTION; */ 

   printf("삭제 하고 싶은 상품의 상품명을 입력하세요.");
   printf("상품명 : ");
   scanf("%s",productName.arr);
   productName.len = strlen(productName.arr);
   /* EXEC SQL DELETE STOCK WHERE PRODUCTNAME=:productName; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from STOCK  where PRODUCTNAME=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1067;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&productName;
   sqlstm.sqhstl[0] = (unsigned int  )102;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1086;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("%s의 상품을 삭제했습니다...\n",productName.arr);
   getch();
}

void selectSale(){
    int i = 0;
    int count = 0;
    int bfCount = 0;
    int end_flag = 1;
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   int saleID[100];
    /* VARCHAR memberID[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID[100];

    /* VARCHAR name[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } name[100];

    /* VARCHAR DATE[100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } DATE[100];

    /* VARCHAR productName[100][50]; */ 
struct { unsigned short len; unsigned char arr[50]; } productName[100];

    int price[100];
    /* EXEC SQL DECLARE SALECURSOR CURSOR FOR SELECT FOODSALE.SALEID, FOODSALE.MEMBERID, MEMBER.NAME, TO_CHAR(DATETIME, 'RRRR-MM-DD'), PRODUCTNAME, PRICE
FROM FOODSALE,
     MEMBER
WHERE FOODSALE.MEMBERID = MEMBER.MEMBERID
UNION
SELECT PCSALE.SALEID, PCSALE.MEMBERID, MEMBER.NAME, TO_CHAR(DATETIME, 'RRRR-MM-DD'), PCSALE.PRODUCTNAME, PRICE
FROM PCSALE,
     MEMBER
WHERE PCSALE.MEMBERID = MEMBER.MEMBERID; */ 

    /* EXEC SQL END DECLARE SECTION; */ 

    /* EXEC SQL OPEN SALECURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0035;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1101;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
   printf("---------------------------------------------------------------------------------------\n");
   printf("|  no.  |       ID       |   name   |  purchase date  |   product name   | paid money |\n");
   printf("---------------------------------------------------------------------------------------\n");
   // <space> no. : 7 , ID : 16 , name : 10 , purchase date : 17 , product name : 18 paid money : 12
    while (end_flag) {
        /* EXEC SQL FETCH SALECURSOR INTO:
        saleID, :memberID, :name, :DATE, :productName, :price; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )100;
        sqlstm.offset = (unsigned int  )1116;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)saleID;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )sizeof(int);
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)memberID;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )52;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)name;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )52;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)DATE;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )24;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)productName;
        sqlstm.sqhstl[4] = (unsigned int  )52;
        sqlstm.sqhsts[4] = (         int  )52;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqharc[4] = (unsigned int   *)0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)price;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[5] = (         int  )sizeof(int);
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqharc[5] = (unsigned int   *)0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if (sqlca.sqlcode != 0) {
            if (sqlca.sqlcode == 1403) {
                end_flag = 0;
            } else {
                //printf("ERROR : %s\n", sqlca.sqlerrm.sqlerrmc);
            }
         count = sqlca.sqlerrd[2] - bfCount;
         bfCount = sqlca.sqlerrd[2];
       
         for( i = 0 ; i < count ; i++){
            printf("|  ");
            printf("%-5d", saleID[i]);
            printf("|  ");
            memberID[i].arr[memberID[i].len]='\0';
            printf("%-14s", memberID[i].arr);
            printf("|  ");
            name[i].arr[name[i].len]='\0';
            printf("%-8s", name[i].arr);
            printf("|  ");
            DATE[i].arr[DATE[i].len]='\0';
            printf("%-15s", DATE[i].arr);
            printf("|  ");
         productName[i].arr[productName[i].len]='\0';
            printf("%-16s", productName[i].arr);
            printf("|  ");
            printf("%-10d", price[i]);
            printf("|");
            printf("\n");
         }
            
        }
      
   printf("---------------------------------------------------------------------------------------\n");
   printf("select count : %d\n",sqlca.sqlerrd[2]);
    }
    /* EXEC SQL CLOSE SALECURSOR; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1155;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	getch();
}

void PCInsert(){
   printf("-----------------------가격표------------------\n");
   printf("| 상품번호  |     금액     |      시간(min)   |\n");
   printf("-----------------------------------------------\n");
   printf("|     1     |     1000     |       60분       |\n");
   printf("|     2     |     2000     |       120분      |\n");
   printf("|     3     |     5000     |       330분      |\n");
   printf("|     4     |     10000    |       660분      |\n");
   printf("-----------------------------------------------\n");
   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   
  int saleID;
   char memberID[50];
    char productName[100];
    int price;
   int paidmoney;
   int leftmint;
   /* EXEC SQL END DECLARE SECTION; */ 

   
   printf("회원 ID를 입력해주세요. : ");
   scanf("%s", memberID);
   
   /* EXEC SQL SELECT PAIDMONEY, LEFTMINT 
   INTO :paidmoney, :leftmint
   FROM MEMBER
   WHERE MEMBERID IN (SELECT memberid FROM member WHERE memberid = :memberID); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select PAIDMONEY ,LEFTMINT into :b0,:b1  from MEMBER wher\
e MEMBERID in (select memberid  from member where memberid=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1170;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&paidmoney;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&leftmint;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)memberID;
   sqlstm.sqhstl[2] = (unsigned int  )50;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
   if(sqlca.sqlcode == 1403){
      if(sqlca.sqlerrd[2] == 0){
         printf("해당 회원이 존재하지 않습니다.\n");
         return;
      }
   }
      printf("원하는 상품번호를 입력해주세요. \n");
     int choice=0;
     scanf("%d",&choice);
     switch(choice){
      case 1: 
      strcpy(productName,"60분");
      price = 1000;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 1); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1197;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO PCSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,:b0\
,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1212;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+price,
      leftmint =leftmint+ 60
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+price),leftmin\
t=(leftmint+60) where memberid=:b0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1239;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
	     case 2:
      strcpy(productName,"120분");
      price = 2000;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 1); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1258;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO PCSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,:b0\
,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1273;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price,
      leftmint =leftmint+ 120
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0),leftmint=\
(leftmint+120) where memberid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1300;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
   case 3:
      strcpy(productName,"330분");
      price = 5000;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 1); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1323;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO PCSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,:b0\
,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1338;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price,
      leftmint =leftmint+ 330
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0),leftmint=\
(leftmint+330) where memberid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1365;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
   case 4:
      strcpy(productName,"660분");
      price = 10000;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 1); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1388;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO PCSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,:b0\
,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1403;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price,
      leftmint =leftmint+ 660
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0),leftmint=\
(leftmint+660) where memberid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1430;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
   default: 
   printf("잘못입력하셨습니다");

     }
     
      /* EXEC SQL COMMIT WORK; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1453;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      printf("PC매출 삽입 완료");
   
   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1468;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   getch();
}

void PCDelete(){
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   int saleID;
   /* VARCHAR memberID[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID;

   int price;
   int time;
   /* EXEC SQL END DECLARE SECTION; */ 

   printf("환불할 주문번호를 입력해주세요 : ");
   scanf("%d", &saleID);

   
   /* EXEC SQL SELECT MEMBERID,PRICE
   INTO :memberID,:price
   FROM PCSALE
   WHERE SALEID IN (SELECT SALEID FROM PCSALE WHERE saleid = :saleID); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select MEMBERID ,PRICE into :b0,:b1  from PCSALE where SA\
LEID in (select SALEID  from PCSALE where saleid=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1483;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&memberID;
   sqlstm.sqhstl[0] = (unsigned int  )52;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&price;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&saleID;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   if (price==1000)
   time = 60;
   else if (price==2000)
   time = 120;
   else if (price==5000)
   time = 330;
   else if (price==10000)
   time = 660;
   /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney-:price,
     leftmint = leftmint-:time
      WHERE memberid = :memberID; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update member  set paidmoney=(paidmoney-:b0),leftmint=(le\
ftmint-:b1) where memberid=:b2";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1510;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&price;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&time;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&memberID;
   sqlstm.sqhstl[2] = (unsigned int  )52;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL DELETE FROM pcsale WHERE
   saleid = :saleID; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from pcsale  where saleid=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1537;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&saleID;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1556;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("삭제하였습니다. \n");
}

void FoodInsert(){
   printf("-----------------------가격표------------------\n");
   printf("| 상품번호  |     금액     |       상품명     |\n");
   printf("-----------------------------------------------\n");
   printf("|     1     |     1400     |    신라면 블랙   |\n");
   printf("|     2     |     2500     |       블랑       |\n");
   printf("|     3     |     1500     |     프링글스     |\n");
   printf("|     4     |     1200     |      새우탕      |\n");
   printf("|     5     |     5000     |      호가든      |\n");
   printf("-----------------------------------------------\n");
   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   
  int saleID;
   char memberID[50];
    char productName[100];
    int price;
   int paidmoney;
   /* EXEC SQL END DECLARE SECTION; */ 

   
   printf("회원 ID를 입력해주세요. : ");
   scanf("%s", memberID);
   
   if(sqlca.sqlcode == 1403){
      if(sqlca.sqlerrd[2] == 0){
         printf("해당 회원이 존재하지 않습니다.\n");
         return;
      }
   }
      /* EXEC SQL SELECT PAIDMONEY
   INTO :paidmoney
   FROM MEMBER
   WHERE MEMBERID IN (SELECT memberid FROM member WHERE memberid = :memberID); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select PAIDMONEY into :b0  from MEMBER where MEMBERID \
in (select memberid  from member where memberid=:b1)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1571;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&paidmoney;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



      printf("원하는 상품번호를 입력해주세요. \n");
     int choice=0;
     scanf("%d",&choice);
     switch(choice){
      case 1: 
      strcpy(productName,"신라면블랙");
      price = 1400;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1594;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,:\
b0,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1609;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0) where mem\
berid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1636;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE stock
      SET stock =stock-1
      WHERE productname = :productName; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update stock  set stock=(stock-1) where productname=:b\
0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1659;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)productName;
      sqlstm.sqhstl[0] = (unsigned int  )100;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
      case 2: 
      strcpy(productName,"블랑");
      price = 2500;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1678;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,:\
b0,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1693;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0) where mem\
berid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1720;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     
      /* EXEC SQL UPDATE stock
      SET stock =stock-1
      WHERE productname = :productName; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update stock  set stock=(stock-1) where productname=:b\
0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1743;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)productName;
      sqlstm.sqhstl[0] = (unsigned int  )100;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
      case 3: 
      strcpy(productName,"프링글스");
      price = 1500;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1762;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,:\
b0,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1777;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0) where mem\
berid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1804;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL UPDATE stock
      SET stock =stock-1
      WHERE productname = :productName; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update stock  set stock=(stock-1) where productname=:b\
0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1827;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)productName;
      sqlstm.sqhstl[0] = (unsigned int  )100;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
      case 4: 
      strcpy(productName,"새우탕");
      price = 1200;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1846;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,:\
b0,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1861;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+:price
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+:b0) where mem\
berid=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1888;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&price;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)memberID;
      sqlstm.sqhstl[1] = (unsigned int  )50;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL UPDATE stock
      SET stock =stock-1
      WHERE productname = :productName; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update stock  set stock=(stock-1) where productname=:b\
0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1911;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)productName;
      sqlstm.sqhstl[0] = (unsigned int  )100;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
      case 5: 
      strcpy(productName,"호가든");
      price = 5000;
      /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1930;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval ,:memberID , SYSDATE,:productName, :price); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,:\
b0,SYSDATE,:b1,:b2)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1945;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)productName;
      sqlstm.sqhstl[1] = (unsigned int  )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
      /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney+5000
      WHERE memberid = :memberID; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update member  set paidmoney=(paidmoney+5000) where me\
mberid=:b0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1972;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)memberID;
      sqlstm.sqhstl[0] = (unsigned int  )50;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      /* EXEC SQL UPDATE stock
      SET stock =stock-1
      WHERE productname = :productName; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update stock  set stock=(stock-1) where productname=:b\
0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1991;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)productName;
      sqlstm.sqhstl[0] = (unsigned int  )100;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      break;
     default:
     printf("없는 번호입니다");
     }
     
      
      /* EXEC SQL COMMIT WORK; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )2010;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      printf("FOOD매출 삽입 완료");
   
   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2025;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   
}


void FoodDelete(){
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   int saleID;
   /* VARCHAR productName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } productName;

   /* VARCHAR memberID[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } memberID;

   int price;

   /* EXEC SQL END DECLARE SECTION; */ 

   printf("환불할 주문번호를 입력해주세요 : ");
   scanf("%d", &saleID);

      /* EXEC SQL SELECT PRODUCTNAME, MEMBERID, PRICE
   INTO :productName, :memberID, :price
   FROM FOODSALE
   WHERE SALEID IN (SELECT SALEID FROM FOODSALE WHERE saleid = :saleID); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select PRODUCTNAME ,MEMBERID ,PRICE into :b0,:b1,:b2  \
from FOODSALE where SALEID in (select SALEID  from FOODSALE where saleid=:b3)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )2040;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&productName;
      sqlstm.sqhstl[0] = (unsigned int  )52;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&memberID;
      sqlstm.sqhstl[1] = (unsigned int  )52;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&price;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&saleID;
      sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   memberID.arr[memberID.len]='\0';
   productName.arr[productName.len]='\0';

   /* EXEC SQL UPDATE member
      SET paidmoney = paidmoney-:price
      WHERE memberid = :memberID; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update member  set paidmoney=(paidmoney-:b0) where member\
id=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2071;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&price;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&memberID;
   sqlstm.sqhstl[1] = (unsigned int  )52;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2094;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
   /* EXEC SQL UPDATE stock
   SET stock =stock+1
   WHERE productname = :productName; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update stock  set stock=(stock+1) where productname=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2109;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&productName;
   sqlstm.sqhstl[0] = (unsigned int  )52;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2128;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL DELETE FROM foodsale WHERE
   saleid = :saleID; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from foodsale  where saleid=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2143;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&saleID;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2162;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("삭제하였습니다. \n");
   getch();
}

void init(){
   /* EXEC SQL DROP TABLE GAMEDATA; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE GAMEDATA";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2177;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE GAMEINFO; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE GAMEINFO";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2192;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE COMPUTERINFO; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE COMPUTERINFO";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2207;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE PCSALE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE PCSALE";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2222;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE FOODSALE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE FOODSALE";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2237;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE SALE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE SALE";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2252;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE STOCK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE STOCK";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2267;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE SEAT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE SEAT";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2282;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE SEATINFO; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE SEATINFO";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2297;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE CHARGEINFO; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE CHARGEINFO";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2312;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE BLACKLIST; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE BLACKLIST";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2327;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP TABLE MEMBER; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop TABLE MEMBER";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2342;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("삭제되었습니다\n");
   /* EXEC SQL CREATE TABLE MEMBER
   (
      MEMBERID  VARCHAR2(50) PRIMARY KEY,
      NAME      VARCHAR2(50)      NOT NULL,
      PASSWORD  VARCHAR2(50)      NOT NULL,
      BIRTHDAY  DATE              NOT NULL,
      PAIDMONEY INTEGER DEFAULT 0 NOT NULL,
      LEFTMINT  INTEGER DEFAULT 0 NOT NULL
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE MEMBER ( MEMBERID VARCHAR2 ( 50 ) PRIMARY KE\
Y , NAME VARCHAR2 ( 50 ) NOT NULL , PASSWORD VARCHAR2 ( 50 ) NOT NULL , BIRTH\
DAY DATE NOT NULL , PAIDMONEY INTEGER DEFAULT 0 NOT NULL , LEFTMINT INTEGER D\
EFAULT 0 NOT NULL )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2357;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE BLACKLIST
   (
      MEMBERID VARCHAR2(50) PRIMARY KEY,
      NAME     VARCHAR2(50) NOT NULL,
      REASON   VARCHAR2(50) NOT NULL,
      FOREIGN KEY (MEMBERID) REFERENCES MEMBER
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE BLACKLIST ( MEMBERID VARCHAR2 ( 50 ) PRIMARY\
 KEY , NAME VARCHAR2 ( 50 ) NOT NULL , REASON VARCHAR2 ( 50 ) NOT NULL , FORE\
IGN KEY ( MEMBERID ) REFERENCES MEMBER )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2372;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE CHARGEINFO
   (
      TIMEPAY    INTEGER PRIMARY KEY,
      MEMBERC    INTEGER NOT NULL,
      NONMEMBERC INTEGER NOT NULL
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE CHARGEINFO ( TIMEPAY INTEGER PRIMARY KEY , M\
EMBERC INTEGER NOT NULL , NONMEMBERC INTEGER NOT NULL )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2387;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE SEATINFO
   (
      SEATTYPEID INTEGER PRIMARY KEY,
      SEATTYPE   VARCHAR2(20) NOT NULL,
      RATE       INTEGER      NOT NULL
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE SEATINFO ( SEATTYPEID INTEGER PRIMARY KEY , \
SEATTYPE VARCHAR2 ( 20 ) NOT NULL , RATE INTEGER NOT NULL )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2402;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE SEAT
   (
      SEATID     INTEGER PRIMARY KEY,
      SEATTYPEID INTEGER NOT NULL,
      MEMBERID   VARCHAR2(50),
      GAMENAME   VARCHAR2(50),
      FOREIGN KEY (MEMBERID) REFERENCES MEMBER,
      FOREIGN KEY (SEATTYPEID) REFERENCES SEATINFO
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE SEAT ( SEATID INTEGER PRIMARY KEY , SEATTYPE\
ID INTEGER NOT NULL , MEMBERID VARCHAR2 ( 50 ) , GAMENAME VARCHAR2 ( 50 ) , F\
OREIGN KEY ( MEMBERID ) REFERENCES MEMBER , FOREIGN KEY ( SEATTYPEID ) REFERE\
NCES SEATINFO )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2417;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE STOCK
   (
      PRODUCTNAME   VARCHAR2(50) PRIMARY KEY,
      STOCK         INTEGER DEFAULT 0 NOT NULL,
      PRICE         INTEGER DEFAULT 0 NOT NULL,
      PURCHASEPRICE INTEGER DEFAULT 0 NOT NULL
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE STOCK ( PRODUCTNAME VARCHAR2 ( 50 ) PRIMARY \
KEY , STOCK INTEGER DEFAULT 0 NOT NULL , PRICE INTEGER DEFAULT 0 NOT NULL , P\
URCHASEPRICE INTEGER DEFAULT 0 NOT NULL )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2432;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE SALE
   (
      SALEID   INTEGER PRIMARY KEY,
      SALETYPE INTEGER NOT NULL
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE SALE ( SALEID INTEGER PRIMARY KEY , SALETYPE\
 INTEGER NOT NULL )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2447;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE FOODSALE
   (
      SALEID      INTEGER PRIMARY KEY,
      MEMBERID    VARCHAR2(50)            NOT NULL,
      DATETIME    DATE    DEFAULT SYSDATE NOT NULL,
      PRODUCTNAME VARCHAR2(50)            NOT NULL,
      PRICE       INTEGER DEFAULT 0       NOT NULL,
      FOREIGN KEY (SALEID) REFERENCES SALE,
      FOREIGN KEY (MEMBERID) REFERENCES MEMBER,
      FOREIGN KEY (PRODUCTNAME) REFERENCES STOCK
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE FOODSALE ( SALEID INTEGER PRIMARY KEY , MEMB\
ERID VARCHAR2 ( 50 ) NOT NULL , DATETIME DATE DEFAULT SYSDATE NOT NULL , PROD\
UCTNAME VARCHAR2 ( 50 ) NOT NULL , PRICE INTEGER DEFAULT 0 NOT NULL , FOREIGN\
 KEY ( SALEID ) REFERENCES SALE , FOREIGN KEY ( MEMBERID ) REFERENCES MEMBER \
, FOREIGN KEY ( PRODUCTNAME ) REFERENCES STOCK )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2462;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("푸드생성\n");
   /* EXEC SQL CREATE TABLE PCSALE
   (
      SALEID   INTEGER PRIMARY KEY,
      MEMBERID VARCHAR2(50)            NOT NULL,
      DATETIME DATE    DEFAULT SYSDATE NOT NULL,
     PRODUCTNAME VARCHAR2(50)         NOT NULL,
      PRICE    INTEGER DEFAULT 0       NOT NULL,
      FOREIGN KEY (SALEID) REFERENCES SALE,
      FOREIGN KEY (MEMBERID) REFERENCES MEMBER
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE PCSALE ( SALEID INTEGER PRIMARY KEY , MEMBER\
ID VARCHAR2 ( 50 ) NOT NULL , DATETIME DATE DEFAULT SYSDATE NOT NULL , PRODUC\
TNAME VARCHAR2 ( 50 ) NOT NULL , PRICE INTEGER DEFAULT 0 NOT NULL , FOREIGN K\
EY ( SALEID ) REFERENCES SALE , FOREIGN KEY ( MEMBERID ) REFERENCES MEMBER )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2477;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE COMPUTERINFO
   (
      SEATID       INTEGER PRIMARY KEY,
      CPUINFO      VARCHAR2(100) DEFAULT 'AMD 라이젠9 3900X (마티스)'                                          NOT NULL,
      RAMINFO      VARCHAR2(100) DEFAULT 'CORSAIRDDR4 32G PC 4-25600 CL16 VENGEANCE PRO RGB BLACK(8GX4)' NOT NULL,
      GRAPHICINFO  VARCHAR2(100) DEFAULT 'ZOTAC GAMING 지포스RTX 2080 SUPERAMPCORE RGB D6 8GB'              NOT NULL,
      MONITORINFO  VARCHAR2(100) DEFAULT 'MSI 옵틱스AG 32C 커브드 게이밍144 무결점'                                  NOT NULL,
      SSDINFO      VARCHAR2(100) DEFAULT '삼성전자970 EVO PlusM 2 2280(1TB)'                                 NOT NULL,
      MAINBOARD    VARCHAR2(100) DEFAULT 'GIGABYTEX570 AORUSMASTER 피씨디렉트'                                NOT NULL,
      CASEINFO     VARCHAR2(100) DEFAULT '리안리PC-O11 Dynamic(WHITE)'                                      NOT NULL,
      KEYBOARDINFO VARCHAR2(100) DEFAULT 'Wooting one(청축)'                                               NOT NULL,
      MOUSEINFO    VARCHAR2(100) DEFAULT '로지텍G PRO WIRELESS(정품)'                                         NOT NULL,
      SPEAKERINFO  VARCHAR2(100) DEFAULT 'Britz 브리츠 인터내셔널BR-1700BT'                                      NOT NULL,
      POWERINFO    VARCHAR2(100) DEFAULT 'EnermaxREVOLUTIOND.F.ERF650AWT 80Plus GoldFull Modular'        NOT NULL,
      COOLERINFO   VARCHAR2(100) DEFAULT 'EVGACLC280 Liquid'                                             NOT NULL,
      OSINFO       VARCHAR2(100) DEFAULT 'Microsoft Window 10 Pro(처음사용자용 한글)'                            NOT NULL,
      HEADSETINFO  VARCHAR2(100) DEFAULT 'CORSAIRVOID PRO RGB WIRELESS(정품)'                              NOT NULL,
      FOREIGN KEY (SEATID) REFERENCES SEAT
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlbuft((void **)0,
     "create TABLE COMPUTERINFO ( SEATID INTEGER PRIMARY KEY , CPUINFO VARCH\
AR2 ( 100 ) DEFAULT 'AMD 라이젠9 3900X (마티스)' NOT NULL , RAMINFO VARCHAR2\
 ( 100 ) DEFAULT 'CORSAIRDDR4 32G PC 4-25600 CL16 VENGEANCE PRO RGB BLACK(8G\
X4)' NOT NULL , GRAPHICINFO VARCHAR2 ( 100 ) DEFAULT 'ZOTAC GAMING 지포스RTX\
 2080 SUPERAMPCORE RGB D6 8GB' NOT NULL , MONITORINFO VARCHAR2 ( 100 ) DEFAU\
LT 'MSI 옵틱스AG 32C 커브드 게이밍144 무결점' NOT NULL , SSDINFO VARCHAR2 ( \
100 ) DEFAULT '삼성전자970 EVO PlusM 2 2280(1TB)' NOT NULL , MAINBOARD VARCH\
AR2 ( 100 ) DEFAULT 'GIGABYTEX570 AORUSMASTER 피씨디렉트' NOT NULL , CASEINF\
O VARCHAR2 ( 100 ) DEFAULT '리안리PC-O11 Dynamic(WHITE)' NOT NULL , KEYBOARD\
INFO VARCHAR2 ( 100 ) DEFAULT 'Wooting one(청축)' NOT NULL , MOUSEINFO VARCH\
AR2 ( 100 ) DEFAULT '로지텍G PRO WIRELESS(정품)' NOT NULL , SPEAKERINFO VARC\
HAR2 ( 100 ) DEFAULT 'Britz 브리츠 인터내셔널BR-1700BT' NOT NULL , POWERINFO\
 VARCHAR2 ( 100 ) DEFAULT 'EnermaxREVOLUTIOND.F.ERF650AWT 80Plus GoldFull Mo\
dular' NOT NULL , COOLERINFO VARCHAR2 ( 10");
   sqlstm.stmt = "0 ) DEFAULT 'EVGACLC280 Liquid' NOT NULL , OSINFO VARCHAR\
2 ( 100 ) DEFAULT 'Microsoft Window 10 Pro(처음사용자용 한글)' NOT NULL , HEA\
DSETINFO VARCHAR2 ( 100 ) DEFAULT 'CORSAIRVOID PRO RGB WIRELESS(정품)' NOT NU\
LL , FOREIGN KEY ( SEATID ) REFERENCES SEAT )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2492;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE GAMEINFO
   (
      GAMENAME    VARCHAR2(50) PRIMARY KEY NOT NULL,
      GAMECOMPANY VARCHAR2(50)             NOT NULL
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE GAMEINFO ( GAMENAME VARCHAR2 ( 50 ) PRIMARY \
KEY NOT NULL , GAMECOMPANY VARCHAR2 ( 50 ) NOT NULL )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2507;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE TABLE GAMEDATA
   (
      MEMBERID  VARCHAR2(50) PRIMARY KEY NOT NULL,
      DATETIME  DATE                     NOT NULL,
      GAMENAME  VARCHAR2(50)             NOT NULL,
      STARTTIME DATE,
      ENDTIME   DATE,
      FOREIGN KEY (MEMBERID) REFERENCES MEMBER (MEMBERID),
      FOREIGN KEY (GAMENAME) REFERENCES GAMEINFO (GAMENAME)
   ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create TABLE GAMEDATA ( MEMBERID VARCHAR2 ( 50 ) PRIMARY \
KEY NOT NULL , DATETIME DATE NOT NULL , GAMENAME VARCHAR2 ( 50 ) NOT NULL , S\
TARTTIME DATE , ENDTIME DATE , FOREIGN KEY ( MEMBERID ) REFERENCES MEMBER ( M\
EMBERID ) , FOREIGN KEY ( GAMENAME ) REFERENCES GAMEINFO ( GAMENAME ) )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2522;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY, PAIDMONEY, LEFTMINT)
    VALUES ('ksk1234', '김성각', '12345', TO_DATE('1968-08-27','RRRR-MM-DD'), 20000, 120); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY,PAIDM\
ONEY,LEFTMINT) values ('ksk1234','김성각','12345',TO_DATE('1968-08-27','RRRR-\
MM-DD'),20000,120)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2537;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY, PAIDMONEY, LEFTMINT)
    VALUES ('nyw1234', '남영우', '911', TO_DATE('1995-12-20', 'RRRR-MM-DD'), 150000, 180); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY,PAIDM\
ONEY,LEFTMINT) values ('nyw1234','남영우','911',TO_DATE('1995-12-20','RRRR-MM\
-DD'),150000,180)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2552;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY, PAIDMONEY, LEFTMINT)
    VALUES ('khj1234', '김희정', '916', TO_DATE('1999-01-21', 'RRRR-MM-DD'), 150000, 240); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY,PAIDM\
ONEY,LEFTMINT) values ('khj1234','김희정','916',TO_DATE('1999-01-21','RRRR-MM\
-DD'),150000,240)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2567;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY, PAIDMONEY, LEFTMINT)
    VALUES ('khj12345', '김현직', '123456', TO_DATE('1996-09-09', 'RRRR-MM-DD'), 150000, 180); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY,PAIDM\
ONEY,LEFTMINT) values ('khj12345','김현직','123456',TO_DATE('1996-09-09','RRR\
R-MM-DD'),150000,180)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2582;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY) VALUES ('NULL', '빈자리', 'NULL', TO_DATE('2019-11-24','RRRR-MM-DD')); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY) valu\
es ('NULL','빈자리','NULL',TO_DATE('2019-11-24','RRRR-MM-DD'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2597;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY, PAIDMONEY, LEFTMINT)
    VALUES ('lds1234', '이동석', '920', TO_DATE('1234-12-23', 'RRRR-MM-DD'), 0, 0); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY,PAIDM\
ONEY,LEFTMINT) values ('lds1234','이동석','920',TO_DATE('1234-12-23','RRRR-MM\
-DD'),0,0)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2612;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(memberid, name, password, birthday, paidmoney, LEFTMINT)
   VALUES ('ljm123', '이재민', '709', TO_DATE('1234-12-12', 'RRRR-MM-DD'), 10000, 60); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (memberid,name,password,birthday,paidm\
oney,LEFTMINT) values ('ljm123','이재민','709',TO_DATE('1234-12-12','RRRR-MM-\
DD'),10000,60)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2627;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL UPDATE SEAT SET MEMBERID = 'ljm123' where seatid = 9; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update SEAT  set MEMBERID='ljm123' where seatid=9";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2642;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO BLACKLIST(MEMBERID, NAME, REASON)
    VALUES ('ksk1234', '김성각', '본체 발로 차서 부숨'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into BLACKLIST (MEMBERID,NAME,REASON) values ('ksk\
1234','김성각','본체 발로 차서 부숨')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2657;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO MEMBER(MEMBERID, NAME, PASSWORD, BIRTHDAY, PAIDMONEY, LEFTMINT)
    VALUES ('eio1234', '야옹', '333', TO_DATE('2017-10-23', 'RRRR-MM-DD'), 0, 0); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into MEMBER (MEMBERID,NAME,PASSWORD,BIRTHDAY,PAIDM\
ONEY,LEFTMINT) values ('eio1234','야옹','333',TO_DATE('2017-10-23','RRRR-MM-D\
D'),0,0)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2672;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO CHARGEINFO(TIMEPAY, MEMBERC, NONMEMBERC)
    VALUES (1, 1500, 2000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into CHARGEINFO (TIMEPAY,MEMBERC,NONMEMBERC) value\
s (1,1500,2000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2687;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEATINFO(SEATTYPEID, SEATTYPE, RATE) VALUES (1, '고급', 1.5); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEATINFO (SEATTYPEID,SEATTYPE,RATE) values (1\
,'고급',1.5)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2702;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEATINFO(SEATTYPEID, SEATTYPE, RATE) VALUES (2, '일반', 1); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEATINFO (SEATTYPEID,SEATTYPE,RATE) values (2\
,'일반',1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2717;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (1, 1, 'nyw1234', '히어로즈 오브 더 스톰'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (1,1,'nyw1234','히어로즈 오브 더 스톰')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2732;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (2, 1, 'khj12345', '히어로즈 오브 더 스톰'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (2,1,'khj12345','히어로즈 오브 더 스톰')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2747;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (3, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (3,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2762;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (4, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (4,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2777;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (5, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (5,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2792;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (6, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (6,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2807;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (7, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (7,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2822;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (8, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (8,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2837;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (9, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (9,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2852;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SEAT(SEATID, SEATTYPEID, MEMBERID, GAMENAME)
    VALUES (10, 1, 'NULL', 'NULL'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SEAT (SEATID,SEATTYPEID,MEMBERID,GAMENAME) va\
lues (10,1,'NULL','NULL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2867;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO STOCK(PRODUCTNAME, STOCK, PRICE, PURCHASEPRICE)
    VALUES ('IntelRealSense', 100, 200000, 1000000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into STOCK (PRODUCTNAME,STOCK,PRICE,PURCHASEPRICE)\
 values ('IntelRealSense',100,200000,1000000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2882;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO STOCK(PRODUCTNAME, STOCK, PRICE, PURCHASEPRICE)
    VALUES ('신라면블랙', 904, 1400, 3000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into STOCK (PRODUCTNAME,STOCK,PRICE,PURCHASEPRICE)\
 values ('신라면블랙',904,1400,3000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2897;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO STOCK(PRODUCTNAME, STOCK, PRICE, PURCHASEPRICE)
    VALUES ('블랑', 10, 2500, 3000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into STOCK (PRODUCTNAME,STOCK,PRICE,PURCHASEPRICE)\
 values ('블랑',10,2500,3000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2912;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO STOCK(PRODUCTNAME, STOCK, PRICE, PURCHASEPRICE)
    VALUES ('새우탕', 30, 900, 1200); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into STOCK (PRODUCTNAME,STOCK,PRICE,PURCHASEPRICE)\
 values ('새우탕',30,900,1200)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2927;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO STOCK(PRODUCTNAME, STOCK, PRICE, PURCHASEPRICE)
    VALUES ('호가든', 42, 5000, 7000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into STOCK (PRODUCTNAME,STOCK,PRICE,PURCHASEPRICE)\
 values ('호가든',42,5000,7000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2942;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL INSERT INTO GAMEINFO(GAMENAME, GAMECOMPANY)
    VALUES ('히어로즈 오브 더 스톰', 'Blizzard'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into GAMEINFO (GAMENAME,GAMECOMPANY) values ('히어\
로즈 오브 더 스톰','Blizzard')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2957;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (1); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2972;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (2); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2987;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (3); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3002;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (4); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (4)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3017;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (5); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (5)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3032;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (6); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (6)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3047;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (7); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (7)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3062;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (8); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (8)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3077;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (9); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (9)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3092;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO COMPUTERINFO(SEATID)
    VALUES (10); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into COMPUTERINFO (SEATID) values (10)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3107;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
    /* EXEC SQL INSERT INTO gameinfo VALUES ('Java', 'Oracle'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into gameinfo  values ('Java','Oracle')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3122;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO gameinfo VALUES ('IntelliJ', 'jetbrains'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into gameinfo  values ('IntelliJ','jetbrains')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3137;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO gameinfo VALUES ('리그 오브 레전드', '라이엇 게임즈'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into gameinfo  values ('리그 오브 레전드','라이엇\
 게임즈')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3152;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO gameinfo VALUES ('카트라이더', 'nexon'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into gameinfo  values ('카트라이더','nexon')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3167;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO gameinfo VALUES ('배틀그라운드', 'PUBG Corporation'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into gameinfo  values ('배틀그라운드','PUBG Corpo\
ration')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3182;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO gameinfo VALUES ('오버워치', 'Blizzard'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into gameinfo  values ('오버워치','Blizzard')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3197;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO stock(productname, stock, price, purchaseprice) VALUES ('프링글스', 500, 1500, 5000); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into stock (productname,stock,price,purchaseprice\
) values ('프링글스',500,1500,5000)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3212;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO stock(productname, stock, price, purchaseprice) VALUES ('새우탕', 30, 900, 1200); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into stock (productname,stock,price,purchaseprice\
) values ('새우탕',30,900,1200)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3227;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DROP SEQUENCE SALE_SEQUENCE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "drop SEQUENCE SALE_SEQUENCE";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3242;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL CREATE SEQUENCE SALE_SEQUENCE START WITH 1 INCREMENT BY 1 MAXVALUE 1000000 CYCLE NOCACHE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "create SEQUENCE SALE_SEQUENCE START WITH 1 INCREMENT BY 1\
 MAXVALUE 1000000 CYCLE NOCACHE";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3257;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 /* SALE 용 */
    /* EXEC SQL INSERT INTO SALE
    VALUES (SALE_SEQUENCE.nextval, 1); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3272;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO PCSALE
   VALUES (SALE_SEQUENCE.currval, 'nyw1234', TO_DATE('2019-12-01', 'RRRR-MM-DD'),'1시간', 1000); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,'nyw1\
234',TO_DATE('2019-12-01','RRRR-MM-DD'),'1시간',1000)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3287;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO SALE
    VALUES (SALE_SEQUENCE.nextval, 1); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3302;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO PCSALE
    VALUES (SALE_SEQUENCE.currval, 'khj1234', TO_DATE('2019-12-01', 'RRRR-MM-DD'),'2시간', 2000); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,'khj1\
234',TO_DATE('2019-12-01','RRRR-MM-DD'),'2시간',2000)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3317;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO SALE
    VALUES (SALE_SEQUENCE.nextval, 1); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3332;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO PCSALE
    VALUES (SALE_SEQUENCE.currval, 'khj12345', TO_DATE('2019-12-01', 'RRRR-MM-DD'),'11시간', 10000); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,'khj1\
2345',TO_DATE('2019-12-01','RRRR-MM-DD'),'11시간',10000)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3347;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO SALE
    VALUES (SALE_SEQUENCE.nextval, 1); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3362;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL INSERT INTO PCSALE
    VALUES (SALE_SEQUENCE.currval, 'ksk1234', TO_DATE('2019-12-03', 'RRRR-MM-DD'),'24시간', 20000); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into PCSALE  values (SALE_SEQUENCE.currval ,'ksk1\
234',TO_DATE('2019-12-03','RRRR-MM-DD'),'24시간',20000)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3377;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3392;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval, 'lds1234', TO_DATE('2019-12-07','RRRR-MM-DD'), 'IntelRealSense', 1000000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,'lds\
1234',TO_DATE('2019-12-07','RRRR-MM-DD'),'IntelRealSense',1000000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3407;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3422;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval, 'lds1234', TO_DATE('2019-12-08','RRRR-MM-DD'), 'IntelRealSense', 1000000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,'lds\
1234',TO_DATE('2019-12-08','RRRR-MM-DD'),'IntelRealSense',1000000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3437;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO SALE VALUES(SALE_SEQUENCE.nextval, 2); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into SALE  values (SALE_SEQUENCE.nextval ,2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3452;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL INSERT INTO FOODSALE VALUES(SALE_SEQUENCE.currval, 'lds1234', TO_DATE('2019-12-08','RRRR-MM-DD'), '블랑', 1000000); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into FOODSALE  values (SALE_SEQUENCE.currval ,'lds\
1234',TO_DATE('2019-12-08','RRRR-MM-DD'),'블랑',1000000)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3467;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   //printf("\7Connect error: %s ", sqlca.sqlerrm.sqlerrmc);
   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3482;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

   
   printf("디비!! 초기화!!! 되었습니다!!\n\n");
}

void DB_connect() {
   strcpy((char *)uid.arr, "ZSTB1@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr, "34567812");
   pwd.len = (short) strlen((char *)pwd.arr);
   
   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )3497;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if(sqlca.sqlcode != 0 && sqlca.sqlcode != -1405) { //connect
      printf("\7Connect error: %s ", sqlca.sqlerrm.sqlerrmc);
      getch(); 
      exit(-1);
   }
   printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}

void sql_error(char *msg) {
   char err_msg[128];      size_t buf_len, msg_len;
   /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

   printf("\n%s\n",msg);      
   buf_len = sizeof(err_msg);
   sqlglm(err_msg, &buf_len, &msg_len);   
   printf("%.*s\n",msg_len,err_msg);
   getch();
   /* EXEC SQL ROLLBACK WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3528;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   exit(-1);
}
