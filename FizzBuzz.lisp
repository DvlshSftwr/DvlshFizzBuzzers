; Gangsta Lisp baby ^,..,^
(setq X 3 Y 5 Z 15 mini 0 maxi 100 fiz "Fizz" buz "Buzz")

(loop for cnt from mini to maxi
      do(print cnt)
      do(cond
            ((zerop(mod cnt Z)) (write (concatenate 'string fiz buz)))
            ((zerop(mod cnt Y)) (write buz))
            ((zerop(mod cnt X)) (write fiz))
      )
)
