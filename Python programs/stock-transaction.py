{\rtf1\ansi\ansicpg1252\cocoartf1561\cocoasubrtf600
{\fonttbl\f0\fnil\fcharset0 Menlo-Italic;\f1\fswiss\fcharset0 Helvetica;\f2\fnil\fcharset0 Menlo-Regular;
\f3\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red83\green101\blue121;\red255\green255\blue255;\red0\green0\blue0;
\red28\green0\blue207;\red155\green35\blue147;\red196\green26\blue22;}
{\*\expandedcolortbl;;\csgenericrgb\c32401\c39745\c47507;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c0\c0\c0;
\csgenericrgb\c11000\c0\c81000;\csgenericrgb\c60759\c13753\c57628;\csgenericrgb\c77000\c10200\c8600;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab593
\pard\tx593\pardeftab593\pardirnatural\partightenfactor0

\f0\i\fs24 \cf2 \cb3 #Ali Eshghi
\f1\i0 \cf0 \

\f0\i \cf2 #1112261
\f1\i0 \cf0 \

\f0\i \cf2 #STOCK TRANSACTION PROGRAM (Program set number 2)#
\f1\i0 \cf0 \
\
\

\f0\i \cf2 #INPUT
\f1\i0 \cf0 \
\

\f2 \cf4 count=\cf5 0
\f1 \cf0 \
\

\f3\b \cf6 while
\f2\b0 \cf4  count!=\cf5 2\cf4 :
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "enter the following as requested"\cf4 )
\f1 \cf0 \

\f2 \cf4     stock=input(\cf7 "stock name: "\cf4 )
\f1 \cf0 \

\f2 \cf4     stock_qt=int(input(\cf7 "number of shares: "\cf4 ))
\f1 \cf0 \

\f2 \cf4     stock_prc=float(input(\cf7 "stock price: "\cf4 ))
\f1 \cf0 \

\f2 \cf4     stock_sell=float(input(\cf7 "selling price: "\cf4 ))
\f1 \cf0 \

\f2 \cf4     broker=float(input(\cf7 "brocker commision: "\cf4 ))
\f1 \cf0 \
\

\f2 \cf4     stock_paid = stock_qt * stock_prc
\f1 \cf0 \

\f2 \cf4     com_amt = stock_paid * broker/\cf5 100
\f1 \cf0 \

\f2 \cf4     stock_sold = stock_qt * stock_sell
\f1 \cf0 \

\f2 \cf4     com_paid = stock_sold* broker/\cf5 100
\f1 \cf0 \

\f2 \cf4     prf_loss =(stock_sold-com_paid)-(stock_paid+com_amt)
\f1 \cf0 \
\

\f2 \cf4     count=count\cf5 +1
\f1 \cf0 \
\

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "the stock name: "\cf4 ,stock)
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "price paid for stock: $"\cf4 ,format(stock_paid,\cf5 ',.2f'\cf4 ),sep=\cf5 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "commision paid to broker: $"\cf4 ,format(com_amt,\cf5 ',.2f'\cf4 ),sep=\cf5 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "the price sold $"\cf4 ,format(stock_sold,\cf5 ',.2f'\cf4 ),sep=\cf5 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "commision paid to broker for selling: $"\cf4 ,format(com_paid,\cf5 ',.2f'\cf4 ),sep=\cf5 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf7 "profit or loss : $"\cf4 ,format(prf_loss,\cf5 ',.2f'\cf4 ),\cf7 "\\n\\n"\cf4 ,sep=\cf5 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f1 \cf0 \
\

\f0\i \cf2 ##>>> 
\f1\i0 \cf0 \

\f0\i \cf2 ## RESTART: /Users/alieshghi/Desktop/homework2.Ali/stock transaction program using while loop  aj version  copy.py 
\f1\i0 \cf0 \

\f0\i \cf2 ##enter the following as requested
\f1\i0 \cf0 \

\f0\i \cf2 ##stock name: aaa
\f1\i0 \cf0 \

\f0\i \cf2 ##number of shares: 23
\f1\i0 \cf0 \

\f0\i \cf2 ##stock price: 34
\f1\i0 \cf0 \

\f0\i \cf2 ##selling price: 54
\f1\i0 \cf0 \

\f0\i \cf2 ##brocker commision: 2
\f1\i0 \cf0 \

\f0\i \cf2 ##the stock name:  aaa
\f1\i0 \cf0 \

\f0\i \cf2 ##price paid for stock: $782.00
\f1\i0 \cf0 \

\f0\i \cf2 ##commision paid to broker: $15.64
\f1\i0 \cf0 \

\f0\i \cf2 ##the price sold $1,242.00
\f1\i0 \cf0 \

\f0\i \cf2 ##commision paid to broker for selling: $24.84
\f1\i0 \cf0 \

\f0\i \cf2 ##profit or loss : $419.52
\f1\i0 \cf0 \

\f0\i \cf2 ##
\f1\i0 \cf0 \

\f0\i \cf2 ##
\f1\i0 \cf0 \

\f0\i \cf2 ##enter the following as requested
\f1\i0 \cf0 \

\f0\i \cf2 ##stock name: ddd
\f1\i0 \cf0 \

\f0\i \cf2 ##number of shares: 43
\f1\i0 \cf0 \

\f0\i \cf2 ##stock price: 2
\f1\i0 \cf0 \

\f0\i \cf2 ##selling price: 54
\f1\i0 \cf0 \

\f0\i \cf2 ##brocker commision: 3
\f1\i0 \cf0 \

\f0\i \cf2 ##the stock name:  ddd
\f1\i0 \cf0 \

\f0\i \cf2 ##price paid for stock: $86.00
\f1\i0 \cf0 \

\f0\i \cf2 ##commision paid to broker: $2.58
\f1\i0 \cf0 \

\f0\i \cf2 ##the price sold $2,322.00
\f1\i0 \cf0 \

\f0\i \cf2 ##commision paid to broker for selling: $69.66
\f1\i0 \cf0 \

\f0\i \cf2 ##profit or loss : $2,163.76
\f1\i0 \cf0 \

\f0\i \cf2 ##
\f1\i0 \cf0 \

\f0\i \cf2 ##
\f1\i0 \cf0 \

\f0\i \cf2 ##>>> 
\f1\i0 \cf0 \
}