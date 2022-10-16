/*
 * bitmath.h
 *
 * Created: 8/7/2022 11:58:24 AM
 *  Author: Mohamed Amr Ahmed
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_


#define clearbit(var, no)				  ( var = (var & !(1<<no)) )
#define setbit(var, no)					  ( var = (var | (1<<no)) )
#define readbit(var, no)				  ( (var & (1<<no))?1:0 )
#define togglebit(var,no)		  		  ( (var&(1<<no)) ? (var = var ^ (1<<no)) : (var = (var | (1<<no))) )
#define togglebitxor(var,no)		  	  ( var = (var^(1<<no)) )

#define rotateleft(var, no)				  ( var = (var<<no) | (var>>(sizeof(var)-no)) )
#define rotateright(var, no)			  ( var = (var>>no) | (var<<(sizeof(var)-no)) )

#define ceil(n,m)                         (n/m + (n%m?1:0))
#endif /* BITMATH_H_ */