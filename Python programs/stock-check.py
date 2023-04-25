{\rtf1\ansi\ansicpg1252\cocoartf1561\cocoasubrtf600
{\fonttbl\f0\fnil\fcharset0 Menlo-Italic;\f1\fswiss\fcharset0 Helvetica;\f2\fnil\fcharset0 Menlo-Regular;
\f3\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red83\green101\blue121;\red255\green255\blue255;\red0\green0\blue0;
\red196\green26\blue22;\red155\green35\blue147;\red28\green0\blue207;}
{\*\expandedcolortbl;;\csgenericrgb\c32401\c39745\c47507;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c0\c0\c0;
\csgenericrgb\c77000\c10200\c8600;\csgenericrgb\c60759\c13753\c57628;\csgenericrgb\c11000\c0\c81000;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab593
\pard\tx593\pardeftab593\pardirnatural\partightenfactor0

\f0\i\fs24 \cf2 \cb3 #Ali Eshghi                           
\f1\i0 \cf0 \

\f0\i \cf2 #1112261                                         
\f1\i0 \cf0 \

\f0\i \cf2 #STOCK TRANSACTION PROGRAM (Program set number 2)
\f1\i0 \cf0 \
\
\

\f0\i \cf2 #INPUT
\f1\i0 \cf0 \
\

\f2 \cf4 stock_check = int(input(\cf5 "enter the amount of the stocks you are following: "\cf4 ))
\f1 \cf0 \
\

\f3\b \cf6 for
\f2\b0 \cf4  stock_check 
\f3\b \cf6 in
\f2\b0 \cf4  range(stock_check):
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "enter the following as requested"\cf4 )
\f1 \cf0 \

\f2 \cf4     stock=input(\cf5 "stock name: "\cf4 )
\f1 \cf0 \

\f2 \cf4     stock_qt=int(input(\cf5 "number of shares: "\cf4 ))
\f1 \cf0 \

\f2 \cf4     stock_prc=float(input(\cf5 "stock price: "\cf4 ))
\f1 \cf0 \

\f2 \cf4     stock_sell=float(input(\cf5 "selling price: "\cf4 ))
\f1 \cf0 \

\f2 \cf4     broker=float(input(\cf5 "brocker commision: "\cf4 ))
\f1 \cf0 \
\

\f2 \cf4     stock_paid = stock_qt * stock_prc
\f1 \cf0 \

\f2 \cf4     com_amt = stock_paid * broker/\cf7 100
\f1 \cf0 \

\f2 \cf4     stock_sold = stock_qt * stock_sell
\f1 \cf0 \

\f2 \cf4     com_paid = stock_sold* broker/\cf7 100
\f1 \cf0 \

\f2 \cf4     prf_loss =(stock_sold-com_paid)-(stock_paid+com_amt)
\f1 \cf0 \
\

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "the stock name: "\cf4 ,stock)
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "price paid for stock: $"\cf4 ,format(stock_paid,\cf7 ',.2f'\cf4 ),sep=\cf7 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "commision paid to broker: $"\cf4 ,format(com_amt,\cf7 ',.2f'\cf4 ),sep=\cf7 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "the price sold $"\cf4 ,format(stock_sold,\cf7 ',.2f'\cf4 ),sep=\cf7 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "commision paid to broker for selling: $"\cf4 ,format(com_paid,\cf7 ',.2f'\cf4 ),sep=\cf7 ''\cf4 )
\f1 \cf0 \

\f2 \cf4     
\f3\b \cf6 print
\f2\b0 \cf4 (\cf5 "profit or loss : $"\cf4 ,format(prf_loss,\cf7 ',.2f'\cf4 ),\cf5 "\\n\\n"\cf4 ,sep=\cf7 ''\cf4 )
\f1 \cf0 \

\f0\i \cf2 ##>>> 
\f1\i0 \cf0 \

\f0\i \cf2 ## RESTART: /Users/alieshghi/Desktop/homework2.Ali/stock transaction program aj version .py 
\f1\i0 \cf0 \

\f0\i \cf2 ##enter the amount of the stocks you are following: 1
\f1\i0 \cf0 \

\f0\i \cf2 ##enter the following as requested
\f1\i0 \cf0 \

\f0\i \cf2 ##stock name: aa
\f1\i0 \cf0 \

\f0\i \cf2 ##number of shares: 23
\f1\i0 \cf0 \

\f0\i \cf2 ##stock price: 34
\f1\i0 \cf0 \

\f0\i \cf2 ##selling price: 54
\f1\i0 \cf0 \

\f0\i \cf2 ##brocker commision: 3
\f1\i0 \cf0 \

\f0\i \cf2 ##the stock name:  aa
\f1\i0 \cf0 \

\f0\i \cf2 ##price paid for stock: $782.00
\f1\i0 \cf0 \

\f0\i \cf2 ##commision paid to broker: $23.46
\f1\i0 \cf0 \

\f0\i \cf2 ##the price sold $1,242.00
\f1\i0 \cf0 \

\f0\i \cf2 ##commision paid to broker for selling: $37.26
\f1\i0 \cf0 \

\f0\i \cf2 ##profit or loss : $399.28
\f1\i0 \cf0 \

\f0\i \cf2 ##
\f1\i0 \cf0 \

\f0\i \cf2 ##
\f1\i0 \cf0 \

\f0\i \cf2 ##>>> 
\f1\i0 \cf0 \
}