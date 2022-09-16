# debug note

```bash
lldb ./bin/learncpp
(lldb) target create ./bin/learncpp
(lldb) breakpoint list
(lldb) breakpoint set --name main
(lldb) breakpoint set --file main.cpp --line 7
(lldb) run
(lldb) frame variable
(lldb) process continue
(lldb) thread continue
--
(lldb) gui
```

## links

- https://lldb.llvm.org/use/tutorial.html
- https://qiita.com/theefool/items/8b985ce71dcdccf26abc
