-- Test script for dosbox-automation
-- Compile a simple C program with MSC 6.0

function main()
    print("Starting MSC 6.0 test...")
    
    -- Wait for DOS to be ready
    dos.wait_ready()
    
    -- Run a command and capture output
    local output = dos.run("ver")
    print("DOS version: " .. output)
    
    -- Check if CL.EXE exists
    local output = dos.run("dir c:\\bin\\cl.exe")
    print("CL.EXE check: " .. output)
    
    -- Try compiling
    local output = dos.run("cl /? 2>&1")
    print("CL help: " .. output:sub(1, 200))
    
    print("Test complete")
end

main()