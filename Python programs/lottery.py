{\rtf1\ansi\ansicpg1252\cocoartf1561\cocoasubrtf600
{\fonttbl\f0\fnil\fcharset0 Menlo-Italic;\f1\fswiss\fcharset0 Helvetica;\f2\fnil\fcharset0 Menlo-Bold;
\f3\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red83\green101\blue121;\red255\green255\blue255;\red155\green35\blue147;
\red0\green0\blue0;\red28\green0\blue207;\red196\green26\blue22;}
{\*\expandedcolortbl;;\csgenericrgb\c32401\c39745\c47507;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c60759\c13753\c57628;
\csgenericrgb\c0\c0\c0;\csgenericrgb\c11000\c0\c81000;\csgenericrgb\c77000\c10200\c8600;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab593
\pard\tx593\pardeftab593\pardirnatural\partightenfactor0

\f0\i\fs24 \cf2 \cb3 #Ali Eshghi  
\f1\i0 \cf0 \

\f0\i \cf2 #1112261
\f1\i0 \cf0 \

\f0\i \cf2 #Lottery program      
\f1\i0 \cf0 \
\
\

\f2\b \cf4 import
\f3\b0 \cf5  random
\f1 \cf0 \

\f0\i \cf2 #input
\f1\i0 \cf0 \

\f3 \cf5 lot_num=random.randint(\cf6 10\cf5 ,\cf6 99\cf5 )
\f1 \cf0 \

\f3 \cf5 pers_num=int(input(\cf7 "Enter a two-digit number between 10 - 99 : "\cf5 ))
\f1 \cf0 \

\f3 \cf5 awrd_1=\cf6 10000
\f1 \cf0 \

\f3 \cf5 awrd_2=\cf6 3000
\f1 \cf0 \

\f3 \cf5 awrd_3=\cf6 1000
\f1 \cf0 \
\

\f0\i \cf2 #calc and output
\f1\i0 \cf0 \

\f2\b \cf4 if
\f3\b0 \cf5  pers_num == lot_num:
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "You have won $"\cf5 ,awrd_1,sep=\cf6 ''\cf5 )
\f1 \cf0 \

\f2\b \cf4 elif
\f3\b0 \cf5  pers_num%\cf6 10\cf5  == lot_num//\cf6 10\cf5  
\f2\b \cf4 and
\f3\b0 \cf5  pers_num//\cf6 10\cf5  == lot_num%\cf6 10\cf5 :
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "You have won $"\cf5 ,awrd_2,sep=\cf6 ''\cf5 )
\f1 \cf0 \

\f2\b \cf4 elif
\f3\b0 \cf5  pers_num%\cf6 10\cf5  == lot_num%\cf6 10\cf5 :
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "You have won $"\cf5 ,awrd_3,sep=\cf6 ''\cf5 )
\f1 \cf0 \

\f2\b \cf4 elif
\f3\b0 \cf5  pers_num//\cf6 10\cf5  == lot_num//\cf6 10\cf5 :
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "You have won $"\cf5 ,awrd_3,sep=\cf6 ''\cf5 )
\f1 \cf0 \

\f2\b \cf4 elif
\f3\b0 \cf5  pers_num%\cf6 10\cf5  == lot_num//\cf6 10\cf5 :
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "You have won $"\cf5 ,awrd_3,sep=\cf6 ''\cf5 )
\f1 \cf0 \

\f2\b \cf4 elif
\f3\b0 \cf5  pers_num//\cf6 10\cf5  == lot_num%\cf6 10\cf5 :
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "You have won $"\cf5 ,awrd_3,sep=\cf6 ''\cf5 )
\f1 \cf0 \

\f2\b \cf4 else
\f3\b0 \cf5 :
\f1 \cf0 \

\f3 \cf5     
\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "it wasn't that loser,"\cf5 )
\f1 \cf0 \

\f2\b \cf4 print
\f3\b0 \cf5 (\cf7 "The lucky number was : "\cf5 ,lot_num)
\f1 \cf0 \
\

\f0\i \cf2 ##========== RESTART: /Users/alieshghi/Desktop/homework2/lottary 2.py ==========
\f1\i0 \cf0 \

\f0\i \cf2 ##Enter a two-digit number between 10 - 99 : 56
\f1\i0 \cf0 \

\f0\i \cf2 ##You have won $3000
\f1\i0 \cf0 \

\f0\i \cf2 ##The lucky number was :  65
\f1\i0 \cf0 \

\f0\i \cf2 ##>>> 
\f1\i0 \cf0 \
\

\f0\i \cf2 ##========== RESTART: /Users/alieshghi/Desktop/homework2/lottary 2.py ==========
\f1\i0 \cf0 \

\f0\i \cf2 ##Enter a two-digit number between 10 - 99 : 33
\f1\i0 \cf0 \

\f0\i \cf2 ##it wasn't that loser,
\f1\i0 \cf0 \

\f0\i \cf2 ##The lucky number was :  10
\f1\i0 \cf0 \

\f0\i \cf2 ##>>> 
\f1\i0 \cf0 \
}