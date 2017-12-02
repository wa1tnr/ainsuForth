\ reverse collate

\ fixed-length sample string on TOS
: saixo
[char] s
[char] a
[char] i
[char] x
[char] o
;

\ replay is fixed-length demo only.
: replay >r >r >r >r >r
  r> emit r> emit r> emit r> emit r> emit ;

\end.


