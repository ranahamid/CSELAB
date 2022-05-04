1.	#include<stdio.h>
2.	
3.	int main()
4.	{
5.		char ch;
6.	
7.		while(1==scanf("%c",&ch))
8.		{
9.			switch(ch)
10.			{
11.			case ']':
12.				printf("p");
13.				break;
14.			case '}':
15.				printf("P");
16.				break;
17.			case '[':
18.				printf("o");
19.				break;
20.			case '{':
21.				printf("O");
22.				break;
23.			case 'p':
24.				printf("i");
25.				break;
26.			case 'P':
27.				printf("I");
28.				break;
29.			case 'o':
30.				printf("u");
31.				break;
32.			case 'O':
33.				printf("U");
34.				break;
35.			case 'i':
36.				printf("y");
37.				break;
38.			case 'I':
39.				printf("Y");
40.				break;
41.			case 'u':
42.				printf("t");
43.				break;
44.			case 'U':
45.				printf("T");
46.				break;
47.			case 'y':
48.				printf("r");
49.				break;
50.			case 'Y':
51.				printf("R");
52.				break;
53.			case 't':
54.				printf("e");
55.				break;
56.			case 'T':
57.				printf("E");
58.				break;
59.			case 'r':
60.				printf("w");
61.				break;
62.			case 'R':
63.				printf("W");
64.				break;
65.			case 'e':
66.				printf("q");
67.				break;
68.			case 'E':
69.				printf("Q");
70.				break;
71.			case '\'':
72.				printf("l");
73.				break;
74.			case '\"':
75.				printf("L");
76.				break;
77.			case ';':
78.				printf("k");
79.				break;
80.			case ':':
81.				printf("K");
82.				break;
83.			case 'l':
84.				printf("j");
85.				break;
86.			case 'L':
87.				printf("J");
88.				break;
89.			case 'k':
90.				printf("h");
91.				break;
92.			case 'K':
93.				printf("H");
94.				break;
95.			case 'j':
96.				printf("g");
97.				break;
98.			case 'J':
99.				printf("G");
100.			break;
101.		case 'h':
102.			printf("f");
103.			break;
104.		case 'H':
105.			printf("F");
106.			break;
107.		case 'g':
108.			printf("d");
109.			break;
110.		case 'G':
111.			printf("D");
112.			break;
113.		case 'f':
114.			printf("s");
115.			break;
116.		case 'F':
117.			printf("S");
118.			break;
119.		case 'd':
120.			printf("a");
121.			break;
122.		case 'D':
123.			printf("A");
124.			break;
125.		case '/':
126.			printf(",");
127.			break;
128.		case '?':
129.			printf("<");
130.			break;
131.		case '.':
132.			printf("m");
133.			break;
134.		case '>':
135.			printf("M");
136.			break;
137.		case ',':
138.			printf("n");
139.			break;
140.		case '<':
141.			printf("N");
142.			break;
143.		case 'm':
144.			printf("b");
145.			break;
146.		case 'M':
147.			printf("B");
148.			break;
149.		case 'n':
150.			printf("v");
151.			break;
152.		case 'N':
153.			printf("V");
154.			break;
155.		case 'b':
156.			printf("c");
157.			break;
158.		case 'B':
159.			printf("C");
160.			break;
161.		case 'v':
162.			printf("x");
163.			break;
164.		case 'V':
165.			printf("X");
166.			break;
167.		case 'c':
168.			printf("z");
169.			break;
170.		case 'C':
171.			printf("Z");
172.			break;
173.		case '\\':
174.			printf("-");
175.			break;
176.		case '|':
177.			printf("_");
178.			break;
179.		case '=':
180.			printf("0");
181.			break;
182.		case '+':
183.			printf(")");
184.			break;
185.		case '-':
186.			printf("9");
187.			break;
188.		case '_':
189.			printf("(");
190.			break;
191.		case '0':
192.			printf("8");
193.			break;
194.		case ')':
195.			printf("*");
196.			break;
197.		case '9':
198.			printf("7");
199.			break;
200.		case '(':
201.			printf("&");
202.			break;
203.		case '8':
204.			printf("6");
205.			break;
206.		case '*':
207.			printf("^");
208.			break;
209.		case '7':
210.			printf("5");
211.			break;
212.		case '&':
213.			printf("%");
214.			break;
215.		case '6':
216.			printf("4");
217.			break;
218.		case '^':
219.			printf("$");
220.			break;
221.		case '5':
222.		printf("3");
223.			break;
224.		case '%':
225.			printf("#");
226.			break;
227.	case '4':
228.			printf("2");
229.			break;
230.		case '$':
231.			printf("@");
232.			break;
233.		case '3':
234.			printf("1");
235.			break;
236.		case '#':
237.			printf("!");
238.			break;
239.		case '2':
240.			printf("`");
241.			break;
242.		case '@':
243.			printf("~");
244.			break;
245.		default:
246.			printf("%c",ch);
247.			break;
248.		}
249.	}
250.	return 0;
251.}