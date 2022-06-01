# PatternCreator
Simple tool that converts a pattern to a sig + mask and other way around.
0x00 gets converted to ? (Wildcard) and other way round.

I created this as it was always a pain when i had a sig in vs but couldnt use it for the binary search in IDA pro, so i just made a simple tool that does the work for you.

# Example: 
```
input: E8 ? ? ? ? 48 8B 47 30 F3 0F 10 45
output: "\xE8\x00\x00\x00\x00\x48\x8B\x47\x30\xF3\x0F\x10\x45" "x????xxxxxxxx"
```
```
input: \xE8\x00\x00\x00\x00\x48\x8B\x47\x30\xF3\x0F\x10\x45
output: E8 ? ? ? ? 48 8B 47 30 F3 0F 10 45
```
