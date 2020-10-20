(setq X 3)
(setq Y 5)
(setq Z 15)
(setq min 0)
(setq max 100)
(setq fiz "Fizz")
(setq buz "Buzz")
(setq fizbuz "Fizz Buzz")

(loop for cnt from min to max
      do(print cnt)
      do(cond
            ((zerop(mod cnt Z)) (write fizbuz))
            ((zerop(mod cnt Y)) (write buz))
            ((zerop(mod cnt X)) (write fiz))
      )
)
