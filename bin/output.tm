TAPE:		1*11+111=
POINTER:	|________
STATE:		0
COMMAND:	0 1 0 1 r
---------------------
STATE:		0
TAPE:		1*11+111=
POINTER:	_|_______
COMMAND:	0 * 0 * r
---------------------
STATE:		0
TAPE:		1*11+111=
POINTER:	__|______
COMMAND:	0 1 0 1 r
---------------------
STATE:		0
TAPE:		1*11+111=
POINTER:	___|_____
COMMAND:	0 1 0 1 r
---------------------
STATE:		0
TAPE:		1*11+111=
POINTER:	____|____
COMMAND:	0 + 1 + r
---------------------
STATE:		1
TAPE:		1*11+111=
POINTER:	_____|___
COMMAND:	1 1 2 p r
---------------------
STATE:		2
TAPE:		1*11+p11=
POINTER:	______|__
COMMAND:	2 1 2 1 r
---------------------
STATE:		2
TAPE:		1*11+p11=
POINTER:	_______|_
COMMAND:	2 1 2 1 r
---------------------
STATE:		2
TAPE:		1*11+p11=
POINTER:	________|
COMMAND:	2 = 2 = r
---------------------
STATE:		2
TAPE:		1*11+p11=_
POINTER:	_________|
COMMAND:	2 _ 3 1 l
---------------------
STATE:		3
TAPE:		1*11+p11=1
POINTER:	________|_
COMMAND:	3 = 3 = l
---------------------
STATE:		3
TAPE:		1*11+p11=1
POINTER:	_______|__
COMMAND:	3 1 3 1 l
---------------------
STATE:		3
TAPE:		1*11+p11=1
POINTER:	______|___
COMMAND:	3 1 3 1 l
---------------------
STATE:		3
TAPE:		1*11+p11=1
POINTER:	_____|____
COMMAND:	3 p 1 p r
---------------------
STATE:		1
TAPE:		1*11+p11=1
POINTER:	______|___
COMMAND:	1 1 2 p r
---------------------
STATE:		2
TAPE:		1*11+pp1=1
POINTER:	_______|__
COMMAND:	2 1 2 1 r
---------------------
STATE:		2
TAPE:		1*11+pp1=1
POINTER:	________|_
COMMAND:	2 = 2 = r
---------------------
STATE:		2
TAPE:		1*11+pp1=1
POINTER:	_________|
COMMAND:	2 1 2 1 r
---------------------
STATE:		2
TAPE:		1*11+pp1=1_
POINTER:	__________|
COMMAND:	2 _ 3 1 l
---------------------
STATE:		3
TAPE:		1*11+pp1=11
POINTER:	_________|_
COMMAND:	3 1 3 1 l
---------------------
STATE:		3
TAPE:		1*11+pp1=11
POINTER:	________|__
COMMAND:	3 = 3 = l
---------------------
STATE:		3
TAPE:		1*11+pp1=11
POINTER:	_______|___
COMMAND:	3 1 3 1 l
---------------------
STATE:		3
TAPE:		1*11+pp1=11
POINTER:	______|____
COMMAND:	3 p 1 p r
---------------------
STATE:		1
TAPE:		1*11+pp1=11
POINTER:	_______|___
COMMAND:	1 1 2 p r
---------------------
STATE:		2
TAPE:		1*11+ppp=11
POINTER:	________|__
COMMAND:	2 = 2 = r
---------------------
STATE:		2
TAPE:		1*11+ppp=11
POINTER:	_________|_
COMMAND:	2 1 2 1 r
---------------------
STATE:		2
TAPE:		1*11+ppp=11
POINTER:	__________|
COMMAND:	2 1 2 1 r
---------------------
STATE:		2
TAPE:		1*11+ppp=11_
POINTER:	___________|
COMMAND:	2 _ 3 1 l
---------------------
STATE:		3
TAPE:		1*11+ppp=111
POINTER:	__________|_
COMMAND:	3 1 3 1 l
---------------------
STATE:		3
TAPE:		1*11+ppp=111
POINTER:	_________|__
COMMAND:	3 1 3 1 l
---------------------
STATE:		3
TAPE:		1*11+ppp=111
POINTER:	________|___
COMMAND:	3 = 3 = l
---------------------
STATE:		3
TAPE:		1*11+ppp=111
POINTER:	_______|____
COMMAND:	3 p 1 p r
---------------------
STATE:		1
TAPE:		1*11+ppp=111
POINTER:	________|___
COMMAND:	1 = 4 = l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	_______|____
COMMAND:	4 p 4 p l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	______|_____
COMMAND:	4 p 4 p l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	_____|______
COMMAND:	4 p 4 p l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	____|_______
COMMAND:	4 + 4 + l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	___|________
COMMAND:	4 1 4 1 l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	__|_________
COMMAND:	4 1 4 1 l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	_|__________
COMMAND:	4 * 4 * l
---------------------
STATE:		4
TAPE:		1*11+ppp=111
POINTER:	|___________
COMMAND:	4 1 4 1 l
---------------------
STATE:		4
TAPE:		_1*11+ppp=111
POINTER:	|____________
COMMAND:	4 _ 5 _ r
---------------------
STATE:		5
TAPE:		_1*11+ppp=111
POINTER:	_|___________
COMMAND:	5 1 6 _ r
---------------------
STATE:		6
TAPE:		__*11+ppp=111
POINTER:	__|__________
COMMAND:	6 * 7 * r
---------------------
STATE:		7
TAPE:		__*11+ppp=111
POINTER:	___|_________
COMMAND:	7 1 8 m r
---------------------
STATE:		8
TAPE:		__*m1+ppp=111
POINTER:	____|________
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+ppp=111
POINTER:	_____|_______
COMMAND:	8 + 8 + r
---------------------
STATE:		8
TAPE:		__*m1+ppp=111
POINTER:	______|______
COMMAND:	8 p 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+1pp=111
POINTER:	_______|_____
COMMAND:	8 p 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+11p=111
POINTER:	________|____
COMMAND:	8 p 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+111=111
POINTER:	_________|___
COMMAND:	8 = 8 = r
---------------------
STATE:		8
TAPE:		__*m1+111=111
POINTER:	__________|__
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+111=111
POINTER:	___________|_
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+111=111
POINTER:	____________|
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*m1+111=111_
POINTER:	_____________|
COMMAND:	8 _ 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	____________|_
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	___________|__
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	__________|___
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	_________|____
COMMAND:	9 = 9 = l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	________|_____
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	_______|______
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	______|_______
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*m1+111=1111
POINTER:	_____|________
COMMAND:	9 + 10 + l
---------------------
STATE:		10
TAPE:		__*m1+111=1111
POINTER:	____|_________
COMMAND:	10 1 11 1 l
---------------------
STATE:		11
TAPE:		__*m1+111=1111
POINTER:	___|__________
COMMAND:	11 m 7 m r
---------------------
STATE:		7
TAPE:		__*m1+111=1111
POINTER:	____|_________
COMMAND:	7 1 8 m r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	_____|________
COMMAND:	8 + 8 + r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	______|_______
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	_______|______
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	________|_____
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	_________|____
COMMAND:	8 = 8 = r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	__________|___
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	___________|__
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	____________|_
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111
POINTER:	_____________|
COMMAND:	8 1 8 1 r
---------------------
STATE:		8
TAPE:		__*mm+111=1111_
POINTER:	______________|
COMMAND:	8 _ 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	_____________|_
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	____________|__
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	___________|___
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	__________|____
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	_________|_____
COMMAND:	9 = 9 = l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	________|______
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	_______|_______
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	______|________
COMMAND:	9 1 9 1 l
---------------------
STATE:		9
TAPE:		__*mm+111=11111
POINTER:	_____|_________
COMMAND:	9 + 10 + l
---------------------
STATE:		10
TAPE:		__*mm+111=11111
POINTER:	____|__________
COMMAND:	10 m 12 1 l
---------------------
STATE:		12
TAPE:		__*m1+111=11111
POINTER:	___|___________
COMMAND:	12 m 12 1 l
---------------------
STATE:		12
TAPE:		__*11+111=11111
POINTER:	__|____________
COMMAND:	12 * 4 * l
---------------------
STATE:		4
TAPE:		__*11+111=11111
POINTER:	_|_____________
COMMAND:	4 _ 5 _ r
---------------------
STATE:		5
TAPE:		__*11+111=11111
POINTER:	__|____________
COMMAND:	5 * 5 * e
