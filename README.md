# PatternCreator
Simple tool that converts a pattern to a sig + mask and other way around

# Example: 
input: E8 ? ? ? ? 48 8B 47 30 F3 0F 10 45
output: "\xE8\x00\x00\x00\x00\x48\x8B\x47\x30\xF3\x0F\x10\x45" "x????xxxxxxxx"

input: \xE8\x00\x00\x00\x00\x48\x8B\x47\x30\xF3\x0F\x10\x45
output: E8 ? ? ? ? 48 8B 47 30 F3 0F 10 45
