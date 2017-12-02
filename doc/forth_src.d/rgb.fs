\ ainsuForth - sample neopixel manipulations

\ for the Circuit Playground Express using Arduino development environment.
\ November 26, 2017
remove 3000 delay


download
: dark 0 0 0 rgb ;
: ndk npx dark ;
: alldark 10 dup 0
  do 1 - dup ndk loop
  drop ;
: strawberry 9 0 1 rgb ;
: strw ndk 200 delay strawberry ;
\end.


0 strw 1 strw 2 strw 7 strw 8 strw 9 strw
