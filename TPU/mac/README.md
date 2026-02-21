What is a MAC.
MAC = Multiply- accumulate

From the way I understand it... A MAC is kind of like a half adder but for GEMM accelerators

A MAC consists of a multiplier, an adder, and a register.

A MAC does the simple operation c <- c + a\*b

Some quick notes before I close this for the night.

There are 2 ways to retrieve your data after the MM
You can either pull directly from the systolic array which is not so good at scale
or engineer a way to do this linearly as soon as you know that MAC is done.

I think I will start with the former.

Additionally. It takes 2 clock cycles. One for the multiply (register the result) then the second is the accumulate where you add that value into the previous accumulate
